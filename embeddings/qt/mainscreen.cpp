#include "MainScreen.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

MainScreen::MainScreen(QStackedWidget *stackedWidget) {
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *mainLabel = new QLabel("Main Screen", this);
    layout->addWidget(mainLabel);

    QPushButton *goToSecondScreenBtn = new QPushButton("Go to Second Screen", this);
    layout->addWidget(goToSecondScreenBtn);

    connect(goToSecondScreenBtn, &QPushButton::clicked, [=]() {
        stackedWidget->setCurrentIndex(2);  // Switch to second screen
    });

    setLayout(layout);
}
