// TO DO:
// -> Finish Implementing newState connect()
// -> Refine handleMoveExecution()
// -> Start Implementing Bots
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settings.h"
#include <QApplication>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QRandomGenerator>
#include <QTimer>
#include <QDebug>
#include <string>
#include <ctime>
#include <cstdlib>
#include <QtStateMachine>
#include "mainwindow.h"
#include "home.h"
#include "ConditionalTransition.h"
#include <QMessageBox>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Initial Variable Setup
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    setupBoard();
    setupInitialPositions();
    mwSettings = new Settings();
    whiteChoice = new Home();
    blackChoice = new Home();
    tableWidget = ui->RoundTurnTable;
    srand(time(0));
    wCheck = false;
    bCheck = false;
    co = 0;
    end_status = 2;
    timer_white = 0;
    timer_black = 0;
    selectedMove = "";

    // Initializing states
    machine = new QStateMachine(this);
    QState *initState = new QState();
    QState *settingsState = new QState();
    QState *aboutState = new QState();
    QState *tutorial1State = new QState();
    QState *tutorial2State = new QState();
    QState *houseState = new QState();

    QState *game = new QState();
    QState *newTurn = new QState(game);
    QState *botInput = new QState(game);
    QState *playerInput = new QState(game);
    QState *playerMoveExecution = new QState(game);
    QState *checkEnd = new QState(game);
    // QState *botMoveExecution = new QState(game);  // need this to be implemented

    QState *endState = new QState();

    // DEFINING STATE TRANSITIONS AND EVENTS
    // init state
    initState->addTransition(ui->pushButton_start, &QPushButton::clicked, houseState);
    initState->addTransition(ui->pushButton_tutorial, &QPushButton::clicked, tutorial1State);
    initState->addTransition(ui->pushButton_settings, &QPushButton::clicked, settingsState);
    initState->addTransition(ui->pushButton_about, &QPushButton::clicked, aboutState);

    // setting state
    settingsState->addTransition(ui->pushButton_home_settings, &QPushButton::clicked, initState);
    settingsState->addTransition(ui->pushButton_back_settings, &QPushButton::clicked, initState);

    // about state
    aboutState->addTransition(ui->pushButton_home_about, &QPushButton::clicked, initState);

    // tutorial state
    tutorial1State->addTransition(ui->pushButton_home_tutorial, &QPushButton::clicked, initState);
    tutorial1State->addTransition(ui->pushButton_continue_tutorial, &QPushButton::clicked, tutorial2State);
    tutorial2State->addTransition(ui->pushButton_home_tutorial_end, &QPushButton::clicked, initState);
    tutorial2State->addTransition(ui->pushButton_previous_tutorial, &QPushButton::clicked, tutorial1State);

    // reset the game when endState is left
    connect(endState, &QState::exited, this, [=](){
        qDebug() << "Game EndState Reached!";
        resetGame();
    });

    // input change will apply to playerInput
    houseState->addTransition(ui->pushButton_home2, &QPushButton::clicked, playerInput);

    // game state
    game->setInitialState(newTurn);

    // new turn state
    // for now, this will be Player vs. Player
    connect(newTurn, &QState::entered, this, [=](){
        // UNCOMMENT OUT WHEN takeBotTurn() WORKS
        // if (co % 2 == 0) {
        //     emit takePlayerTurn();
        // }
        // else {
        //     emit takeBotTurn();
        // }
        emit takePlayerTurn();
        qDebug() << "new turn";
    });

    newTurn->addTransition(this, &MainWindow::takeBotTurn, botInput);
    newTurn->addTransition(this, &MainWindow::takePlayerTurn, playerInput);

    // playerInput state
    connect(playerInput, &QState::entered, this, [=](){
        qDebug() << "player input state entered";
        handlePlayerInput();
    });

    playerInput->addTransition(this, &MainWindow::moveReady, playerMoveExecution);

    // playerMoveExecution state
    connect(playerMoveExecution, &QState::entered, this, [=](){
        qDebug() << "player move execution state entered";
        handleMoveExecution();
    });

    playerMoveExecution->addTransition(this, &MainWindow::invalidMoveSelected, playerInput);

    // check end state
    playerMoveExecution->addTransition(this, &MainWindow::moveExecutionDone, checkEnd);
    connect(checkEnd, &QState::entered, this, [=](){
        qDebug() << "check end entered";
        checkForEnd();
        emit checkEndLoop();
    });

    checkEnd->addTransition(this, &MainWindow::checkEndLoop, checkEnd);
    checkEnd->addTransition(this, &MainWindow::endReached, endState);
    checkEnd->addTransition(this, &MainWindow::takeNewTurn, newTurn);

    // end state
    game->addTransition(ui->pushButton_EndGame, &QPushButton::clicked, endState);
    endState->addTransition(ui->pushButton_home_end, &QPushButton::clicked, initState);
    connect(endState, &QState::entered, this, [=](){
        change_endgame_status();
        std::cout << "reached the end" << std::endl;
        finalWhiteTime(static_cast<double>(timer_white) / 1000.0);
        finalBlackTime(static_cast<double>(timer_black) / 1000.0);
        resetGame();
        ui->stackedWidget->setCurrentIndex(8);
    });

    // Defining state screen index
    initState->assignProperty(ui->stackedWidget, "currentIndex", 0);
    settingsState->assignProperty(ui->stackedWidget, "currentIndex", 6);
    aboutState->assignProperty(ui->stackedWidget, "currentIndex", 7);
    tutorial1State->assignProperty(ui->stackedWidget, "currentIndex", 3);
    tutorial2State->assignProperty(ui->stackedWidget, "currentIndex", 4);
    houseState->assignProperty(ui->stackedWidget, "currentIndex", 1);
    game->assignProperty(ui->stackedWidget, "currentIndex", 5);
    endState->assignProperty(ui->stackedWidget, "currentIndex", 8);


    // Add States to machine
    machine->addState(initState);
    machine->addState(settingsState);
    machine->addState(aboutState);
    machine->addState(tutorial1State);
    machine->addState(tutorial2State);
    machine->addState(houseState);
    machine->addState(game);
    machine->addState(newTurn);
    machine->addState(botInput);
    machine->addState(playerInput);
    machine->addState(playerMoveExecution);
    machine->addState(checkEnd);
    machine->addState(endState);


    // Start state machine
    machine->setInitialState(initState);
    machine->start();

}

// destructor
MainWindow::~MainWindow()
{
    delete ui;
}

// x1 and x2 are characters like 'a', 'b' etc - therefore, {x1, y1} E {a, 3} && {x2, y2} E {b, 6} (as an example)
// i = 0 means no move, i = 1 means just move and possible check, and i = 2 means move, kill and possible check
void MainWindow::populateCells(char x1, int y1, char x2, int y2, int i)
{
    if ((size / 2) == capacity)
    {
        resize();
    }
    if (i == 0) {return;}
    int row = (size % (capacity * 2)) / 2;
    string out;
    if (game.board[y1 - 1][game.convertToInt(x1)]->getID() == "pawn")
    {
        out += "";
    }
    else if (game.board[y1 - 1][game.convertToInt(x1)]->getID() == "bishop")
    {
        out += "B";
    }
    else if (game.board[y1 - 1][game.convertToInt(x1)]->getID() == "king")
    {
        out += "K";
    }
    else if (game.board[y1 - 1][game.convertToInt(x1)]->getID() == "knight")
    {
        out += "N";
    }
    else if (game.board[y1 - 1][game.convertToInt(x1)]->getID() == "rook")
    {
        out += "R";
    }
    else if (game.board[y1 - 1][game.convertToInt(x1)]->getID() == "queen")
    {
        out += "Q";
    }
    else
    {
        out += "Invalid";
        if (globalTurn == 1) {  // update white part of table
            tableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(out)));
        }
        else {  // update black part of table
            tableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(out)));
        }
        return;
    }

    if (i == 1) {
        out += x2 + to_string(y2);
        if (globalTurn == 0) {
            bCheck = game.isCheck();
            if (bCheck == true) {
                out += "+";
            }
        }
        else if (globalTurn == 1) {
            wCheck = game.isCheck();
            if (wCheck == true) {
                out += "+";
            }
        }
    }
    else if (i == 2) {
        // 'x' only if the piece moved AND killed an opponent ~ STILL NEED TO IMPLEMENT
        out += "x";
        out += x2 + to_string(y2);
        if (globalTurn == 0) {
            bCheck = game.isCheck();
            if (bCheck == true) {
                out += "+";
            }
        }
        else if (globalTurn == 1) {
            wCheck = game.isCheck();
            if (wCheck == true) {
                out += "+";
            }
        }
    }
    if (globalTurn == 1) {  // update white part of table
        tableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(out)));
    }
    else {  // update black part of table
        tableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(out)));
    }
    ++size;
}

// clears the gameTable in GUI when playing second time
void MainWindow::clearTableWidget()
{
    for (int r = 0; r < tableWidget->rowCount(); r++)
    {
        for (int c = 0; c < tableWidget->columnCount(); c++)
        {
            tableWidget->setItem(r, c, new QTableWidgetItem(""));
        }
    }
}

// {1000 = 8 in bits} -> only applicable when playing with AI
void MainWindow::on_easyLevel_clicked()
{
    mwSettings->setDifflevel(8);
    QMessageBox::warning(this, "Option Conflict Warning", "Only applicable if AI is playing (either AI vs. AI or Player vs. AI). "
                                                          "These settings would be disregarded otherwise.", QMessageBox::Ok);
}

// {0100 = 4 in bits} -> only applicable when playing with AI
void MainWindow::on_intermediateLevel_clicked()
{
    mwSettings->setDifflevel(4);
    QMessageBox::warning(this, "Option Conflict Warning", "Only applicable if AI is playing (either AI vs. AI or Player vs. AI). "
                                                          "These settings would be disregarded otherwise.", QMessageBox::Ok);
}

// {0010 = 2 in bits} -> only applicable when playing with AI
void MainWindow::on_hardLevel_clicked()
{
    mwSettings->setDifflevel(2);
    QMessageBox::warning(this, "Option Conflict Warning", "Only applicable if AI is playing (either AI vs. AI or Player vs. AI). "
                                                          "These settings would be disregarded otherwise.", QMessageBox::Ok);
}

// {0001 = 1 in bits} -> only applicable when playing with AI
void MainWindow::on_expertLevel_clicked()
{
    mwSettings->setDifflevel(1);
    QMessageBox::warning(this, "Option Conflict Warning", "Only applicable if AI is playing (either AI vs. AI or Player vs. AI). "
                                                          "These settings would be disregarded otherwise.", QMessageBox::Ok);
}

// {false = voice} & {true = touch} -> following input functions not applicable when playing AI vs. AI
void MainWindow::on_WvoiceCommand_clicked()
{
    mwSettings->setWhiteCommand(false);
}

void MainWindow::on_WtouchCommand_clicked()
{
    mwSettings->setWhiteCommand(true);
}

// {false = voice} & {true = touch}
void MainWindow::on_BvoiceCommand_clicked()
{
    mwSettings->setBlackCommand(false);
}

void MainWindow::on_BtouchCommand_clicked()
{
    mwSettings->setBlackCommand(true);
}

// clears the specific tile in chess board
void MainWindow::clearButton(QPushButton *button) {
    button->setIcon(QIcon());
}

// re-sets the board when playing second time and so on
void MainWindow::setupBoard()
{
    for (char col = 'A'; col <= 'H'; ++col) {
        for (int row = 1; row <= 8; ++row) {
            QString position = QString(col) + QString::number(row);
            QString buttonName = "pushButton_" + position;
            QPushButton* button = findChild<QPushButton*>(buttonName);
            pieces.clear();
            clearButton(button);
        }
    }
    // clear the internal map
    boardMap.clear();

    // map each push button to its chessboard position
    for (char col = 'A'; col <= 'H'; ++col) {
        for (int row = 1; row <= 8; ++row) {
            QString position = QString(col) + QString::number(row);
            QString buttonName = "pushButton_" + position;

            // find the button in the UI
            QPushButton* button = findChild<QPushButton*>(buttonName);
            if (button) {
                boardMap[position] = button;

                // assign colors
                bool isWhiteTile = ((col - 'A') + row) % 2 == 0;
                QString backgroundColor = isWhiteTile ? "#ffffff" : "#4560AB"; // White and blue
                button->setStyleSheet(QString(
                                          "QPushButton { background-color: %1; border: none; }"
                                          ).arg(backgroundColor));
                if (count == 0) {
                    connect(button, &QPushButton::clicked, this, &MainWindow::onTileClicked);
                }
            }
        }
    }
    count = 1;
}

// add chess pieces to their starting positions
void MainWindow::setupInitialPositions()
{
    pieces.append(ChessPiece("rook", "white", "A1"));
    pieces.append(ChessPiece("knight", "white", "B1"));
    pieces.append(ChessPiece("bishop", "white", "C1"));
    pieces.append(ChessPiece("queen", "white", "D1"));
    pieces.append(ChessPiece("king", "white", "E1"));
    pieces.append(ChessPiece("bishop", "white", "F1"));
    pieces.append(ChessPiece("knight", "white", "G1"));
    pieces.append(ChessPiece("rook", "white", "H1"));
    for (char col = 'A'; col <= 'H'; ++col)
        pieces.append(ChessPiece("pawn", "white", QString(col) + "2"));

    // add black pieces
    pieces.append(ChessPiece("rook", "black", "A8"));
    pieces.append(ChessPiece("knight", "black", "B8"));
    pieces.append(ChessPiece("bishop", "black", "C8"));
    pieces.append(ChessPiece("queen", "black", "D8"));
    pieces.append(ChessPiece("king", "black", "E8"));
    pieces.append(ChessPiece("bishop", "black", "F8"));
    pieces.append(ChessPiece("knight", "black", "G8"));
    pieces.append(ChessPiece("rook", "black", "H8"));
    for (char col = 'A'; col <= 'H'; ++col)
        pieces.append(ChessPiece("pawn", "black", QString(col) + "7"));

    // place pieces on the board
    for (ChessPiece &piece : pieces) {
        placePieceOnTile(piece.position, piece.type, piece.color);
    }
}

// places piece on a specific tile after it is moved -> used inside handleMoveExecution()
void MainWindow::placePieceOnTile(const QString& position, const QString& pieceType, const QString& color)
{
    QPushButton* button = boardMap[position];
    if (button) {
        // set the piece icon
        QString imagePath = ":/images/images/" + color + "_" + pieceType + ".png";
        QPixmap pixmap(imagePath);
        QIcon icon(pixmap);
        button->setIcon(icon);
        button->setIconSize(QSize(30, 30));

        // keep tile's background color
        bool isWhiteTile = ((position[0].toLatin1() - 'A') + position.mid(1).toInt()) % 2 == 0;
        QString backgroundColor = isWhiteTile ? "#ffffff" : "#4560AB"; // White and blue
        button->setStyleSheet(QString(
                                  "QPushButton { background-color: %1; border: none; }"
                                  "QPushButton::icon { margin: 0; padding: 0; }"
                                  ).arg(backgroundColor));
    }
}

// handles voice/touch input for each team
void MainWindow::handlePlayerInput() {
    selectedMove = "";
    qDebug() << "entered input handler";
    determineGameInput();  // this should handle all input (uses disableTouchInput())
}

// helper function for handlePlayerInput()
void MainWindow::determineGameInput() {
    if (mwSettings->getBlackCommand() && mwSettings->getWhiteCommand()) {
        qDebug() << "everyone will play with touch input";
        qDebug() << "getting touch input";
        for (auto it = boardMap.begin(); it != boardMap.end(); ++it) {
            it.value()->setEnabled(true);  // Enable touch input for all tiles
        }
    }
    else if (mwSettings->getBlackCommand()) {
        if (globalTurn == 1) {
            qDebug() << "black is playing touch";
            qDebug() << "getting touch input";
            for (auto it = boardMap.begin(); it != boardMap.end(); ++it) {
                it.value()->setEnabled(true);  // Enable touch input for all tiles
            }
        }
        else {
            qDebug() << "white is playing voice";
            qDebug() << "getting voice input";
            disableTouchInput();
            getVoiceInput();
        }
    }
    else if (mwSettings->getWhiteCommand()) {
        if (globalTurn == 0) {
            qDebug() << "white is playing touch";
            qDebug() << "getting touch input";
            for (auto it = boardMap.begin(); it != boardMap.end(); ++it) {
                it.value()->setEnabled(true);  // Enable touch input for all tiles
            }
        }
        else {
            qDebug() << "black is playing voice";
            qDebug() << "getting voice input";
            disableTouchInput();
            getVoiceInput();
        }
    }
    else {
        qDebug() << "everyone will play with voice input";
        qDebug() << "getting voice input";
        disableTouchInput();
        getVoiceInput();
    }
}

// helper function for determineGameInput()
void MainWindow::disableTouchInput() {
    for (auto it = boardMap.begin(); it != boardMap.end(); ++it) {
        it.value()->setEnabled(false);  // Disable touch input for all tiles
    }
}

// handles when a chess tile is clicked and gathers piece data on that tile
void MainWindow::onTileClicked()
{
    QPushButton* clickedButton = qobject_cast<QPushButton*>(sender());
    if (!clickedButton) return;

    QString clickedPosition;
    for (auto it = boardMap.begin(); it != boardMap.end(); ++it) {
        if (it.value() == clickedButton) {
            clickedPosition = it.key();
            break;
        }
    }

    if (selectedPiece) {
        selectedMove = selectedPiece->position + clickedPosition;
        disableTouchInput();
        qDebug() << "Move ready";
        emit moveReady();
    } else {
        // Selecting a piece
        for (ChessPiece &piece : pieces) {
            if (piece.position == clickedPosition) {
                selectedPiece = &piece;
                break;
            }
        }
    }
}

// STILL NEED TO IMPLEMENT
void MainWindow::getVoiceInput() {
    QString voice_input = "";
    selectedMove = voice_input;
    emit moveReady();
}

// STILL NEED TO IMPLEMENT -> get bot input
void MainWindow::handleBotInput() {
    emit moveReady();
}

// handles the moving animation and logic of GUI
void MainWindow::handleMoveExecution() {
    // TO DO: motor mvmt
    // write selectedMove to file
    // while (read file) != done {}

    // TO DO: update method of extracting coordinates from moveReady string and assign selectedPiece/clickedPosition
    qDebug() << "move handler entered";

    // if playing via voice input, selectedMove is empty string for now
    QString initPosition = selectedMove.left(2);
    QString destPosition = selectedMove.right(2);
    int move_result = 1;
    qDebug() << "Position: " << initPosition << destPosition;

    // if piece isn't selected, select it
    if (!selectedPiece) {
        for (ChessPiece &piece : pieces) {
            if (piece.position == initPosition) {
                selectedPiece = &piece;
                break;
            }
        }
    }

    // only if the piece is selected, continue with the logic
    if (selectedPiece) {
        if (isValidMove(selectedPiece, initPosition, destPosition)) {  // checks if move is valid or not
            if (selectedPiece) {
                if (globalTurn == 0) {
                    globalTurn = 1;
                }
                else {
                    globalTurn = 0;
                }
                // Moving the selected piece
                if (!timer.isValid()) {
                    timer.start();
                    previousTime = 0;
                }
                currTime = timer.elapsed();
                // Reset the previous tile and retain its background color
                QPushButton* previousButton = boardMap[selectedPiece->position];
                if (previousButton) {
                    previousButton->setIcon(QIcon()); // Clear the icon
                    // Calculate the background color based on tile position
                    QString previousPosition = selectedPiece->position;
                    bool isWhiteTile = ((previousPosition[0].toLatin1() - 'A') +
                                        previousPosition.mid(1).toInt()) % 2 == 0;
                    QString backgroundColor = isWhiteTile ? "#ffffff" : "#4560AB"; // White or blue
                    previousButton->setStyleSheet(QString(
                                                      "QPushButton { background-color: %1; border: none; }"
                                                      ).arg(backgroundColor));
                    bool ok;
                    // gather intel to pass as parameter for populateCell()
                    QString extracted_x1 = previousPosition.left(1).toLower();
                    int extracted_y1 = previousPosition.right(1).toInt(&ok);
                    QString extracted_x2 = destPosition.left(1).toLower();
                    int extracted_y2 = destPosition.right(1).toInt(&ok);
                    populateCells(extracted_x1.toLatin1().at(0), extracted_y1, extracted_x2.toLatin1().at(0), extracted_y2, move_result);
                    qDebug() << extracted_x1 << extracted_y1 << extracted_x2 << extracted_y2;
                    // finalize timer for output
                    co++;
                    updateTime(currTime - previousTime);
                    previousTime = currTime;
                }

                // Update the piece's position and place it on the new tile
                placePieceOnTile(destPosition, selectedPiece->type, selectedPiece->color);
                selectedPiece->position = destPosition;

                // Deselect the piece
                selectedPiece = nullptr;

                qDebug() << "Move Executed";
                // updates board UI with move
                emit moveExecutionDone();
                return;
            }
        }
        else {
            QMessageBox::warning(this, "Illegal Move", "Your move is invalid.", QMessageBox::Ok);
            emit invalidMoveSelected();
            return;
        }
    }
}

// checks if anyone won or if its a tie
void MainWindow::checkForEnd() {
    qDebug() << "check end, going to new turn";
    if (game.whiteWin) {
        end_status = 0;
        emit endReached();
    }
    else if (game.blackWin) {
        end_status = 1;
        emit endReached();
    }
    else {
        end_status = 2;
        emit takeNewTurn();
    }
}

// function called inside endState to reset variables after every game
void MainWindow::resetGame() {
    setupBoard();
    size = 0;
    capacity = 10;
    mwSettings = new Settings();
    whiteChoice = new Home();
    blackChoice = new Home();
    tableWidget = ui->RoundTurnTable;
    srand(time(0));
    wCheck = false;
    bCheck = false;
    co = 0;
    end_status = 2;
    timer_white = 0;
    timer_black = 0;
    timer.restart();
    globalTurn = 0;
    setupInitialPositions();
    clearTableWidget();
}

// checks all possible invalid moves to see if current movement violates it
bool MainWindow::isValidMove(ChessPiece* piece, QString& from, QString& to)
{
    // Not allowing players to play twice on their turn
    qDebug() << "color: " << piece->color << ", turn: " << globalTurn;
    if (piece->color == "white" && globalTurn != 0) {
        selectedPiece = nullptr;  // Unselect the piece
        return false;
    }
    if (piece->color == "black" && globalTurn != 1) {
        selectedPiece = nullptr;  // Unselect the piece
        return false;
    }

    // Not allowing players to place the piece in the same place
    if (from == to) {
        selectedPiece = nullptr;  // Unselect the piece
        return false;
    }

    // Convert board notation characters to board indices.
    int oldX = game.convertToInt(tolower(from[0].toLatin1()));
    int oldY = game.convertToInt(tolower(from[1].toLatin1()));
    int newX = game.convertToInt(tolower(to[0].toLatin1()));
    int newY = game.convertToInt(tolower(to[1].toLatin1()));

    // Instead of creating a new piece, use the piece from the board.
    Piece* chessPiece = game.board[oldY][oldX];

    // Check if the move delta is valid using the board logic.
    if (!game.isValidMove(chessPiece, (newX - oldX), (newY - oldY))) {
        selectedPiece = nullptr;
        return false;
    }
    return true;
}

// White House Selection
void MainWindow::on_pushButton_home1_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

// Bits For White Home Click (following functions)
void MainWindow::on_pushButton_Gryffindor_clicked()
{
    whiteChoice->userChoice = 1;
}

void MainWindow::on_pushButton_Slytherin_clicked()
{
    whiteChoice->userChoice = 2;
}

void MainWindow::on_pushButton_Hufflepuff_clicked()
{
    whiteChoice->userChoice = 4;
}

void MainWindow::on_pushButton_Ravenclaw_clicked()
{
    whiteChoice->userChoice = 8;
}

// Bits For Black Home Click
void MainWindow::on_pushButton_Gryffindor_2_clicked()
{
    blackChoice->userChoice = 1;
}

void MainWindow::on_pushButton_Slytherin_2_clicked()
{
    blackChoice->userChoice = 2;
}

void MainWindow::on_pushButton_Hufflepuff_2_clicked()
{
    blackChoice->userChoice = 4;
}

void MainWindow::on_pushButton_Ravenclaw_2_clicked()
{
    blackChoice->userChoice = 8;
}

// STILL NEED THIS TO BE COMPLETED AND IMPLEMENTED
void MainWindow::change_endgame_status()
{
    // once software implements a function to check who won, end_status would be altered accordingly
    if (end_status == 0)
    {
        ui->winner_label->setText("House 1 Wins!");  // white team won
    }
    else if (end_status == 1)
    {
        ui->winner_label->setText("House 2 Wins!");  // black team won
    }
    else if (end_status == 2)
    {
        ui->winner_label->setText("Game is Draw!");  // neither won
    }
}

// dynamically resizes gameTable
void MainWindow::resize()
{
    for(unsigned i = 0; i < 10; ++i)
    {
        tableWidget->insertRow(i + capacity);
    }
    capacity += 10;
}

// updates timer to be displayed at the end
void MainWindow::updateTime(int diff)
{
    (globalTurn == 0) ? this->timer_white+=diff : this->timer_black+=diff;
}

// calculates final time for white in minutes and seconds
void MainWindow::finalWhiteTime(int timer_white)
{
    QString result;
    QString strMinutes = QString::number(timer_white / 60);
    QString strSeconds = QString::number(timer_white % 60);
    if (strSeconds.size() == 1) { strSeconds = "0" + strSeconds; }
    result = strMinutes + ":" + strSeconds;
    ui->house_1_time->setText(result);
}

// calculates final time for black in minutes and seconds
void MainWindow::finalBlackTime(int timer_black)
{
    QString result;
    QString strMinutes = QString::number(timer_black / 60);
    QString strSeconds = QString::number(timer_black % 60);
    if (strSeconds.size() == 1) { strSeconds = "0" + strSeconds; }
    result = strMinutes + ":" + strSeconds;
    ui->house_2_time->setText(result);
}

// handles click for Player vs. Player button in settings
void MainWindow::on_pvpButton_clicked()
{
    mwSettings->setGamemodeNum(1);
    game.setGamemode(1);
}

// handles click for Player vs. AI button in settings
void MainWindow::on_pvaButton_clicked()
{
    mwSettings->setGamemodeNum(2);  // this would mean that white -> player and black -> AI
    game.setGamemode(1);
    QMessageBox::warning(this, "Option Conflict Warning", "Selecting Player vs. AI will override your black VOICE AND TOUCH input choice.", QMessageBox::Ok);
}

// handles click for AI vs. AI button in settings
void MainWindow::on_avaButton_clicked()
{
    mwSettings->setGamemodeNum(4);
    game.setGamemode(1);
    QMessageBox::warning(this, "Option Conflict Warning", "Selecting AI vs. AI will override all VOICE AND TOUCH input choices.", QMessageBox::Ok);
}
