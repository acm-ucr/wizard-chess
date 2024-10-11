#include "secondscreen.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

SecondScreen::SecondScreen(QStackedWidget *stackedWidget) {
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *secondLabel = new QLabel("Second Screen", this);
    layout->addWidget(secondLabel);

    QPushButton *backToMainBtn = new QPushButton("go third", this);
    layout->addWidget(backToMainBtn);

    connect(backToMainBtn, &QPushButton::clicked, [=]() {
        stackedWidget->setCurrentIndex(3);  // switch to third
    });

    setLayout(layout);
}
