#include "WelcomeScreen.h"
#include <QVBoxLayout>
#include <QLabel>

WelcomeScreen::WelcomeScreen() {
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *welcomeLabel = new QLabel("Welcome screen...", this);

    welcomeLabel->setAlignment(Qt::AlignCenter);

    layout->addWidget(welcomeLabel); // basically adding label to screen
    setLayout(layout);
}
