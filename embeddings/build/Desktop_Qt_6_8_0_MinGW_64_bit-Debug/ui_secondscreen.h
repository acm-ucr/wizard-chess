/********************************************************************************
** Form generated from reading UI file 'secondscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDSCREEN_H
#define UI_SECONDSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_secondscreen
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *secondscreen)
    {
        if (secondscreen->objectName().isEmpty())
            secondscreen->setObjectName("secondscreen");
        secondscreen->resize(800, 480);
        buttonBox = new QDialogButtonBox(secondscreen);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(secondscreen);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, secondscreen, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, secondscreen, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(secondscreen);
    } // setupUi

    void retranslateUi(QDialog *secondscreen)
    {
        secondscreen->setWindowTitle(QCoreApplication::translate("secondscreen", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondscreen: public Ui_secondscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDSCREEN_H
