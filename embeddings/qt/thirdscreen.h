#pragma once

#include <QWidget>
#include <QStackedWidget>

class ThirdScreen : public QWidget {
    Q_OBJECT
public:
    ThirdScreen(QStackedWidget *stackedWidget);
};


