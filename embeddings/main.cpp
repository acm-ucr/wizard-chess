#include "mainwindow.h"
#include "secondscreen.h"
#include <QApplication>
#include <QStackedWidget>
#include "main.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    secondscreen s = secondscreen(stackedWidget);

    stackedWidget->addWidget(&w);  // Index 0
    stackedWidget->addWidget(&s);     // Index 1

    stackedWidget->setCurrentIndex(0);

    stackedWidget->resize(800, 480);  // FREENOVE 5" monitor dimensions
    stackedWidget->show();

    return a.exec();
}
