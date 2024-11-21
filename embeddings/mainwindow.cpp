#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settings.h"
#include "inputs.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    mwSettings = new Settings();
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


void MainWindow::on_pushButton_back_settings_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

