#include <QApplication>
#include <QStackedWidget>
#include <QTimer>

#include "WelcomeScreen.h"
#include "MainScreen.h"
#include "SecondScreen.h"
#include "thirdscreen.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QStackedWidget stackedWidget;

    // create screens
    WelcomeScreen *welcomeScreen = new WelcomeScreen();
    MainScreen *mainScreen = new MainScreen(&stackedWidget);
    SecondScreen *secondScreen = new SecondScreen(&stackedWidget);
    ThirdScreen *thirdScreen = new ThirdScreen(&stackedWidget);

    // screen stack
    stackedWidget.addWidget(welcomeScreen);  // Index 0
    stackedWidget.addWidget(mainScreen);     // Index 1
    stackedWidget.addWidget(secondScreen);   // Index 2
    stackedWidget.addWidget(thirdScreen);    // Index 3


    // set welcome screen
    stackedWidget.setCurrentIndex(0);

    // timer for welcome screen (5 secs) then swtich to main screen
    QTimer::singleShot(5000, &stackedWidget, [&stackedWidget]() {
        stackedWidget.setCurrentIndex(1);
    });


    stackedWidget.resize(800, 400);  // FREENOVE 5" monitor dimensions
    stackedWidget.show();

    return app.exec();
}
