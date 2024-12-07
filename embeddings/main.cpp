#include "mainwindow.h"
#include "settings.h"
#include <QApplication>
#include "inputs.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // inputs input;

    return a.exec();
}
