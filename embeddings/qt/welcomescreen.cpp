#include "WelcomeScreen.h"
#include <QVBoxLayout>
#include <QLabel>

WelcomeScreen::WelcomeScreen() {
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *welcomeLabel = new QLabel("Welcome screen...", this);
    layout->addWidget(welcomeLabel);
    setLayout(layout);
}
