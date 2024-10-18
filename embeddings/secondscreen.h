#ifndef SECONDSCREEN_H
#define SECONDSCREEN_H

#include <QDialog>

namespace Ui {
class secondscreen;
}

class secondscreen : public QDialog
{
    Q_OBJECT

public:
    explicit secondscreen(QWidget *parent = nullptr);
    ~secondscreen();

private:
    Ui::secondscreen *ui;
};

#endif // SECONDSCREEN_H
