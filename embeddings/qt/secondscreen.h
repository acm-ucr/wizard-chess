#pragma once

#include <QWidget>
#include <QStackedWidget>

class SecondScreen : public QWidget {
    Q_OBJECT
public:
    SecondScreen(QStackedWidget *stackedWidget);
};

