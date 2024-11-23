#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settings.h"
#include <QApplication>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QRandomGenerator>
#include <QTimer>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>


// #include <QThread>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    mwSettings = new Settings();
    tableWidget = ui->RoundTurnTable;
    timer = new QTimer(this);
    srand(time(0));
    wCheck = false;
    bCheck = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Simulates the population of the table widget for the chess game
// x1 and x2 could be a character like 'a', 'b' etc
// void MainWindow::populateCells(char x1, int y1, char x2, int y2, int i, int turnCnt)
// {
//     vector<string> pieceName = {"K", "Q", "R", "B", "N",
//                                 "Kx", "Qx", "Rx", "Bx", "Nx"};

//     vector<string> positions = {"a1", "a2", "a3", "a4", "a5", "a6", "a7", "a8",
//                                 "b1", "b2", "b3", "b4", "b5", "b6", "b7", "b8",
//                                 "c1", "c2", "c3", "c4", "c5", "c6", "c7", "c8",
//                                 "d1", "d2", "d3", "d4", "d5", "d6", "d7", "d8",
//                                 "e1", "e2", "e3", "e4", "e5", "e6", "e7", "e8",
//                                 "f1", "f2", "f3", "f4", "f5", "f6", "f7", "f8",
//                                 "g1", "g2", "g3", "g4", "g5", "g6", "g7", "g8",
//                                 "h1", "h2", "h3", "h4", "h5", "h6", "h7", "h8"};
//     if (turnCnt % 20 == 0)
//     {
//         clearTableWidget();
//     }
//     if (i == 0) {return;}
//     int row = (turnCnt % 20)/2;
//     int col = turnCnt % 2;
//     // gets the piece type character from game
//     // out initializes to a piece first
//     string out = game->getPosition(x1, y1);
//     if (i == 1) {
//         out += x2 + y2;
//         if (col == 0) {
//             if (bCheck == 1) {
//                 out += "+";
//             }
//         }
//         else if (col == 1) {
//             if (wCheck == 1) {
//                 out += "+";
//             }
//         }
//     }
//     else if (i == 2) {
//         out += "x" + to_string(x2) + to_string(y2);
//         if (col == 0) {
//             if (bCheck == 1) {
//                 out += "+";
//             }
//         }
//         else if (col == 1) {
//             if (wCheck == 1) {
//                 out += "+";
//             }
//         }
//     }
//     tableWidget->setItem(row, col, new QTableWidgetItem(QString::fromStdString(out)));
// }

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

// Goes Back to Home from Settings
void MainWindow::on_pushButton_back_settings_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

// Game
void MainWindow::on_pushButton_EndGame_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
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

// Random Button Simulates Cell Population
void MainWindow::on_randomGeneratorButton_clicked()
{
    // populateCells();
    clearTableWidget();
}
