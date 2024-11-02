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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
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
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_12;
    QPushButton *pushButton_40;
    QPushButton *pushButton_47;
    QPushButton *pushButton_56;
    QPushButton *pushButton_63;
    QPushButton *pushButton_72;
    QPushButton *pushButton_79;
    QLabel *label_17;
    QPushButton *pushButton_9;
    QPushButton *pushButton_11;
    QPushButton *pushButton_36;
    QPushButton *pushButton_37;
    QPushButton *pushButton_52;
    QPushButton *pushButton_53;
    QPushButton *pushButton_68;
    QPushButton *pushButton_69;
    QLabel *label_16;
    QPushButton *pushButton_4;
    QPushButton *pushButton_15;
    QPushButton *pushButton_46;
    QPushButton *pushButton_43;
    QPushButton *pushButton_62;
    QPushButton *pushButton_59;
    QPushButton *pushButton_78;
    QPushButton *pushButton_75;
    QLabel *label_15;
    QPushButton *pushButton_5;
    QPushButton *pushButton_14;
    QPushButton *pushButton_44;
    QPushButton *pushButton_45;
    QPushButton *pushButton_60;
    QPushButton *pushButton_61;
    QPushButton *pushButton_76;
    QPushButton *pushButton_77;
    QLabel *label_14;
    QPushButton *pushButton_7;
    QPushButton *pushButton_16;
    QPushButton *pushButton_49;
    QPushButton *pushButton_42;
    QPushButton *pushButton_65;
    QPushButton *pushButton_58;
    QPushButton *pushButton_81;
    QPushButton *pushButton_74;
    QLabel *label_13;
    QPushButton *pushButton_6;
    QPushButton *pushButton_13;
    QPushButton *pushButton_41;
    QPushButton *pushButton_38;
    QPushButton *pushButton_57;
    QPushButton *pushButton_54;
    QPushButton *pushButton_73;
    QPushButton *pushButton_70;
    QLabel *label_12;
    QPushButton *pushButton_3;
    QPushButton *pushButton_10;
    QPushButton *pushButton_35;
    QPushButton *pushButton_39;
    QPushButton *pushButton_51;
    QPushButton *pushButton_55;
    QPushButton *pushButton_67;
    QPushButton *pushButton_71;
    QLabel *label_10;
    QPushButton *pushButton_2;
    QPushButton *pushButton_17;
    QPushButton *pushButton_50;
    QPushButton *pushButton_48;
    QPushButton *pushButton_66;
    QPushButton *pushButton_64;
    QPushButton *pushButton_82;
    QPushButton *pushButton_80;
    QLabel *label_11;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QTableWidget *tableWidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(825, 498);
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
        stackedWidget->setMinimumSize(QSize(800, 480));
        stackedWidget->setMaximumSize(QSize(800, 480));
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
        page_2->setBaseSize(QSize(480, 480));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        gridLayout->setContentsMargins(10, 10, 30, 30);
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName("groupBox");
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 40, 301, 306));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMaximumSize(QSize(30, 30));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_8, 0, 0, 1, 1);

        pushButton_12 = new QPushButton(layoutWidget);
        pushButton_12->setObjectName("pushButton_12");
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setMinimumSize(QSize(30, 30));
        pushButton_12->setMaximumSize(QSize(30, 30));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_12, 0, 1, 1, 1);

        pushButton_40 = new QPushButton(layoutWidget);
        pushButton_40->setObjectName("pushButton_40");
        sizePolicy1.setHeightForWidth(pushButton_40->sizePolicy().hasHeightForWidth());
        pushButton_40->setSizePolicy(sizePolicy1);
        pushButton_40->setMaximumSize(QSize(30, 30));
        pushButton_40->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_40, 0, 2, 1, 1);

        pushButton_47 = new QPushButton(layoutWidget);
        pushButton_47->setObjectName("pushButton_47");
        sizePolicy1.setHeightForWidth(pushButton_47->sizePolicy().hasHeightForWidth());
        pushButton_47->setSizePolicy(sizePolicy1);
        pushButton_47->setMaximumSize(QSize(30, 30));
        pushButton_47->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_47, 0, 3, 1, 1);

        pushButton_56 = new QPushButton(layoutWidget);
        pushButton_56->setObjectName("pushButton_56");
        sizePolicy1.setHeightForWidth(pushButton_56->sizePolicy().hasHeightForWidth());
        pushButton_56->setSizePolicy(sizePolicy1);
        pushButton_56->setMaximumSize(QSize(30, 30));
        pushButton_56->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_56, 0, 4, 1, 1);

        pushButton_63 = new QPushButton(layoutWidget);
        pushButton_63->setObjectName("pushButton_63");
        sizePolicy1.setHeightForWidth(pushButton_63->sizePolicy().hasHeightForWidth());
        pushButton_63->setSizePolicy(sizePolicy1);
        pushButton_63->setMaximumSize(QSize(30, 30));
        pushButton_63->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_63, 0, 5, 1, 1);

        pushButton_72 = new QPushButton(layoutWidget);
        pushButton_72->setObjectName("pushButton_72");
        sizePolicy1.setHeightForWidth(pushButton_72->sizePolicy().hasHeightForWidth());
        pushButton_72->setSizePolicy(sizePolicy1);
        pushButton_72->setMaximumSize(QSize(30, 30));
        pushButton_72->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_72, 0, 6, 1, 1);

        pushButton_79 = new QPushButton(layoutWidget);
        pushButton_79->setObjectName("pushButton_79");
        sizePolicy1.setHeightForWidth(pushButton_79->sizePolicy().hasHeightForWidth());
        pushButton_79->setSizePolicy(sizePolicy1);
        pushButton_79->setMaximumSize(QSize(30, 30));
        pushButton_79->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_79, 0, 7, 1, 1);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName("label_17");
        label_17->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_17, 0, 8, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setMaximumSize(QSize(30, 30));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_9, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName("pushButton_11");
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setMinimumSize(QSize(30, 30));
        pushButton_11->setMaximumSize(QSize(30, 30));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_11, 1, 1, 1, 1);

        pushButton_36 = new QPushButton(layoutWidget);
        pushButton_36->setObjectName("pushButton_36");
        sizePolicy1.setHeightForWidth(pushButton_36->sizePolicy().hasHeightForWidth());
        pushButton_36->setSizePolicy(sizePolicy1);
        pushButton_36->setMinimumSize(QSize(30, 30));
        pushButton_36->setMaximumSize(QSize(30, 30));
        pushButton_36->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_36, 1, 2, 1, 1);

        pushButton_37 = new QPushButton(layoutWidget);
        pushButton_37->setObjectName("pushButton_37");
        sizePolicy1.setHeightForWidth(pushButton_37->sizePolicy().hasHeightForWidth());
        pushButton_37->setSizePolicy(sizePolicy1);
        pushButton_37->setMinimumSize(QSize(30, 30));
        pushButton_37->setMaximumSize(QSize(30, 30));
        pushButton_37->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_37, 1, 3, 1, 1);

        pushButton_52 = new QPushButton(layoutWidget);
        pushButton_52->setObjectName("pushButton_52");
        sizePolicy1.setHeightForWidth(pushButton_52->sizePolicy().hasHeightForWidth());
        pushButton_52->setSizePolicy(sizePolicy1);
        pushButton_52->setMaximumSize(QSize(30, 30));
        pushButton_52->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_52, 1, 4, 1, 1);

        pushButton_53 = new QPushButton(layoutWidget);
        pushButton_53->setObjectName("pushButton_53");
        sizePolicy1.setHeightForWidth(pushButton_53->sizePolicy().hasHeightForWidth());
        pushButton_53->setSizePolicy(sizePolicy1);
        pushButton_53->setMaximumSize(QSize(30, 30));
        pushButton_53->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_53, 1, 5, 1, 1);

        pushButton_68 = new QPushButton(layoutWidget);
        pushButton_68->setObjectName("pushButton_68");
        sizePolicy1.setHeightForWidth(pushButton_68->sizePolicy().hasHeightForWidth());
        pushButton_68->setSizePolicy(sizePolicy1);
        pushButton_68->setMaximumSize(QSize(30, 30));
        pushButton_68->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_68, 1, 6, 1, 1);

        pushButton_69 = new QPushButton(layoutWidget);
        pushButton_69->setObjectName("pushButton_69");
        sizePolicy1.setHeightForWidth(pushButton_69->sizePolicy().hasHeightForWidth());
        pushButton_69->setSizePolicy(sizePolicy1);
        pushButton_69->setMaximumSize(QSize(30, 30));
        pushButton_69->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_69, 1, 7, 1, 1);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");
        label_16->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_16, 1, 8, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setMinimumSize(QSize(30, 30));
        pushButton_4->setMaximumSize(QSize(30, 30));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_15 = new QPushButton(layoutWidget);
        pushButton_15->setObjectName("pushButton_15");
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setMinimumSize(QSize(30, 30));
        pushButton_15->setMaximumSize(QSize(30, 30));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_15, 2, 1, 1, 1);

        pushButton_46 = new QPushButton(layoutWidget);
        pushButton_46->setObjectName("pushButton_46");
        sizePolicy1.setHeightForWidth(pushButton_46->sizePolicy().hasHeightForWidth());
        pushButton_46->setSizePolicy(sizePolicy1);
        pushButton_46->setMaximumSize(QSize(30, 30));
        pushButton_46->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_46, 2, 2, 1, 1);

        pushButton_43 = new QPushButton(layoutWidget);
        pushButton_43->setObjectName("pushButton_43");
        sizePolicy1.setHeightForWidth(pushButton_43->sizePolicy().hasHeightForWidth());
        pushButton_43->setSizePolicy(sizePolicy1);
        pushButton_43->setMaximumSize(QSize(30, 30));
        pushButton_43->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_43, 2, 3, 1, 1);

        pushButton_62 = new QPushButton(layoutWidget);
        pushButton_62->setObjectName("pushButton_62");
        sizePolicy1.setHeightForWidth(pushButton_62->sizePolicy().hasHeightForWidth());
        pushButton_62->setSizePolicy(sizePolicy1);
        pushButton_62->setMaximumSize(QSize(30, 30));
        pushButton_62->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_62, 2, 4, 1, 1);

        pushButton_59 = new QPushButton(layoutWidget);
        pushButton_59->setObjectName("pushButton_59");
        sizePolicy1.setHeightForWidth(pushButton_59->sizePolicy().hasHeightForWidth());
        pushButton_59->setSizePolicy(sizePolicy1);
        pushButton_59->setMaximumSize(QSize(30, 30));
        pushButton_59->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_59, 2, 5, 1, 1);

        pushButton_78 = new QPushButton(layoutWidget);
        pushButton_78->setObjectName("pushButton_78");
        sizePolicy1.setHeightForWidth(pushButton_78->sizePolicy().hasHeightForWidth());
        pushButton_78->setSizePolicy(sizePolicy1);
        pushButton_78->setMaximumSize(QSize(30, 30));
        pushButton_78->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_78, 2, 6, 1, 1);

        pushButton_75 = new QPushButton(layoutWidget);
        pushButton_75->setObjectName("pushButton_75");
        sizePolicy1.setHeightForWidth(pushButton_75->sizePolicy().hasHeightForWidth());
        pushButton_75->setSizePolicy(sizePolicy1);
        pushButton_75->setMaximumSize(QSize(30, 30));
        pushButton_75->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_75, 2, 7, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName("label_15");
        label_15->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_15, 2, 8, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMaximumSize(QSize(30, 30));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_5, 3, 0, 1, 1);

        pushButton_14 = new QPushButton(layoutWidget);
        pushButton_14->setObjectName("pushButton_14");
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setMinimumSize(QSize(30, 30));
        pushButton_14->setMaximumSize(QSize(30, 30));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_14, 3, 1, 1, 1);

        pushButton_44 = new QPushButton(layoutWidget);
        pushButton_44->setObjectName("pushButton_44");
        sizePolicy1.setHeightForWidth(pushButton_44->sizePolicy().hasHeightForWidth());
        pushButton_44->setSizePolicy(sizePolicy1);
        pushButton_44->setMaximumSize(QSize(30, 30));
        pushButton_44->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_44, 3, 2, 1, 1);

        pushButton_45 = new QPushButton(layoutWidget);
        pushButton_45->setObjectName("pushButton_45");
        sizePolicy1.setHeightForWidth(pushButton_45->sizePolicy().hasHeightForWidth());
        pushButton_45->setSizePolicy(sizePolicy1);
        pushButton_45->setMaximumSize(QSize(30, 30));
        pushButton_45->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_45, 3, 3, 1, 1);

        pushButton_60 = new QPushButton(layoutWidget);
        pushButton_60->setObjectName("pushButton_60");
        sizePolicy1.setHeightForWidth(pushButton_60->sizePolicy().hasHeightForWidth());
        pushButton_60->setSizePolicy(sizePolicy1);
        pushButton_60->setMaximumSize(QSize(30, 30));
        pushButton_60->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_60, 3, 4, 1, 1);

        pushButton_61 = new QPushButton(layoutWidget);
        pushButton_61->setObjectName("pushButton_61");
        sizePolicy1.setHeightForWidth(pushButton_61->sizePolicy().hasHeightForWidth());
        pushButton_61->setSizePolicy(sizePolicy1);
        pushButton_61->setMaximumSize(QSize(30, 30));
        pushButton_61->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_61, 3, 5, 1, 1);

        pushButton_76 = new QPushButton(layoutWidget);
        pushButton_76->setObjectName("pushButton_76");
        sizePolicy1.setHeightForWidth(pushButton_76->sizePolicy().hasHeightForWidth());
        pushButton_76->setSizePolicy(sizePolicy1);
        pushButton_76->setMaximumSize(QSize(30, 30));
        pushButton_76->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_76, 3, 6, 1, 1);

        pushButton_77 = new QPushButton(layoutWidget);
        pushButton_77->setObjectName("pushButton_77");
        sizePolicy1.setHeightForWidth(pushButton_77->sizePolicy().hasHeightForWidth());
        pushButton_77->setSizePolicy(sizePolicy1);
        pushButton_77->setMaximumSize(QSize(30, 30));
        pushButton_77->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_77, 3, 7, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");
        label_14->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_14, 3, 8, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setMaximumSize(QSize(30, 30));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_7, 4, 0, 1, 1);

        pushButton_16 = new QPushButton(layoutWidget);
        pushButton_16->setObjectName("pushButton_16");
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);
        pushButton_16->setMinimumSize(QSize(30, 30));
        pushButton_16->setMaximumSize(QSize(30, 30));
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_16, 4, 1, 1, 1);

        pushButton_49 = new QPushButton(layoutWidget);
        pushButton_49->setObjectName("pushButton_49");
        sizePolicy1.setHeightForWidth(pushButton_49->sizePolicy().hasHeightForWidth());
        pushButton_49->setSizePolicy(sizePolicy1);
        pushButton_49->setMaximumSize(QSize(30, 30));
        pushButton_49->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_49, 4, 2, 1, 1);

        pushButton_42 = new QPushButton(layoutWidget);
        pushButton_42->setObjectName("pushButton_42");
        sizePolicy1.setHeightForWidth(pushButton_42->sizePolicy().hasHeightForWidth());
        pushButton_42->setSizePolicy(sizePolicy1);
        pushButton_42->setMaximumSize(QSize(30, 30));
        pushButton_42->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_42, 4, 3, 1, 1);

        pushButton_65 = new QPushButton(layoutWidget);
        pushButton_65->setObjectName("pushButton_65");
        sizePolicy1.setHeightForWidth(pushButton_65->sizePolicy().hasHeightForWidth());
        pushButton_65->setSizePolicy(sizePolicy1);
        pushButton_65->setMaximumSize(QSize(30, 30));
        pushButton_65->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_65, 4, 4, 1, 1);

        pushButton_58 = new QPushButton(layoutWidget);
        pushButton_58->setObjectName("pushButton_58");
        sizePolicy1.setHeightForWidth(pushButton_58->sizePolicy().hasHeightForWidth());
        pushButton_58->setSizePolicy(sizePolicy1);
        pushButton_58->setMaximumSize(QSize(30, 30));
        pushButton_58->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_58, 4, 5, 1, 1);

        pushButton_81 = new QPushButton(layoutWidget);
        pushButton_81->setObjectName("pushButton_81");
        sizePolicy1.setHeightForWidth(pushButton_81->sizePolicy().hasHeightForWidth());
        pushButton_81->setSizePolicy(sizePolicy1);
        pushButton_81->setMaximumSize(QSize(30, 30));
        pushButton_81->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_81, 4, 6, 1, 1);

        pushButton_74 = new QPushButton(layoutWidget);
        pushButton_74->setObjectName("pushButton_74");
        sizePolicy1.setHeightForWidth(pushButton_74->sizePolicy().hasHeightForWidth());
        pushButton_74->setSizePolicy(sizePolicy1);
        pushButton_74->setMaximumSize(QSize(30, 30));
        pushButton_74->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_74, 4, 7, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        label_13->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_13, 4, 8, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setMaximumSize(QSize(30, 30));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_6, 5, 0, 1, 1);

        pushButton_13 = new QPushButton(layoutWidget);
        pushButton_13->setObjectName("pushButton_13");
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setMinimumSize(QSize(30, 30));
        pushButton_13->setMaximumSize(QSize(30, 30));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_13, 5, 1, 1, 1);

        pushButton_41 = new QPushButton(layoutWidget);
        pushButton_41->setObjectName("pushButton_41");
        sizePolicy1.setHeightForWidth(pushButton_41->sizePolicy().hasHeightForWidth());
        pushButton_41->setSizePolicy(sizePolicy1);
        pushButton_41->setMaximumSize(QSize(30, 30));
        pushButton_41->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_41, 5, 2, 1, 1);

        pushButton_38 = new QPushButton(layoutWidget);
        pushButton_38->setObjectName("pushButton_38");
        sizePolicy1.setHeightForWidth(pushButton_38->sizePolicy().hasHeightForWidth());
        pushButton_38->setSizePolicy(sizePolicy1);
        pushButton_38->setMinimumSize(QSize(30, 30));
        pushButton_38->setMaximumSize(QSize(30, 30));
        pushButton_38->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_38, 5, 3, 1, 1);

        pushButton_57 = new QPushButton(layoutWidget);
        pushButton_57->setObjectName("pushButton_57");
        sizePolicy1.setHeightForWidth(pushButton_57->sizePolicy().hasHeightForWidth());
        pushButton_57->setSizePolicy(sizePolicy1);
        pushButton_57->setMaximumSize(QSize(30, 30));
        pushButton_57->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_57, 5, 4, 1, 1);

        pushButton_54 = new QPushButton(layoutWidget);
        pushButton_54->setObjectName("pushButton_54");
        sizePolicy1.setHeightForWidth(pushButton_54->sizePolicy().hasHeightForWidth());
        pushButton_54->setSizePolicy(sizePolicy1);
        pushButton_54->setMaximumSize(QSize(30, 30));
        pushButton_54->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_54, 5, 5, 1, 1);

        pushButton_73 = new QPushButton(layoutWidget);
        pushButton_73->setObjectName("pushButton_73");
        sizePolicy1.setHeightForWidth(pushButton_73->sizePolicy().hasHeightForWidth());
        pushButton_73->setSizePolicy(sizePolicy1);
        pushButton_73->setMaximumSize(QSize(30, 30));
        pushButton_73->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_73, 5, 6, 1, 1);

        pushButton_70 = new QPushButton(layoutWidget);
        pushButton_70->setObjectName("pushButton_70");
        sizePolicy1.setHeightForWidth(pushButton_70->sizePolicy().hasHeightForWidth());
        pushButton_70->setSizePolicy(sizePolicy1);
        pushButton_70->setMaximumSize(QSize(30, 30));
        pushButton_70->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_70, 5, 7, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_12, 5, 8, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(30, 30));
        pushButton_3->setMaximumSize(QSize(30, 30));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_3, 6, 0, 1, 1);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setMinimumSize(QSize(30, 30));
        pushButton_10->setMaximumSize(QSize(30, 30));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_10, 6, 1, 1, 1);

        pushButton_35 = new QPushButton(layoutWidget);
        pushButton_35->setObjectName("pushButton_35");
        sizePolicy1.setHeightForWidth(pushButton_35->sizePolicy().hasHeightForWidth());
        pushButton_35->setSizePolicy(sizePolicy1);
        pushButton_35->setMinimumSize(QSize(30, 30));
        pushButton_35->setMaximumSize(QSize(30, 30));
        pushButton_35->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_35, 6, 2, 1, 1);

        pushButton_39 = new QPushButton(layoutWidget);
        pushButton_39->setObjectName("pushButton_39");
        sizePolicy1.setHeightForWidth(pushButton_39->sizePolicy().hasHeightForWidth());
        pushButton_39->setSizePolicy(sizePolicy1);
        pushButton_39->setMinimumSize(QSize(30, 30));
        pushButton_39->setMaximumSize(QSize(30, 30));
        pushButton_39->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_39, 6, 3, 1, 1);

        pushButton_51 = new QPushButton(layoutWidget);
        pushButton_51->setObjectName("pushButton_51");
        sizePolicy1.setHeightForWidth(pushButton_51->sizePolicy().hasHeightForWidth());
        pushButton_51->setSizePolicy(sizePolicy1);
        pushButton_51->setMinimumSize(QSize(30, 30));
        pushButton_51->setMaximumSize(QSize(30, 30));
        pushButton_51->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_51, 6, 4, 1, 1);

        pushButton_55 = new QPushButton(layoutWidget);
        pushButton_55->setObjectName("pushButton_55");
        sizePolicy1.setHeightForWidth(pushButton_55->sizePolicy().hasHeightForWidth());
        pushButton_55->setSizePolicy(sizePolicy1);
        pushButton_55->setMinimumSize(QSize(30, 30));
        pushButton_55->setMaximumSize(QSize(30, 30));
        pushButton_55->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_55, 6, 5, 1, 1);

        pushButton_67 = new QPushButton(layoutWidget);
        pushButton_67->setObjectName("pushButton_67");
        sizePolicy1.setHeightForWidth(pushButton_67->sizePolicy().hasHeightForWidth());
        pushButton_67->setSizePolicy(sizePolicy1);
        pushButton_67->setMinimumSize(QSize(30, 30));
        pushButton_67->setMaximumSize(QSize(30, 30));
        pushButton_67->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_67, 6, 6, 1, 1);

        pushButton_71 = new QPushButton(layoutWidget);
        pushButton_71->setObjectName("pushButton_71");
        sizePolicy1.setHeightForWidth(pushButton_71->sizePolicy().hasHeightForWidth());
        pushButton_71->setSizePolicy(sizePolicy1);
        pushButton_71->setMinimumSize(QSize(30, 30));
        pushButton_71->setMaximumSize(QSize(30, 30));
        pushButton_71->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_71, 6, 7, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");
        label_10->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_10, 6, 8, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(30, 30));
        pushButton_2->setMaximumSize(QSize(30, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_2, 7, 0, 1, 1);

        pushButton_17 = new QPushButton(layoutWidget);
        pushButton_17->setObjectName("pushButton_17");
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);
        pushButton_17->setMinimumSize(QSize(30, 30));
        pushButton_17->setMaximumSize(QSize(30, 30));
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_17, 7, 1, 1, 1);

        pushButton_50 = new QPushButton(layoutWidget);
        pushButton_50->setObjectName("pushButton_50");
        sizePolicy1.setHeightForWidth(pushButton_50->sizePolicy().hasHeightForWidth());
        pushButton_50->setSizePolicy(sizePolicy1);
        pushButton_50->setMinimumSize(QSize(30, 30));
        pushButton_50->setMaximumSize(QSize(30, 30));
        pushButton_50->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_50, 7, 2, 1, 1);

        pushButton_48 = new QPushButton(layoutWidget);
        pushButton_48->setObjectName("pushButton_48");
        sizePolicy1.setHeightForWidth(pushButton_48->sizePolicy().hasHeightForWidth());
        pushButton_48->setSizePolicy(sizePolicy1);
        pushButton_48->setMinimumSize(QSize(30, 30));
        pushButton_48->setMaximumSize(QSize(30, 30));
        pushButton_48->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_48, 7, 3, 1, 1);

        pushButton_66 = new QPushButton(layoutWidget);
        pushButton_66->setObjectName("pushButton_66");
        sizePolicy1.setHeightForWidth(pushButton_66->sizePolicy().hasHeightForWidth());
        pushButton_66->setSizePolicy(sizePolicy1);
        pushButton_66->setMinimumSize(QSize(30, 30));
        pushButton_66->setMaximumSize(QSize(30, 30));
        pushButton_66->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_66, 7, 4, 1, 1);

        pushButton_64 = new QPushButton(layoutWidget);
        pushButton_64->setObjectName("pushButton_64");
        sizePolicy1.setHeightForWidth(pushButton_64->sizePolicy().hasHeightForWidth());
        pushButton_64->setSizePolicy(sizePolicy1);
        pushButton_64->setMinimumSize(QSize(30, 30));
        pushButton_64->setMaximumSize(QSize(30, 30));
        pushButton_64->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_64, 7, 5, 1, 1);

        pushButton_82 = new QPushButton(layoutWidget);
        pushButton_82->setObjectName("pushButton_82");
        sizePolicy1.setHeightForWidth(pushButton_82->sizePolicy().hasHeightForWidth());
        pushButton_82->setSizePolicy(sizePolicy1);
        pushButton_82->setMinimumSize(QSize(30, 30));
        pushButton_82->setMaximumSize(QSize(30, 30));
        pushButton_82->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_82, 7, 6, 1, 1);

        pushButton_80 = new QPushButton(layoutWidget);
        pushButton_80->setObjectName("pushButton_80");
        sizePolicy1.setHeightForWidth(pushButton_80->sizePolicy().hasHeightForWidth());
        pushButton_80->setSizePolicy(sizePolicy1);
        pushButton_80->setMinimumSize(QSize(30, 30));
        pushButton_80->setMaximumSize(QSize(30, 30));
        pushButton_80->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_80, 7, 7, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_11, 7, 8, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_2, 8, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_3, 8, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_4, 8, 2, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_5, 8, 3, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_6, 8, 4, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_7, 8, 5, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_8, 8, 6, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_9, 8, 7, 1, 1);

        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(380, 40, 251, 311));

        gridLayout->addWidget(groupBox, 0, 0, 3, 1);

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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Game Sim", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "A8", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "B8", nullptr));
        pushButton_40->setText(QCoreApplication::translate("MainWindow", "C8", nullptr));
        pushButton_47->setText(QCoreApplication::translate("MainWindow", "D8", nullptr));
        pushButton_56->setText(QCoreApplication::translate("MainWindow", "E8", nullptr));
        pushButton_63->setText(QCoreApplication::translate("MainWindow", "F8", nullptr));
        pushButton_72->setText(QCoreApplication::translate("MainWindow", "G8", nullptr));
        pushButton_79->setText(QCoreApplication::translate("MainWindow", "H8", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "A7", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "B7", nullptr));
        pushButton_36->setText(QCoreApplication::translate("MainWindow", "C7", nullptr));
        pushButton_37->setText(QCoreApplication::translate("MainWindow", "D7", nullptr));
        pushButton_52->setText(QCoreApplication::translate("MainWindow", "E7", nullptr));
        pushButton_53->setText(QCoreApplication::translate("MainWindow", "F7", nullptr));
        pushButton_68->setText(QCoreApplication::translate("MainWindow", "G7", nullptr));
        pushButton_69->setText(QCoreApplication::translate("MainWindow", "H7", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "A6", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "B6", nullptr));
        pushButton_46->setText(QCoreApplication::translate("MainWindow", "C6", nullptr));
        pushButton_43->setText(QCoreApplication::translate("MainWindow", "D6", nullptr));
        pushButton_62->setText(QCoreApplication::translate("MainWindow", "E6", nullptr));
        pushButton_59->setText(QCoreApplication::translate("MainWindow", "F6", nullptr));
        pushButton_78->setText(QCoreApplication::translate("MainWindow", "G6", nullptr));
        pushButton_75->setText(QCoreApplication::translate("MainWindow", "H6", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "A5", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "B5", nullptr));
        pushButton_44->setText(QCoreApplication::translate("MainWindow", "C5", nullptr));
        pushButton_45->setText(QCoreApplication::translate("MainWindow", "D5", nullptr));
        pushButton_60->setText(QCoreApplication::translate("MainWindow", "E5", nullptr));
        pushButton_61->setText(QCoreApplication::translate("MainWindow", "F5", nullptr));
        pushButton_76->setText(QCoreApplication::translate("MainWindow", "G5", nullptr));
        pushButton_77->setText(QCoreApplication::translate("MainWindow", "H5", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "A4", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "B4", nullptr));
        pushButton_49->setText(QCoreApplication::translate("MainWindow", "C4", nullptr));
        pushButton_42->setText(QCoreApplication::translate("MainWindow", "D4", nullptr));
        pushButton_65->setText(QCoreApplication::translate("MainWindow", "E4", nullptr));
        pushButton_58->setText(QCoreApplication::translate("MainWindow", "F4", nullptr));
        pushButton_81->setText(QCoreApplication::translate("MainWindow", "G4", nullptr));
        pushButton_74->setText(QCoreApplication::translate("MainWindow", "H4", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "A3", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "B3", nullptr));
        pushButton_41->setText(QCoreApplication::translate("MainWindow", "C3", nullptr));
        pushButton_38->setText(QCoreApplication::translate("MainWindow", "D3", nullptr));
        pushButton_57->setText(QCoreApplication::translate("MainWindow", "E3", nullptr));
        pushButton_54->setText(QCoreApplication::translate("MainWindow", "F3", nullptr));
        pushButton_73->setText(QCoreApplication::translate("MainWindow", "G3", nullptr));
        pushButton_70->setText(QCoreApplication::translate("MainWindow", "H3", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "A2", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "B2", nullptr));
        pushButton_35->setText(QCoreApplication::translate("MainWindow", "C2", nullptr));
        pushButton_39->setText(QCoreApplication::translate("MainWindow", "D2", nullptr));
        pushButton_51->setText(QCoreApplication::translate("MainWindow", "E2", nullptr));
        pushButton_55->setText(QCoreApplication::translate("MainWindow", "F2", nullptr));
        pushButton_67->setText(QCoreApplication::translate("MainWindow", "G2", nullptr));
        pushButton_71->setText(QCoreApplication::translate("MainWindow", "H2", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "A1", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "B1", nullptr));
        pushButton_50->setText(QCoreApplication::translate("MainWindow", "C1", nullptr));
        pushButton_48->setText(QCoreApplication::translate("MainWindow", "D1", nullptr));
        pushButton_66->setText(QCoreApplication::translate("MainWindow", "E1", nullptr));
        pushButton_64->setText(QCoreApplication::translate("MainWindow", "F1", nullptr));
        pushButton_82->setText(QCoreApplication::translate("MainWindow", "G1", nullptr));
        pushButton_80->setText(QCoreApplication::translate("MainWindow", "H1", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "P1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "P2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Turn #", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
