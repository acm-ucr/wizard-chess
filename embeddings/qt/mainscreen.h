#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QWidget>
#include <QStackedWidget>

class MainScreen : public QWidget {
    Q_OBJECT
public:
    MainScreen(QStackedWidget *stackedWidget);
};

#endif // MAINSCREEN_H
