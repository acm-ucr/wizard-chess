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

void MainWindow::on_pushButton_clicked()
{
<<<<<<< HEAD
<<<<<<< HEAD
    ui->stackedWidget->setCurrentIndex(1);
=======
    ui->stackedWidget->setCurrentIndex(2);
>>>>>>> main
=======
    ui->stackedWidget->setCurrentIndex(3);
>>>>>>> parent of 29f053e (Merge pull request #12 from acm-ucr/justin-h-im/dev)
}


void MainWindow::on_pushButton_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_19_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_20_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}




