#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    setupBoard();
    setupInitialPositions();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// About Page
void MainWindow::on_pushButton_home_about_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

// Start Page
void MainWindow::on_pushButton_start_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_tutorial_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_settings_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_pushButton_about_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);

}

// Settings
void MainWindow::on_pushButton_home_settings_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

// Game
void MainWindow::on_pushButton_EndGame_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::setupBoard()
{
    // Map each push button to its chessboard position
    for (char col = 'A'; col <= 'H'; ++col) {
        for (int row = 1; row <= 8; ++row) {
            QString position = QString(col) + QString::number(row);
            QString buttonName = "pushButton_" + position;

            // Find the button in the UI and connect its signal
            QPushButton* button = findChild<QPushButton*>(buttonName);
            if (button) {
                boardMap[position] = button;
                connect(button, &QPushButton::clicked, this, &MainWindow::onTileClicked);
            }
        }
    }
}


// Add chess pieces to their starting positions
void MainWindow::setupInitialPositions()
{
    // Add white pieces
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
        QString imagePath = "C:/Users/marcu/OneDrive/ACM/Wizard-Chess/embeddings/images/" + color + "_" + pieceType + ".png";
        qDebug() << "Attempting to open file at:" << imagePath;

        QFile file(imagePath);
        if (!file.open(QIODevice::ReadOnly)) {
            qDebug() << "Failed to open file at:" << imagePath;
            return;
        }

        QByteArray byteArray = file.readAll();
        qDebug() << "File read successfully. Bytes length:" << byteArray.length();

        QImage img = QImage::fromData(byteArray);
        if (img.isNull()) {
            qDebug() << "Failed to load QImage instance for:" << imagePath;
            return;
        }

        QPixmap pixmap = QPixmap::fromImage(img);
        button->setIcon(QIcon(pixmap));
        button->setIconSize(QSize(40, 40));
    }
}




// Handle tile clicks
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
        // Moving the selected piece
        if (isValidMove(selectedPiece->type, selectedPiece->position, clickedPosition)) {
            // Update the piece's position
            placePieceOnTile(clickedPosition, selectedPiece->type, selectedPiece->color);
            boardMap[selectedPiece->position]->setIcon(QIcon()); // Clear the old tile
            selectedPiece->position = clickedPosition;

            // Deselect the piece
            selectedPiece = nullptr;
        } else {
            qDebug() << "Invalid move!";
        }
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


bool MainWindow::isValidMove(const QString& pieceType, const QString& from, const QString& to)
{
    // Placeholder for move validation logic
    return true; // Allow all moves for now
}



// End
void MainWindow::on_pushButton_home_end_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

// Tutorial
void MainWindow::on_pushButton_continue_tutorial_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_home_tutorial_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_home_tutorial_end_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_previous_tutorial_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

// White House Selection
void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

// Black House Selection
void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}
