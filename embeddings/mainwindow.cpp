#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// void MainWindow::on_pushButton_clicked()
// {
//     ui->stackedWidget->setCurrentIndex(4);
// }

void MainWindow::on_pushButton_home_settings_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}



void MainWindow::on_pushButton_home_about_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_home_end_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_start_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_tutorial_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_settings_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_about_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);

}

void MainWindow::on_pushButton_continue_tutorial_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
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
    ui->stackedWidget->setCurrentIndex(2);
}

