#pragma once

#include <QWidget>
#include <QStackedWidget>

class MainScreen : public QWidget {
    Q_OBJECT
public:
    MainScreen(QStackedWidget *stackedWidget);
};

