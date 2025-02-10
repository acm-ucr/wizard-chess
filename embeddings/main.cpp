// #include "mainwindow.h"
// #include "settings.h"
// #include <QApplication>
// #include "inputs.h"

// int main(int argc, char *argv[])
// {

//     QApplication a(argc, argv);
//     MainWindow w;
//     w.show();

//     // inputs input;

//     return a.exec();
// }

#include "Board.h"
using namespace std;

int main() {
    Board b;
    b.playMenu();
    if(b.isCheck()){
        cout << "success" << endl;
    }
    else {
        cout << "failure" << endl;
    }
    return 0;
}
