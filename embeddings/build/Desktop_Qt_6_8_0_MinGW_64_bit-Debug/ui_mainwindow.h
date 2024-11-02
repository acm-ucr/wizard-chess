/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *page_3;
    QWidget *page_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_79;
    QLabel *label_9;
    QPushButton *pushButton_78;
    QLabel *label_10;
    QPushButton *pushButton_48;
    QPushButton *pushButton_50;
    QPushButton *pushButton_57;
    QPushButton *pushButton_81;
    QPushButton *pushButton_65;
    QPushButton *pushButton_8;
    QPushButton *pushButton_42;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_67;
    QPushButton *pushButton_37;
    QPushButton *pushButton_43;
    QPushButton *pushButton_47;
    QPushButton *pushButton_73;
    QLabel *label_11;
    QLabel *label_15;
    QPushButton *pushButton_14;
    QPushButton *pushButton_36;
    QPushButton *pushButton_12;
    QPushButton *pushButton_49;
    QPushButton *pushButton_56;
    QPushButton *pushButton_35;
    QPushButton *pushButton_17;
    QLabel *label_3;
    QPushButton *pushButton_38;
    QPushButton *pushButton_45;
    QPushButton *pushButton_76;
    QPushButton *pushButton_44;
    QPushButton *pushButton_61;
    QPushButton *pushButton_77;
    QPushButton *pushButton_58;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QLabel *label_14;
    QPushButton *pushButton_80;
    QPushButton *pushButton_52;
    QPushButton *pushButton_13;
    QPushButton *pushButton_11;
    QPushButton *pushButton_68;
    QPushButton *pushButton_60;
    QPushButton *pushButton_16;
    QLabel *label_2;
    QLabel *label_16;
    QLabel *label_6;
    QPushButton *pushButton_63;
    QLabel *label_17;
    QPushButton *pushButton_82;
    QPushButton *pushButton_40;
    QPushButton *pushButton_59;
    QLabel *label_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_41;
    QPushButton *pushButton_62;
    QPushButton *pushButton_51;
    QLabel *label_13;
    QPushButton *pushButton_71;
    QPushButton *pushButton_39;
    QPushButton *pushButton_72;
    QPushButton *pushButton_70;
    QPushButton *pushButton_74;
    QLabel *label_8;
    QPushButton *pushButton_54;
    QPushButton *pushButton_7;
    QPushButton *pushButton_69;
    QPushButton *pushButton_15;
    QPushButton *pushButton_53;
    QPushButton *pushButton_5;
    QLabel *label_12;
    QPushButton *pushButton_66;
    QPushButton *pushButton_64;
    QPushButton *pushButton_75;
    QPushButton *pushButton_55;
    QPushButton *pushButton_46;
    QLabel *label_4;
    QPushButton *pushButton_10;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 480);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 480));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(30);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setMinimumSize(QSize(50, 50));
        stackedWidget->setSizeIncrement(QSize(0, 0));
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget #Application {\n"
"rgb(0, 0, 0)\n"
"}"));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 210, 341, 20));
        label->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	text-align: center\n"
"}"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 240, 80, 18));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(44);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(page_2->sizePolicy().hasHeightForWidth());
        page_2->setSizePolicy(sizePolicy2);
        page_2->setMaximumSize(QSize(800, 480));
        page_2->setBaseSize(QSize(800, 480));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        gridLayout->setContentsMargins(50, 40, 345, 40);
        pushButton_79 = new QPushButton(page_2);
        pushButton_79->setObjectName("pushButton_79");
        sizePolicy1.setHeightForWidth(pushButton_79->sizePolicy().hasHeightForWidth());
        pushButton_79->setSizePolicy(sizePolicy1);
        pushButton_79->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_79, 6, 7, 1, 1);

        label_9 = new QLabel(page_2);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 22, 7, 1, 1);

        pushButton_78 = new QPushButton(page_2);
        pushButton_78->setObjectName("pushButton_78");
        sizePolicy1.setHeightForWidth(pushButton_78->sizePolicy().hasHeightForWidth());
        pushButton_78->setSizePolicy(sizePolicy1);
        pushButton_78->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_78, 13, 6, 1, 1);

        label_10 = new QLabel(page_2);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 17, 8, 1, 1);

        pushButton_48 = new QPushButton(page_2);
        pushButton_48->setObjectName("pushButton_48");
        sizePolicy1.setHeightForWidth(pushButton_48->sizePolicy().hasHeightForWidth());
        pushButton_48->setSizePolicy(sizePolicy1);
        pushButton_48->setMinimumSize(QSize(30, 30));
        pushButton_48->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_48, 19, 3, 1, 1);

        pushButton_50 = new QPushButton(page_2);
        pushButton_50->setObjectName("pushButton_50");
        sizePolicy1.setHeightForWidth(pushButton_50->sizePolicy().hasHeightForWidth());
        pushButton_50->setSizePolicy(sizePolicy1);
        pushButton_50->setMinimumSize(QSize(30, 30));
        pushButton_50->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_50, 19, 2, 1, 1);

        pushButton_57 = new QPushButton(page_2);
        pushButton_57->setObjectName("pushButton_57");
        sizePolicy1.setHeightForWidth(pushButton_57->sizePolicy().hasHeightForWidth());
        pushButton_57->setSizePolicy(sizePolicy1);
        pushButton_57->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_57, 16, 4, 1, 1);

        pushButton_81 = new QPushButton(page_2);
        pushButton_81->setObjectName("pushButton_81");
        sizePolicy1.setHeightForWidth(pushButton_81->sizePolicy().hasHeightForWidth());
        pushButton_81->setSizePolicy(sizePolicy1);
        pushButton_81->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_81, 15, 6, 1, 1);

        pushButton_65 = new QPushButton(page_2);
        pushButton_65->setObjectName("pushButton_65");
        sizePolicy1.setHeightForWidth(pushButton_65->sizePolicy().hasHeightForWidth());
        pushButton_65->setSizePolicy(sizePolicy1);
        pushButton_65->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_65, 15, 4, 1, 1);

        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_8, 6, 0, 1, 1);

        pushButton_42 = new QPushButton(page_2);
        pushButton_42->setObjectName("pushButton_42");
        sizePolicy1.setHeightForWidth(pushButton_42->sizePolicy().hasHeightForWidth());
        pushButton_42->setSizePolicy(sizePolicy1);
        pushButton_42->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_42, 15, 3, 1, 1);

        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 22, 3, 1, 1);

        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(30, 30));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_3, 17, 0, 1, 1);

        pushButton_67 = new QPushButton(page_2);
        pushButton_67->setObjectName("pushButton_67");
        sizePolicy1.setHeightForWidth(pushButton_67->sizePolicy().hasHeightForWidth());
        pushButton_67->setSizePolicy(sizePolicy1);
        pushButton_67->setMinimumSize(QSize(30, 30));
        pushButton_67->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_67, 17, 6, 1, 1);

        pushButton_37 = new QPushButton(page_2);
        pushButton_37->setObjectName("pushButton_37");
        sizePolicy1.setHeightForWidth(pushButton_37->sizePolicy().hasHeightForWidth());
        pushButton_37->setSizePolicy(sizePolicy1);
        pushButton_37->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_37, 12, 3, 1, 1);

        pushButton_43 = new QPushButton(page_2);
        pushButton_43->setObjectName("pushButton_43");
        sizePolicy1.setHeightForWidth(pushButton_43->sizePolicy().hasHeightForWidth());
        pushButton_43->setSizePolicy(sizePolicy1);
        pushButton_43->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_43, 13, 3, 1, 1);

        pushButton_47 = new QPushButton(page_2);
        pushButton_47->setObjectName("pushButton_47");
        sizePolicy1.setHeightForWidth(pushButton_47->sizePolicy().hasHeightForWidth());
        pushButton_47->setSizePolicy(sizePolicy1);
        pushButton_47->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_47, 6, 3, 1, 1);

        pushButton_73 = new QPushButton(page_2);
        pushButton_73->setObjectName("pushButton_73");
        sizePolicy1.setHeightForWidth(pushButton_73->sizePolicy().hasHeightForWidth());
        pushButton_73->setSizePolicy(sizePolicy1);
        pushButton_73->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_73, 16, 6, 1, 1);

        label_11 = new QLabel(page_2);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 19, 8, 1, 1);

        label_15 = new QLabel(page_2);
        label_15->setObjectName("label_15");

        gridLayout->addWidget(label_15, 13, 8, 1, 1);

        pushButton_14 = new QPushButton(page_2);
        pushButton_14->setObjectName("pushButton_14");
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_14, 14, 1, 1, 1);

        pushButton_36 = new QPushButton(page_2);
        pushButton_36->setObjectName("pushButton_36");
        sizePolicy1.setHeightForWidth(pushButton_36->sizePolicy().hasHeightForWidth());
        pushButton_36->setSizePolicy(sizePolicy1);
        pushButton_36->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_36, 12, 2, 1, 1);

        pushButton_12 = new QPushButton(page_2);
        pushButton_12->setObjectName("pushButton_12");
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_12, 6, 1, 1, 1);

        pushButton_49 = new QPushButton(page_2);
        pushButton_49->setObjectName("pushButton_49");
        sizePolicy1.setHeightForWidth(pushButton_49->sizePolicy().hasHeightForWidth());
        pushButton_49->setSizePolicy(sizePolicy1);
        pushButton_49->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_49, 15, 2, 1, 1);

        pushButton_56 = new QPushButton(page_2);
        pushButton_56->setObjectName("pushButton_56");
        sizePolicy1.setHeightForWidth(pushButton_56->sizePolicy().hasHeightForWidth());
        pushButton_56->setSizePolicy(sizePolicy1);
        pushButton_56->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_56, 6, 4, 1, 1);

        pushButton_35 = new QPushButton(page_2);
        pushButton_35->setObjectName("pushButton_35");
        sizePolicy1.setHeightForWidth(pushButton_35->sizePolicy().hasHeightForWidth());
        pushButton_35->setSizePolicy(sizePolicy1);
        pushButton_35->setMinimumSize(QSize(30, 30));
        pushButton_35->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_35, 17, 2, 1, 1);

        pushButton_17 = new QPushButton(page_2);
        pushButton_17->setObjectName("pushButton_17");
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);
        pushButton_17->setMinimumSize(QSize(30, 30));
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_17, 19, 1, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 22, 1, 1, 1);

        pushButton_38 = new QPushButton(page_2);
        pushButton_38->setObjectName("pushButton_38");
        sizePolicy1.setHeightForWidth(pushButton_38->sizePolicy().hasHeightForWidth());
        pushButton_38->setSizePolicy(sizePolicy1);
        pushButton_38->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_38, 16, 3, 1, 1);

        pushButton_45 = new QPushButton(page_2);
        pushButton_45->setObjectName("pushButton_45");
        sizePolicy1.setHeightForWidth(pushButton_45->sizePolicy().hasHeightForWidth());
        pushButton_45->setSizePolicy(sizePolicy1);
        pushButton_45->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_45, 14, 3, 1, 1);

        pushButton_76 = new QPushButton(page_2);
        pushButton_76->setObjectName("pushButton_76");
        sizePolicy1.setHeightForWidth(pushButton_76->sizePolicy().hasHeightForWidth());
        pushButton_76->setSizePolicy(sizePolicy1);
        pushButton_76->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_76, 14, 6, 1, 1);

        pushButton_44 = new QPushButton(page_2);
        pushButton_44->setObjectName("pushButton_44");
        sizePolicy1.setHeightForWidth(pushButton_44->sizePolicy().hasHeightForWidth());
        pushButton_44->setSizePolicy(sizePolicy1);
        pushButton_44->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_44, 14, 2, 1, 1);

        pushButton_61 = new QPushButton(page_2);
        pushButton_61->setObjectName("pushButton_61");
        sizePolicy1.setHeightForWidth(pushButton_61->sizePolicy().hasHeightForWidth());
        pushButton_61->setSizePolicy(sizePolicy1);
        pushButton_61->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_61, 14, 5, 1, 1);

        pushButton_77 = new QPushButton(page_2);
        pushButton_77->setObjectName("pushButton_77");
        sizePolicy1.setHeightForWidth(pushButton_77->sizePolicy().hasHeightForWidth());
        pushButton_77->setSizePolicy(sizePolicy1);
        pushButton_77->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_77, 14, 7, 1, 1);

        pushButton_58 = new QPushButton(page_2);
        pushButton_58->setObjectName("pushButton_58");
        sizePolicy1.setHeightForWidth(pushButton_58->sizePolicy().hasHeightForWidth());
        pushButton_58->setSizePolicy(sizePolicy1);
        pushButton_58->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_58, 15, 5, 1, 1);

        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_6, 16, 0, 1, 1);

        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(30, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_2, 19, 0, 1, 1);

        label_14 = new QLabel(page_2);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 14, 8, 1, 1);

        pushButton_80 = new QPushButton(page_2);
        pushButton_80->setObjectName("pushButton_80");
        sizePolicy1.setHeightForWidth(pushButton_80->sizePolicy().hasHeightForWidth());
        pushButton_80->setSizePolicy(sizePolicy1);
        pushButton_80->setMinimumSize(QSize(30, 30));
        pushButton_80->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_80, 19, 7, 1, 1);

        pushButton_52 = new QPushButton(page_2);
        pushButton_52->setObjectName("pushButton_52");
        sizePolicy1.setHeightForWidth(pushButton_52->sizePolicy().hasHeightForWidth());
        pushButton_52->setSizePolicy(sizePolicy1);
        pushButton_52->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_52, 12, 4, 1, 1);

        pushButton_13 = new QPushButton(page_2);
        pushButton_13->setObjectName("pushButton_13");
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_13, 16, 1, 1, 1);

        pushButton_11 = new QPushButton(page_2);
        pushButton_11->setObjectName("pushButton_11");
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_11, 12, 1, 1, 1);

        pushButton_68 = new QPushButton(page_2);
        pushButton_68->setObjectName("pushButton_68");
        sizePolicy1.setHeightForWidth(pushButton_68->sizePolicy().hasHeightForWidth());
        pushButton_68->setSizePolicy(sizePolicy1);
        pushButton_68->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_68, 12, 6, 1, 1);

        pushButton_60 = new QPushButton(page_2);
        pushButton_60->setObjectName("pushButton_60");
        sizePolicy1.setHeightForWidth(pushButton_60->sizePolicy().hasHeightForWidth());
        pushButton_60->setSizePolicy(sizePolicy1);
        pushButton_60->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_60, 14, 4, 1, 1);

        pushButton_16 = new QPushButton(page_2);
        pushButton_16->setObjectName("pushButton_16");
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_16, 15, 1, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 22, 0, 1, 1);

        label_16 = new QLabel(page_2);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 12, 8, 1, 1);

        label_6 = new QLabel(page_2);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 22, 4, 1, 1);

        pushButton_63 = new QPushButton(page_2);
        pushButton_63->setObjectName("pushButton_63");
        sizePolicy1.setHeightForWidth(pushButton_63->sizePolicy().hasHeightForWidth());
        pushButton_63->setSizePolicy(sizePolicy1);
        pushButton_63->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_63, 6, 5, 1, 1);

        label_17 = new QLabel(page_2);
        label_17->setObjectName("label_17");

        gridLayout->addWidget(label_17, 6, 8, 1, 1);

        pushButton_82 = new QPushButton(page_2);
        pushButton_82->setObjectName("pushButton_82");
        sizePolicy1.setHeightForWidth(pushButton_82->sizePolicy().hasHeightForWidth());
        pushButton_82->setSizePolicy(sizePolicy1);
        pushButton_82->setMinimumSize(QSize(30, 30));
        pushButton_82->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_82, 19, 6, 1, 1);

        pushButton_40 = new QPushButton(page_2);
        pushButton_40->setObjectName("pushButton_40");
        sizePolicy1.setHeightForWidth(pushButton_40->sizePolicy().hasHeightForWidth());
        pushButton_40->setSizePolicy(sizePolicy1);
        pushButton_40->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_40, 6, 2, 1, 1);

        pushButton_59 = new QPushButton(page_2);
        pushButton_59->setObjectName("pushButton_59");
        sizePolicy1.setHeightForWidth(pushButton_59->sizePolicy().hasHeightForWidth());
        pushButton_59->setSizePolicy(sizePolicy1);
        pushButton_59->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_59, 13, 5, 1, 1);

        label_7 = new QLabel(page_2);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 22, 5, 1, 1);

        pushButton_9 = new QPushButton(page_2);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_9, 12, 0, 1, 1);

        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_4, 13, 0, 1, 1);

        pushButton_41 = new QPushButton(page_2);
        pushButton_41->setObjectName("pushButton_41");
        sizePolicy1.setHeightForWidth(pushButton_41->sizePolicy().hasHeightForWidth());
        pushButton_41->setSizePolicy(sizePolicy1);
        pushButton_41->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_41, 16, 2, 1, 1);

        pushButton_62 = new QPushButton(page_2);
        pushButton_62->setObjectName("pushButton_62");
        sizePolicy1.setHeightForWidth(pushButton_62->sizePolicy().hasHeightForWidth());
        pushButton_62->setSizePolicy(sizePolicy1);
        pushButton_62->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_62, 13, 4, 1, 1);

        pushButton_51 = new QPushButton(page_2);
        pushButton_51->setObjectName("pushButton_51");
        sizePolicy1.setHeightForWidth(pushButton_51->sizePolicy().hasHeightForWidth());
        pushButton_51->setSizePolicy(sizePolicy1);
        pushButton_51->setMinimumSize(QSize(30, 30));
        pushButton_51->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_51, 17, 4, 1, 1);

        label_13 = new QLabel(page_2);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 15, 8, 1, 1);

        pushButton_71 = new QPushButton(page_2);
        pushButton_71->setObjectName("pushButton_71");
        sizePolicy1.setHeightForWidth(pushButton_71->sizePolicy().hasHeightForWidth());
        pushButton_71->setSizePolicy(sizePolicy1);
        pushButton_71->setMinimumSize(QSize(30, 30));
        pushButton_71->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_71, 17, 7, 1, 1);

        pushButton_39 = new QPushButton(page_2);
        pushButton_39->setObjectName("pushButton_39");
        sizePolicy1.setHeightForWidth(pushButton_39->sizePolicy().hasHeightForWidth());
        pushButton_39->setSizePolicy(sizePolicy1);
        pushButton_39->setMinimumSize(QSize(30, 30));
        pushButton_39->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_39, 17, 3, 1, 1);

        pushButton_72 = new QPushButton(page_2);
        pushButton_72->setObjectName("pushButton_72");
        sizePolicy1.setHeightForWidth(pushButton_72->sizePolicy().hasHeightForWidth());
        pushButton_72->setSizePolicy(sizePolicy1);
        pushButton_72->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_72, 6, 6, 1, 1);

        pushButton_70 = new QPushButton(page_2);
        pushButton_70->setObjectName("pushButton_70");
        sizePolicy1.setHeightForWidth(pushButton_70->sizePolicy().hasHeightForWidth());
        pushButton_70->setSizePolicy(sizePolicy1);
        pushButton_70->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_70, 16, 7, 1, 1);

        pushButton_74 = new QPushButton(page_2);
        pushButton_74->setObjectName("pushButton_74");
        sizePolicy1.setHeightForWidth(pushButton_74->sizePolicy().hasHeightForWidth());
        pushButton_74->setSizePolicy(sizePolicy1);
        pushButton_74->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_74, 15, 7, 1, 1);

        label_8 = new QLabel(page_2);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 22, 6, 1, 1);

        pushButton_54 = new QPushButton(page_2);
        pushButton_54->setObjectName("pushButton_54");
        sizePolicy1.setHeightForWidth(pushButton_54->sizePolicy().hasHeightForWidth());
        pushButton_54->setSizePolicy(sizePolicy1);
        pushButton_54->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_54, 16, 5, 1, 1);

        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_7, 15, 0, 1, 1);

        pushButton_69 = new QPushButton(page_2);
        pushButton_69->setObjectName("pushButton_69");
        sizePolicy1.setHeightForWidth(pushButton_69->sizePolicy().hasHeightForWidth());
        pushButton_69->setSizePolicy(sizePolicy1);
        pushButton_69->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_69, 12, 7, 1, 1);

        pushButton_15 = new QPushButton(page_2);
        pushButton_15->setObjectName("pushButton_15");
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_15, 13, 1, 1, 1);

        pushButton_53 = new QPushButton(page_2);
        pushButton_53->setObjectName("pushButton_53");
        sizePolicy1.setHeightForWidth(pushButton_53->sizePolicy().hasHeightForWidth());
        pushButton_53->setSizePolicy(sizePolicy1);
        pushButton_53->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_53, 12, 5, 1, 1);

        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_5, 14, 0, 1, 1);

        label_12 = new QLabel(page_2);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 16, 8, 1, 1);

        pushButton_66 = new QPushButton(page_2);
        pushButton_66->setObjectName("pushButton_66");
        sizePolicy1.setHeightForWidth(pushButton_66->sizePolicy().hasHeightForWidth());
        pushButton_66->setSizePolicy(sizePolicy1);
        pushButton_66->setMinimumSize(QSize(30, 30));
        pushButton_66->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_66, 19, 4, 1, 1);

        pushButton_64 = new QPushButton(page_2);
        pushButton_64->setObjectName("pushButton_64");
        sizePolicy1.setHeightForWidth(pushButton_64->sizePolicy().hasHeightForWidth());
        pushButton_64->setSizePolicy(sizePolicy1);
        pushButton_64->setMinimumSize(QSize(30, 30));
        pushButton_64->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_64, 19, 5, 1, 1);

        pushButton_75 = new QPushButton(page_2);
        pushButton_75->setObjectName("pushButton_75");
        sizePolicy1.setHeightForWidth(pushButton_75->sizePolicy().hasHeightForWidth());
        pushButton_75->setSizePolicy(sizePolicy1);
        pushButton_75->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_75, 13, 7, 1, 1);

        pushButton_55 = new QPushButton(page_2);
        pushButton_55->setObjectName("pushButton_55");
        sizePolicy1.setHeightForWidth(pushButton_55->sizePolicy().hasHeightForWidth());
        pushButton_55->setSizePolicy(sizePolicy1);
        pushButton_55->setMinimumSize(QSize(30, 30));
        pushButton_55->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_55, 17, 5, 1, 1);

        pushButton_46 = new QPushButton(page_2);
        pushButton_46->setObjectName("pushButton_46");
        sizePolicy1.setHeightForWidth(pushButton_46->sizePolicy().hasHeightForWidth());
        pushButton_46->setSizePolicy(sizePolicy1);
        pushButton_46->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_46, 13, 2, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 22, 2, 1, 1);

        pushButton_10 = new QPushButton(page_2);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setMinimumSize(QSize(30, 30));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_10, 17, 1, 1, 1);

        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome To Wizard Chess!", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Next Page!", nullptr));
        pushButton_79->setText(QCoreApplication::translate("MainWindow", "H8", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        pushButton_78->setText(QCoreApplication::translate("MainWindow", "G6", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_48->setText(QCoreApplication::translate("MainWindow", "D1", nullptr));
        pushButton_50->setText(QCoreApplication::translate("MainWindow", "C1", nullptr));
        pushButton_57->setText(QCoreApplication::translate("MainWindow", "E3", nullptr));
        pushButton_81->setText(QCoreApplication::translate("MainWindow", "G4", nullptr));
        pushButton_65->setText(QCoreApplication::translate("MainWindow", "E4", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "A8", nullptr));
        pushButton_42->setText(QCoreApplication::translate("MainWindow", "D4", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "A2", nullptr));
        pushButton_67->setText(QCoreApplication::translate("MainWindow", "G2", nullptr));
        pushButton_37->setText(QCoreApplication::translate("MainWindow", "D7", nullptr));
        pushButton_43->setText(QCoreApplication::translate("MainWindow", "D6", nullptr));
        pushButton_47->setText(QCoreApplication::translate("MainWindow", "D8", nullptr));
        pushButton_73->setText(QCoreApplication::translate("MainWindow", "G3", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "B5", nullptr));
        pushButton_36->setText(QCoreApplication::translate("MainWindow", "C7", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "B8", nullptr));
        pushButton_49->setText(QCoreApplication::translate("MainWindow", "C4", nullptr));
        pushButton_56->setText(QCoreApplication::translate("MainWindow", "E8", nullptr));
        pushButton_35->setText(QCoreApplication::translate("MainWindow", "C2", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "B1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        pushButton_38->setText(QCoreApplication::translate("MainWindow", "D3", nullptr));
        pushButton_45->setText(QCoreApplication::translate("MainWindow", "D5", nullptr));
        pushButton_76->setText(QCoreApplication::translate("MainWindow", "G5", nullptr));
        pushButton_44->setText(QCoreApplication::translate("MainWindow", "C5", nullptr));
        pushButton_61->setText(QCoreApplication::translate("MainWindow", "F5", nullptr));
        pushButton_77->setText(QCoreApplication::translate("MainWindow", "H5", nullptr));
        pushButton_58->setText(QCoreApplication::translate("MainWindow", "F4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "A3", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "A1", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_80->setText(QCoreApplication::translate("MainWindow", "H1", nullptr));
        pushButton_52->setText(QCoreApplication::translate("MainWindow", "E7", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "B3", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "B7", nullptr));
        pushButton_68->setText(QCoreApplication::translate("MainWindow", "G7", nullptr));
        pushButton_60->setText(QCoreApplication::translate("MainWindow", "E5", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "B4", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        pushButton_63->setText(QCoreApplication::translate("MainWindow", "F8", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_82->setText(QCoreApplication::translate("MainWindow", "G1", nullptr));
        pushButton_40->setText(QCoreApplication::translate("MainWindow", "C8", nullptr));
        pushButton_59->setText(QCoreApplication::translate("MainWindow", "F6", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "A7", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "A6", nullptr));
        pushButton_41->setText(QCoreApplication::translate("MainWindow", "C3", nullptr));
        pushButton_62->setText(QCoreApplication::translate("MainWindow", "E6", nullptr));
        pushButton_51->setText(QCoreApplication::translate("MainWindow", "E2", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_71->setText(QCoreApplication::translate("MainWindow", "H2", nullptr));
        pushButton_39->setText(QCoreApplication::translate("MainWindow", "D2", nullptr));
        pushButton_72->setText(QCoreApplication::translate("MainWindow", "G8", nullptr));
        pushButton_70->setText(QCoreApplication::translate("MainWindow", "H3", nullptr));
        pushButton_74->setText(QCoreApplication::translate("MainWindow", "H4", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        pushButton_54->setText(QCoreApplication::translate("MainWindow", "F3", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "A4", nullptr));
        pushButton_69->setText(QCoreApplication::translate("MainWindow", "H7", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "B6", nullptr));
        pushButton_53->setText(QCoreApplication::translate("MainWindow", "F7", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "A5", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_66->setText(QCoreApplication::translate("MainWindow", "E1", nullptr));
        pushButton_64->setText(QCoreApplication::translate("MainWindow", "F1", nullptr));
        pushButton_75->setText(QCoreApplication::translate("MainWindow", "H6", nullptr));
        pushButton_55->setText(QCoreApplication::translate("MainWindow", "F2", nullptr));
        pushButton_46->setText(QCoreApplication::translate("MainWindow", "C6", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "B2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
