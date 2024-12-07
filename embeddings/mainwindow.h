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
#include "Board.h"

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
    ~MainWindow();



private slots:

    void onTileClicked();

    void populateCells(char x1, int y1, char x2, int y2, int i, int turnCnt);

    void clearTableWidget();

    void on_pushButton_home_about_clicked();

    void on_pushButton_home_end_clicked();

    void on_pushButton_start_clicked();

    void on_pushButton_tutorial_clicked();

    void on_pushButton_settings_clicked();

    void on_pushButton_about_clicked();

    void on_pushButton_home_settings_clicked();

    void on_pushButton_continue_tutorial_clicked();

    void on_pushButton_home_tutorial_clicked();

    void on_pushButton_home_tutorial_end_clicked();

    void on_pushButton_previous_tutorial_clicked();

    void on_pushButton_home1_clicked();

    void on_pushButton_home2_clicked();

    void on_pushButton_EndGame_clicked();

    void on_easyLevel_clicked();

    void on_intermediateLevel_clicked();

    void on_hardLevel_clicked();

    void on_expertLevel_clicked();

    void on_voiceCommand_clicked();

    void on_touchCommand_clicked();

    void on_pushButton_back_settings_clicked();

    void on_randomGeneratorButton_clicked();

    void on_pushButton_Gryffindor_clicked();

    void on_pushButton_Slytherin_clicked();

    void on_pushButton_Hufflepuff_clicked();

    void on_pushButton_Ravenclaw_clicked();

    void on_pushButton_Gryffindor_2_clicked();

    void on_pushButton_Slytherin_2_clicked();

    void on_pushButton_Hufflepuff_2_clicked();

    void on_pushButton_Ravenclaw_2_clicked();

    void change_endgame_status();

private:
    Ui::MainWindow *ui;
    Settings *mwSettings;
    Home *whiteChoice;
    Home *blackChoice;
    QTableWidget *tableWidget;
    QTimer *timer;
    bool bCheck;
    bool wCheck;
    Board game;
    int co;
    int end_status; // 0 = white winner, 1 = black winner, 2 = tie
    
    QMap<QString, QPushButton*> boardMap; // Map positions (A1, B2) to QPushButtons
    QList<ChessPiece> pieces;            // List of chess pieces
    QString selectedPiecePosition;       // Position of selected piece
    ChessPiece* selectedPiece = nullptr; // Currently selected piece

    void setupBoard();
    void setupInitialPositions();
    void placePieceOnTile(const QString& position, const QString& pieceType, const QString& color);
    bool isValidMove(const QString& pieceType, const QString& from, const QString& to);

};

#endif // MAINWINDOW_H
