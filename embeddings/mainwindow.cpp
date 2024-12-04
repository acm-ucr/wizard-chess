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
#include "mainwindow.h"
#include "home.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    mwSettings = new Settings();
    whiteChoice = new Home();
    blackChoice = new Home();
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
// x1 and x2 could be a character like 'a', 'b' etc - therefore, {x1, y1} E {a, 3}
// the i = 0 means no move, i = 1 means just move and possible check, and i = 2 means move, kill and possible check
void MainWindow::populateCells(char x1, int y1, char x2, int y2, int i, int turnCnt)
{
    // performs action similar to a virtual list ~ after the table is full, the table resets
    if (turnCnt % 20 == 0)
    {
        clearTableWidget();
    }
    if (i == 0) {return;}
    int row = (turnCnt % 20)/2;
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
            bCheck = game.isBCheck();
            if (bCheck == 1) {
                out += "+";
            }
        }
        else if (col == 1) {
            wCheck = game.isWCheck();
            if (wCheck == 1) {
                out += "+";
            }
        }
    }
    else if (i == 2) {
        out += "x";
        out += x2 + to_string(y2);
        if (col == 0) {
            bCheck = game.isBCheck();
            if (bCheck == 1) {
                out += "+";
            }
        }
        else if (col == 1) {
            wCheck = game.isWCheck();
            if (wCheck == 1) {
                out += "+";
            }
        }
    }
    tableWidget->setItem(row, col, new QTableWidgetItem(QString::fromStdString(out)));
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
void MainWindow::on_pushButton_home1_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

// Black House Selection
void MainWindow::on_pushButton_home2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

// Random Button Simulates Cell Population [FOR TESTING PURPOSES ONLY]
void MainWindow::on_randomGeneratorButton_clicked()
{
    populateCells('a', 2, 'b', 5, 2, 0);
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
