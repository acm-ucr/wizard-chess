#include "WelcomeScreen.h"
#include <QVBoxLayout>
#include <QLabel>

WelcomeScreen::WelcomeScreen() {
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *welcomeLabel = new QLabel("Welcome! This will disappear in 5 seconds.", this);
    layout->addWidget(welcomeLabel);
    setLayout(layout);
}
