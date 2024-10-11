#ifndef SECONDSCREEN_H
#define SECONDSCREEN_H

#include <QWidget>
#include <QStackedWidget>

class SecondScreen : public QWidget {
    Q_OBJECT
public:
    SecondScreen(QStackedWidget *stackedWidget);
};

#endif // SECONDSCREEN_H
