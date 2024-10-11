#include "mainscreen.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

MainScreen::MainScreen(QStackedWidget *stackedWidget) {
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *mainLabel = new QLabel("Main Screen", this);
    layout->addWidget(mainLabel);

    QPushButton *goToSecondScreenBtn = new QPushButton("go second", this);
    layout->addWidget(goToSecondScreenBtn);

    connect(goToSecondScreenBtn, &QPushButton::clicked, [=]() {
        stackedWidget->setCurrentIndex(2);  // switch to second
    });

    setLayout(layout);
}
