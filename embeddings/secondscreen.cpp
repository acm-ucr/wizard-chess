#include "secondscreen.h"
#include "ui_secondscreen.h"

secondscreen::secondscreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::secondscreen)
{
    ui->setupUi(this);
}

secondscreen::~secondscreen()
{
    delete ui;
}
