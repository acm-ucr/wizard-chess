#include "mainwindow.h"
#include "settings.h"
#include "Board.h"
#include <QApplication>
#include "inputs.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    inputs input;

    return a.exec();
    //Board b;
    //b.playMenu();
}

// #include "Board.h"
// #include <QTextStream>
// #include <QCoreApplication>
// using namespace std;

// int main() {
//     // QApplication a(argc, argv);
//     // MainWindow w;
//     // w.show();

//     // inputs input;

//     // return a.exec();
//     QTextStream cout(stdout);
//     QTextStream cin(stdin);
//     Board b;
//     b.playMenu();
//     // if(b.isCheck()){
//     //     cout << "success" << endl;
//     // }
//     // else {
//     //     cout << "failure" << endl;
//     // }
//     return 0;
// }
