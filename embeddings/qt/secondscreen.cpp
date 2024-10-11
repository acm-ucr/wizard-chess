#include "SecondScreen.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

SecondScreen::SecondScreen(QStackedWidget *stackedWidget) {
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *secondLabel = new QLabel("Second Screen", this);
    layout->addWidget(secondLabel);

    QPushButton *backToMainBtn = new QPushButton("Back to Main Screen", this);
    layout->addWidget(backToMainBtn);

    connect(backToMainBtn, &QPushButton::clicked, [=]() {
        stackedWidget->setCurrentIndex(1);  // switch screen to first one (main)
    });

    setLayout(layout);
}
