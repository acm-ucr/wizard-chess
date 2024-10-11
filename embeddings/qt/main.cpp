#include <QApplication>
#include <QStackedWidget>
#include <QTimer>
#include "WelcomeScreen.h"
#include "MainScreen.h"
#include "SecondScreen.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QStackedWidget stackedWidget;

    // Create the screens
    WelcomeScreen *welcomeScreen = new WelcomeScreen();
    MainScreen *mainScreen = new MainScreen(&stackedWidget);
    SecondScreen *secondScreen = new SecondScreen(&stackedWidget);

    // Add screens to the stack
    stackedWidget.addWidget(welcomeScreen);  // Index 0
    stackedWidget.addWidget(mainScreen);     // Index 1
    stackedWidget.addWidget(secondScreen);   // Index 2

    // Set the initial screen (Welcome screen)
    stackedWidget.setCurrentIndex(0);

    // Create a timer for switching from Welcome Screen to Main Screen after 5 seconds
    QTimer::singleShot(5000, [&stackedWidget]() {
        stackedWidget.setCurrentIndex(1);  // Switch to main screen
    });

    stackedWidget.resize(800, 400);  // Match your display size
    stackedWidget.show();

    return app.exec();
}
