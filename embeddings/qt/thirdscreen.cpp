#include "thirdscreen.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

ThirdScreen::ThirdScreen(QStackedWidget *stackedWidget) {
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *thirdLabel = new QLabel("Third Screen", this);
    layout->addWidget(thirdLabel);

    QPushButton *backToMainBtn = new QPushButton("go main", this);
    layout->addWidget(backToMainBtn);

    connect(backToMainBtn, &QPushButton::clicked, [=]() {
        stackedWidget->setCurrentIndex(1);  // switch to main screen
    });

    setLayout(layout);
}
