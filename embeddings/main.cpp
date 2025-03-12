#include "mainwindow.h"
#include "settings.h"
#include "Board.h"
#include <QApplication>
#include "inputs.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    a.setStyleSheet(
        "QWidget { background-color: white; color: black; }"
        "QPushButton { "
        "   background-color: lightgray; "  // Subtle contrast with white background
        "   color: black; "
        "   padding: 5px; "
        "} "
        "QPushButton:hover { "
        "   background-color: darkgray; "  // Slightly darker on hover
        "} "
        "QPushButton:pressed { "
        "   background-color: gray; "  // Even darker when pressed
        "} "
    );

    w.show();

    inputs input;

    return a.exec();
    //Board b;
    //b.playMenu();
}
