#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPushButton>
#include <QMap>
#include <QList>
#include <QFile>
#include <QDir>
#include <QTableWidget>
#include <QTimer>
#include "settings.h"
#include "home.h"
#include "inputs.h"
#include <iostream>
#include <QElapsedTimer>
#include "Board.h"
#include <QTimer>
#include <QStateMachine>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class ChessPiece {
public:
    QString type;  // "pawn", "rook", etc.
    QString color; // "white" or "black"
    QString position; // Chess notation, e.g., "A1", "B2"

    ChessPiece(QString t, QString c, QString p) : type(t), color(c), position(p) {}
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void getVoiceInput(); //TEMP PUBLIC
    ~MainWindow();

signals:
    void enterGame();
    void takeBotTurn();
    void takePlayerTurn();
    void moveReady();
    void invalidMoveSelected();
    void moveExecutionDone();
    void takeNewTurn();
    void endReached();

private slots:

    void onTileClicked();

    void populateCells(char x1, int y1, char x2, int y2, int i);

    void clearTableWidget();

    // void on_pushButton_home_about_clicked();

    // void on_pushButton_home_end_clicked();

    // void on_pushButton_start_clicked();

    // void on_pushButton_tutorial_clicked();

    // void on_pushButton_settings_clicked();

    // void on_pushButton_about_clicked();

    // void on_pushButton_home_settings_clicked();

    // void on_pushButton_continue_tutorial_clicked();

    // void on_pushButton_home_tutorial_clicked();

    // void on_pushButton_home_tutorial_end_clicked();

    // void on_pushButton_previous_tutorial_clicked();

    void on_pushButton_home1_clicked();

    // void on_pushButton_home2_clicked();

    // void on_pushButton_EndGame_clicked();

    void on_easyLevel_clicked();

    void on_intermediateLevel_clicked();

    void on_hardLevel_clicked();

    void on_expertLevel_clicked();

    // void on_voiceCommand_clicked();

    // void on_touchCommand_clicked();

    // void on_pushButton_back_settings_clicked();

    void on_pushButton_Gryffindor_clicked();

    void on_pushButton_Slytherin_clicked();

    void on_pushButton_Hufflepuff_clicked();

    void on_pushButton_Ravenclaw_clicked();

    void on_pushButton_Gryffindor_2_clicked();

    void on_pushButton_Slytherin_2_clicked();

    void on_pushButton_Hufflepuff_2_clicked();

    void on_pushButton_Ravenclaw_2_clicked();

    void change_endgame_status();

    void resize();

    void updateTime(int diff);

    void finalWhiteTime(int timer_white);

    void finalBlackTime(int timer_black);

    void on_pvpButton_clicked();

    void on_pvaButton_clicked();

    void on_avaButton_clicked();

    void handlePlayerInput();

    void enableTouchInput();

    void disableTouchInput();

    // void getVoiceInput();

    void handleBotInput();

    void handleMoveExecution();

    void checkForEnd();

    void resetGame();



    void on_WvoiceCommand_clicked();

    void on_WtouchCommand_clicked();

    void on_BvoiceCommand_5_clicked();

    void on_BtouchCommand_clicked();

private:
    Ui::MainWindow *ui;
    Settings *mwSettings;
    Home *whiteChoice;
    Home *blackChoice;
    QTableWidget *tableWidget;

    QElapsedTimer timer;
    int previousTime;
    int currTime;

    bool bCheck;
    bool wCheck;
    clock_t totalClock;
    Board game;
    int co;
    int end_status; // 0 = white winner, 1 = black winner, 2 = tie
    int timer_black;
    int timer_white;
    QTimer tBlack;
    QTimer tWhite;
    QMap<QString, QPushButton*> boardMap; // Map positions (A1, B2) to QPushButtons
    QList<ChessPiece> pieces;            // List of chess pieces
    QString selectedPiecePosition;       // Position of selected piece
    ChessPiece* selectedPiece = nullptr; // Currently selected piece
    int capacity = 10;
    int size = 0;
    int turn;
    int count = 0;
    int globalTurnCounter = 0;  // 0 = white turn && 1 = black turn
    int prevGlobalTurnCounter = 1;  // holds previous GTC
    // int row = 0;  // to be used in populateCell
    QString selectedMove = "";

    void setupBoard();
    void setupInitialPositions();
    void placePieceOnTile(const QString& position, const QString& pieceType, const QString& color);
    bool isValidMove(const QString& pieceType, const QString& from, const QString& to);
    void clearButton(QPushButton *button, bool isWhiteTile);


    QStateMachine *machine;



    //Vocie input from files
    vector<string> uuidList;
    vector<string> timeList;
    vector<string> pieceList;
    vector<string> moveList;
    vector<string> confirmList;
};

#endif // MAINWINDOW_H
