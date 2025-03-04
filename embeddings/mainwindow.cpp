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

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
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
    //QState *botMoveExecution = new QState(game);
    QState *playerMoveExecution = new QState(game);
    QState *checkEnd = new QState(game);

    QState *endState = new QState();

    // DEFINING STATE TRANSITIONS AND EVENTS

    // init state
    initState->addTransition(ui->pushButton_start, &QPushButton::clicked, houseState);
    initState->addTransition(ui->pushButton_tutorial, &QPushButton::clicked, tutorial1State);
    initState->addTransition(ui->pushButton_settings, &QPushButton::clicked, settingsState);
    initState->addTransition(ui->pushButton_about, &QPushButton::clicked, aboutState);

    // setting state
    settingsState->addTransition(ui->pushButton_home_settings, &QPushButton::clicked, initState);

    // about state
    aboutState->addTransition(ui->pushButton_home_about, &QPushButton::clicked, initState);

    // tutorial state
    tutorial1State->addTransition(ui->pushButton_home_tutorial, &QPushButton::clicked, initState);
    tutorial1State->addTransition(ui->pushButton_continue_tutorial, &QPushButton::clicked, tutorial2State);
    tutorial2State->addTransition(ui->pushButton_home_tutorial_end, &QPushButton::clicked, initState);
    tutorial2State->addTransition(ui->pushButton_previous_tutorial, &QPushButton::clicked, tutorial1State);

    // house state
    connect(houseState, &QState::entered, this, [=](){
        resetGame();
    });

    QSignalTransition* enterGame = houseState->addTransition(ui->pushButton_home2, &QPushButton::clicked, game);

    // game state
    game->setInitialState(newTurn);
    connect(enterGame, &QAbstractTransition::triggered, this, [=](){
        disableTouchInput();
        qDebug() << "game entered";
    });

    // new turn state
    // TO DO: update how we determine if it's a bot turn or player turn
    connect(newTurn, &QState::entered, this, [=](){
        // if (co == 0) {
        //     emit takeBotTurn();
        // }
        // else if (co == 1) {

        // }

        // always take player turn for now
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
    });

    checkEnd->addTransition(this, &MainWindow::endReached, endState);
    checkEnd->addTransition(this, &MainWindow::takeNewTurn, newTurn);

    // end state
    game->addTransition(ui->pushButton_EndGame, &QPushButton::clicked, endState);
    endState->addTransition(ui->pushButton_home_end, &QPushButton::clicked, initState);
    connect(endState, &QState::entered, this, [=](){
        change_endgame_status();
        finalWhiteTime(timer_white / 1000);
        finalBlackTime(timer_black / 1000);
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

MainWindow::~MainWindow()
{
    delete ui;
}

// x1 and x2 are characters like 'a', 'b' etc - therefore, {x1, y1} E {a, 3} && {x2, y2} E {b, 6} (as an example)
// i = 0 means no move, i = 1 means just move and possible check, and i = 2 means move, kill and possible check
void MainWindow::populateCells(char x1, int y1, char x2, int y2, int i, int turnCnt)
{
    qDebug() << x1 << y1 << x2 << y2 << i;
    if ((size / 2) == capacity)
    {
        resize();
    }
    if (i == 0) {return;}
    int row = (size % (capacity * 2))/2;
    // std::cout << row << std::endl;
    int col = turnCnt % 2;
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
        tableWidget->setItem(row, col, new QTableWidgetItem(QString::fromStdString(out)));
        return;
    }

    if (i == 1) {
        out += x2 + to_string(y2);
        if (col == 0) {
            bCheck = game.isCheck();
            if (bCheck == 1) {
                out += "+";
            }
        }
        else if (col == 1) {
            wCheck = game.isCheck();
            if (wCheck == 1) {
                out += "+";
            }
        }
    }
    else if (i == 2) {
        out += "x";
        out += x2 + to_string(y2);
        if (col == 0) {
            bCheck = game.isCheck();
            if (bCheck == 1) {
                out += "+";
            }
        }
        else if (col == 1) {
            wCheck = game.isCheck();
            if (wCheck == 1) {
                out += "+";
            }
        }
    }
    tableWidget->setItem(row, col, new QTableWidgetItem(QString::fromStdString(out)));
    ++size;
}

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


// {1000 = 8 in bits}
void MainWindow::on_easyLevel_clicked()
{
    mwSettings->diffLevel = 8;
}

// {0100 = 4 in bits}
void MainWindow::on_intermediateLevel_clicked()
{
    mwSettings->diffLevel = 4;
}

// {0010 = 2 in bits}
void MainWindow::on_hardLevel_clicked()
{
    mwSettings->diffLevel = 2;
}

// {0001 = 1 in bits}
void MainWindow::on_expertLevel_clicked()
{
    mwSettings->diffLevel = 1;
}


// TO DO: update settings variables for input and game type
// {true = voice}
void MainWindow::on_voiceCommand_clicked()
{
    mwSettings->commandType = true;
}

// {false = touch}
void MainWindow::on_touchCommand_clicked()
{
    mwSettings->commandType = false;
}


void MainWindow::clearButton(QPushButton *button, bool isWhiteTile) {
    button->setIcon(QIcon());
}

void MainWindow::setupBoard()
{
    for (char col = 'A'; col <= 'H'; ++col) {
        for (int row = 1; row <= 8; ++row) {
            QString position = QString(col) + QString::number(row);
            QString buttonName = "pushButton_" + position;
            QPushButton* button = findChild<QPushButton*>(buttonName);
            pieces.clear();
            bool isWhiteTile = ((col - 'A') + row) % 2 == 0;
            clearButton(button, isWhiteTile);
        }
    }
    // Clear the internal map
    boardMap.clear();

    // Map each push button to its chessboard position
    for (char col = 'A'; col <= 'H'; ++col) {
        for (int row = 1; row <= 8; ++row) {
            QString position = QString(col) + QString::number(row);
            QString buttonName = "pushButton_" + position;

            // Find the button in the UI
            QPushButton* button = findChild<QPushButton*>(buttonName);
            if (button) {
                boardMap[position] = button;

                // Assign colors
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


// Add chess pieces to their starting positions
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

    // Add black pieces
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

    // Place pieces on the board
    for (ChessPiece &piece : pieces) {
        placePieceOnTile(piece.position, piece.type, piece.color);
    }
}


void MainWindow::placePieceOnTile(const QString& position, const QString& pieceType, const QString& color)
{
    QPushButton* button = boardMap[position];
    if (button) {
        // Set the piece icon
        QString imagePath = ":/images/images/" + color + "_" + pieceType + ".png";
        QPixmap pixmap(imagePath);
        QIcon icon(pixmap);
        button->setIcon(icon);
        button->setIconSize(QSize(30, 30));

        // Keep tile's background color
        bool isWhiteTile = ((position[0].toLatin1() - 'A') + position.mid(1).toInt()) % 2 == 0;
        QString backgroundColor = isWhiteTile ? "#ffffff" : "#4560AB"; // White and blue
        button->setStyleSheet(QString(
                                  "QPushButton { background-color: %1; border: none; }"
                                  "QPushButton::icon { margin: 0; padding: 0; }"
                                  ).arg(backgroundColor));
    }
}

void MainWindow::handlePlayerInput() {
    selectedMove = "";
    qDebug() << "entered input handler";

    if (mwSettings->commandType == false) {
        enableTouchInput();
        qDebug() << "getting touch input";
    }
    else if (mwSettings->commandType == true) {
        getVoiceInput();
    }
}

void MainWindow::enableTouchInput() {
    for (auto it = boardMap.begin(); it != boardMap.end(); ++it) {
        it.value()->setEnabled(true);  // Enable touch input for all tiles
    }
}

void MainWindow::disableTouchInput() {
    for (auto it = boardMap.begin(); it != boardMap.end(); ++it) {
        it.value()->setEnabled(false);  // Disable touch input for all tiles
    }
}



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


void MainWindow::getVoiceInput() {
    // TO DO: get voice input
    QString voice_input = "";
    selectedMove = voice_input;
    emit moveReady();
}

void MainWindow::handleBotInput() {
    // TO DO: get bot input
    emit moveReady();
}

void MainWindow::handleMoveExecution() {
    // if(!isValidMove(selectedMove)) {
    //     emit invalidMoveSelected();
    //     return;
    // }

    // TO DO: motor mvmt
    // write selectedMove to file
    // while (read file) != done { }

    // TO DO: update method of extracting coordinates from moveReady string and assign selectedPiece/clickedPosition
    qDebug() << "move handler entered";
    QString initPosition = selectedMove.left(2);
    QString destPosition = selectedMove.right(2);
    qDebug() << "Position: " << initPosition << destPosition;

    if (!selectedPiece) {
        for (ChessPiece &piece : pieces) {
            if (piece.position == initPosition) {
                selectedPiece = &piece;
                break;
            }
        }
    }

    // updates board UI with move
    if (selectedPiece) {
        // Moving the selected piece
        if (isValidMove(selectedPiece->type, selectedPiece->position, destPosition)) {
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
                // [IMPLEMENTED POPULATECELL() FUNCTION HERE]
                bool ok;
                qDebug() << previousPosition;
                QString extracted_x1 = previousPosition.left(1).toLower();
                int extracted_y1 = previousPosition.right(1).toInt(&ok);
                QString extracted_x2 = destPosition.left(1).toLower();
                int extracted_y2 = destPosition.right(1).toInt(&ok);
                qDebug() << extracted_x1 << extracted_y1 << extracted_x2 << extracted_y2;
                populateCells(extracted_x1.toLatin1().at(0), extracted_y1, extracted_x2.toLatin1().at(0), extracted_y2, 2, co);

                // TO DO: fix timer calculations
                currTime = timer.elapsed();
                updateTime(currTime - previousTime);
                co++;
                previousTime = currTime;
                // [END OF IMPLEMENTATION]
            }

            // Update the piece's position and place it on the new tile
            placePieceOnTile(destPosition, selectedPiece->type, selectedPiece->color);
            selectedPiece->position = destPosition;

            // Deselect the piece
            selectedPiece = nullptr;

            qDebug() << "Move Executed";
            emit moveExecutionDone();
            return;

        } else {
            qDebug() << "Invalid move!";
            emit invalidMoveSelected();
        }
    }
}

void MainWindow::checkForEnd() {
    // TO DO: implement check for end
    // if end: emit endReached
    // if not end: emit takeNewTurn
    qDebug() << "check end, going to new turn";
    emit takeNewTurn();
}

void MainWindow::resetGame() {
    game.resetBoard();
    // clearBoard();
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
    setupInitialPositions();
    clearTableWidget();
}


// Handle tile clicks
// void MainWindow::onTileClicked()
// {
//     QPushButton* clickedButton = qobject_cast<QPushButton*>(sender());
//     if (!clickedButton) return;

//     QString clickedPosition;
//     for (auto it = boardMap.begin(); it != boardMap.end(); ++it) {
//         if (it.value() == clickedButton) {
//             clickedPosition = it.key();
//             break;
//         }
//     }

//     if (selectedPiece) {
//         // Moving the selected piece
//         if (isValidMove(selectedPiece->type, selectedPiece->position, clickedPosition)) {
//             // Reset the previous tile and retain its background color
//             QPushButton* previousButton = boardMap[selectedPiece->position];
//             if (previousButton) {
//                 previousButton->setIcon(QIcon()); // Clear the icon

//                 // Calculate the background color based on tile position
//                 QString previousPosition = selectedPiece->position;
//                 bool isWhiteTile = ((previousPosition[0].toLatin1() - 'A') +
//                                     previousPosition.mid(1).toInt()) % 2 == 0;
//                 QString backgroundColor = isWhiteTile ? "#ffffff" : "#4560AB"; // White or blue
//                 previousButton->setStyleSheet(QString(
//                                                   "QPushButton { background-color: %1; border: none; }"
//                                                   ).arg(backgroundColor));
//                 // [IMPLEMENTED POPULATECELL() FUNCTION HERE]
//                 bool ok;
//                 QString extracted_x1 = previousPosition.left(1).toLower();
//                 int extracted_y1 = previousPosition.right(1).toInt(&ok);
//                 QString extracted_x2 = clickedPosition.left(1).toLower();
//                 int extracted_y2 = clickedPosition.right(1).toInt(&ok);
//                 populateCells(extracted_x1.toLatin1().at(0), extracted_y1, extracted_x2.toLatin1().at(0), extracted_y2, 2, co);
//                 currTime = timer.elapsed();
//                 updateTime(currTime - previousTime);
//                 co++;
//                 emit turnUpdated();
//                 previousTime = currTime;
//                 // [END OF IMPLEMENTATION]
//             }

//             // Update the piece's position and place it on the new tile
//             placePieceOnTile(clickedPosition, selectedPiece->type, selectedPiece->color);
//             selectedPiece->position = clickedPosition;

//             // Deselect the piece
//             selectedPiece = nullptr;
//         } else {
//             qDebug() << "Invalid move!";
//         }
//     } else {
//         // Selecting a piece
//         for (ChessPiece &piece : pieces) {
//             if (piece.position == clickedPosition) {
//                 selectedPiece = &piece;
//                 break;
//             }
//         }
//     }
// }

bool MainWindow::isValidMove(const QString& pieceType, const QString& from, const QString& to)
{
    // Placeholder for move validation logic
    return true; // Allow all moves for now
}

// White House Selection
void MainWindow::on_pushButton_home1_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

// Bits For White Home Click
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

void MainWindow::change_endgame_status()
{
    // once software implements a function to check who won, end_status would be altered accordingly
    if (end_status == 0)
    {
        ui->winner_label->setText("House 1 Wins!");
    }
    else if (end_status == 1)
    {
        ui->winner_label->setText("House 2 Wins!");
    }
    else if (end_status == 2)
    {
        ui->winner_label->setText("Game is Draw!");
    }
}

void MainWindow::resize()
{
    for(unsigned i = 0; i < 10; ++i)
    {
        tableWidget->insertRow(i + capacity);
    }
    capacity += 10;
}

void MainWindow::updateTime(int diff)
{
    (co % 2 == 0) ? this->timer_white+=diff : this->timer_black+=diff;
}

void MainWindow::finalWhiteTime(int timer_white)
{
    QString result;
    QString strMinutes = QString::number(timer_white / 60);
    QString strSeconds = QString::number(timer_white % 60);
    if (strSeconds.size() == 1) { strSeconds = "0" + strSeconds; }
    result = strMinutes + ":" + strSeconds;
    ui->house_1_time->setText(result);
}

void MainWindow::finalBlackTime(int timer_black)
{
    QString result;
    QString strMinutes = QString::number(timer_black / 60);
    QString strSeconds = QString::number(timer_black % 60);
    if (strSeconds.size() == 1) { strSeconds = "0" + strSeconds; }
    result = strMinutes + ":" + strSeconds;
    ui->house_2_time->setText(result);
}

void MainWindow::on_pvpButton_clicked()
{
    mwSettings->commandType = true;
}

void MainWindow::on_pvaButton_clicked()
{
    mwSettings->commandType = false;
}

void MainWindow::on_avaButton_clicked()
{
    mwSettings->commandType = false;
}
