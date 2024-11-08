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
    QWidget *Start;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_23;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QWidget *House;
    QLabel *label_20;
    QWidget *Tutorial;
    QLabel *label_22;
    QWidget *Game;
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
    QLabel *label_4;
    QPushButton *pushButton_521;
    QLabel *label_5;
    QPushButton *pushButton_39;
    QPushButton *pushButton_51;
    QPushButton *pushButton_631;
    QPushButton *pushButton_70;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_111;
    QPushButton *pushButton_16;
    QPushButton *pushButton_49;
    QLabel *label_6;
    QPushButton *pushButton_58;
    QPushButton *pushButton_65;
    QPushButton *pushButton_581;
    QPushButton *pushButton_121;
    QPushButton *pushButton_41;
    QPushButton *pushButton_55;
    QPushButton *pushButton_471;
    QLabel *label_8;
    QPushButton *pushButton_621;
    QPushButton *pushButton_74;
    QLabel *label_13;
    QPushButton *pushButton_6;
    QPushButton *pushButton_13;
    QPushButton *pushButton_411;
    QPushButton *pushButton_38;
    QPushButton *pushButton_57;
    QPushButton *pushButton_54;
    QPushButton *pushButton_781;
    QLabel *label_9;
    QLabel *label_7;
    QPushButton *pushButton_541;
    QPushButton *pushButton_681;
    QPushButton *pushButton_701;
    QLabel *label_12;
    QPushButton *pushButton_3;
    QPushButton *pushButton_10;
    QPushButton *pushButton_35;
    QPushButton *pushButton_391;
    QPushButton *pushButton_511;
    QPushButton *pushButton_551;
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
    QLabel *label_21;
    QLabel *label_31;
    QLabel *label_41;
    QLabel *label_51;
    QLabel *label_61;
    QLabel *label_71;
    QLabel *label_81;
    QLabel *label_91;
    QTableWidget *tableWidget;
    QWidget *Settings;
    QLabel *label_211;
    QWidget *About;
    QLabel *label_18;
    QWidget *End;
    QLabel *label_19;
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
        QFont font;
        font.setFamilies({QString::fromUtf8("Garamond")});
        font.setPointSize(48);
        stackedWidget->setFont(font);
        stackedWidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget #Application {\n"
"rgb(0, 0, 0)\n"
"}"));
        Start = new QWidget();
        Start->setObjectName("Start");
        Start->setAutoFillBackground(false);
        label = new QLabel(Start);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 110, 601, 121));
        label->setFont(font);
        label->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	text-align: center\n"
"}"));
        pushButton = new QPushButton(Start);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 240, 141, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Garamond")});
        font1.setBold(false);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_23 = new QLabel(Start);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(340, 90, 121, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Garamond")});
        font2.setPointSize(14);
        label_23->setFont(font2);
        label_23->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        pushButton_18 = new QPushButton(Start);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setGeometry(QRect(70, 330, 141, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Garamond")});
        pushButton_18->setFont(font3);
        pushButton_19 = new QPushButton(Start);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(330, 330, 141, 51));
        pushButton_19->setFont(font3);
        pushButton_20 = new QPushButton(Start);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setGeometry(QRect(580, 330, 141, 51));
        pushButton_20->setFont(font3);
        stackedWidget->addWidget(Start);
        House = new QWidget();
        House->setObjectName("House");
        label_20 = new QLabel(House);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(370, 210, 49, 16));
        stackedWidget->addWidget(House);
        Tutorial = new QWidget();
        Tutorial->setObjectName("Tutorial");
        label_22 = new QLabel(Tutorial);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(350, 220, 49, 16));
        stackedWidget->addWidget(Tutorial);
        Game = new QWidget();
        Game->setObjectName("Game");
        Game->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(44);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Game->sizePolicy().hasHeightForWidth());
        Game->setSizePolicy(sizePolicy2);
        Game->setMaximumSize(QSize(800, 480));
        Game->setBaseSize(QSize(480, 480));
        gridLayout = new QGridLayout(Game);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        gridLayout->setContentsMargins(10, 10, 30, 30);
        groupBox = new QGroupBox(Game);
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

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 22, 2, 1, 1);

        pushButton_521 = new QPushButton(layoutWidget);
        pushButton_521->setObjectName("pushButton_521");
        sizePolicy1.setHeightForWidth(pushButton_521->sizePolicy().hasHeightForWidth());
        pushButton_521->setSizePolicy(sizePolicy1);
        pushButton_521->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_521, 12, 4, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 22, 3, 1, 1);

        pushButton_39 = new QPushButton(layoutWidget);
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

        gridLayout_2->addWidget(pushButton_39, 17, 3, 1, 1);

        pushButton_51 = new QPushButton(layoutWidget);
        pushButton_51->setObjectName("pushButton_51");
        sizePolicy1.setHeightForWidth(pushButton_51->sizePolicy().hasHeightForWidth());
        pushButton_51->setSizePolicy(sizePolicy1);
        pushButton_51->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_51, 14, 0, 1, 1);

        pushButton_631 = new QPushButton(layoutWidget);
        pushButton_631->setObjectName("pushButton_631");
        sizePolicy1.setHeightForWidth(pushButton_631->sizePolicy().hasHeightForWidth());
        pushButton_631->setSizePolicy(sizePolicy1);
        pushButton_631->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_631, 6, 5, 1, 1);

        pushButton_70 = new QPushButton(layoutWidget);
        pushButton_70->setObjectName("pushButton_70");
        sizePolicy1.setHeightForWidth(pushButton_70->sizePolicy().hasHeightForWidth());
        pushButton_70->setSizePolicy(sizePolicy1);
        pushButton_70->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_70, 16, 7, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 22, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 22, 1, 1, 1);

        pushButton_111 = new QPushButton(layoutWidget);
        pushButton_111->setObjectName("pushButton_111");
        sizePolicy1.setHeightForWidth(pushButton_111->sizePolicy().hasHeightForWidth());
        pushButton_111->setSizePolicy(sizePolicy1);
        pushButton_111->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_111, 12, 1, 1, 1);

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

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 22, 4, 1, 1);

        pushButton_58 = new QPushButton(layoutWidget);
        pushButton_58->setObjectName("pushButton_58");
        sizePolicy1.setHeightForWidth(pushButton_58->sizePolicy().hasHeightForWidth());
        pushButton_58->setSizePolicy(sizePolicy1);
        pushButton_58->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_58, 15, 5, 1, 1);

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

        pushButton_581 = new QPushButton(layoutWidget);
        pushButton_581->setObjectName("pushButton_581");
        sizePolicy1.setHeightForWidth(pushButton_581->sizePolicy().hasHeightForWidth());
        pushButton_581->setSizePolicy(sizePolicy1);
        pushButton_581->setMaximumSize(QSize(30, 30));
        pushButton_581->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_581, 4, 5, 1, 1);

        pushButton_121 = new QPushButton(layoutWidget);
        pushButton_121->setObjectName("pushButton_121");
        sizePolicy1.setHeightForWidth(pushButton_121->sizePolicy().hasHeightForWidth());
        pushButton_121->setSizePolicy(sizePolicy1);
        pushButton_121->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_121, 6, 1, 1, 1);

        pushButton_41 = new QPushButton(layoutWidget);
        pushButton_41->setObjectName("pushButton_41");
        sizePolicy1.setHeightForWidth(pushButton_41->sizePolicy().hasHeightForWidth());
        pushButton_41->setSizePolicy(sizePolicy1);
        pushButton_41->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_41, 16, 2, 1, 1);

        pushButton_55 = new QPushButton(layoutWidget);
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

        gridLayout_2->addWidget(pushButton_55, 17, 5, 1, 1);

        pushButton_471 = new QPushButton(layoutWidget);
        pushButton_471->setObjectName("pushButton_471");
        sizePolicy1.setHeightForWidth(pushButton_471->sizePolicy().hasHeightForWidth());
        pushButton_471->setSizePolicy(sizePolicy1);
        pushButton_471->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_471, 6, 3, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 22, 6, 1, 1);

        pushButton_621 = new QPushButton(layoutWidget);
        pushButton_621->setObjectName("pushButton_621");
        sizePolicy1.setHeightForWidth(pushButton_621->sizePolicy().hasHeightForWidth());
        pushButton_621->setSizePolicy(sizePolicy1);
        pushButton_621->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_621, 13, 4, 1, 1);

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

        pushButton_411 = new QPushButton(layoutWidget);
        pushButton_411->setObjectName("pushButton_411");
        sizePolicy1.setHeightForWidth(pushButton_411->sizePolicy().hasHeightForWidth());
        pushButton_411->setSizePolicy(sizePolicy1);
        pushButton_411->setMaximumSize(QSize(30, 30));
        pushButton_411->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_411, 5, 2, 1, 1);

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

        pushButton_781 = new QPushButton(layoutWidget);
        pushButton_781->setObjectName("pushButton_781");
        sizePolicy1.setHeightForWidth(pushButton_781->sizePolicy().hasHeightForWidth());
        pushButton_781->setSizePolicy(sizePolicy1);
        pushButton_781->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_781, 13, 6, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 22, 7, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 22, 5, 1, 1);

        pushButton_541 = new QPushButton(layoutWidget);
        pushButton_541->setObjectName("pushButton_541");
        sizePolicy1.setHeightForWidth(pushButton_541->sizePolicy().hasHeightForWidth());
        pushButton_541->setSizePolicy(sizePolicy1);
        pushButton_541->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_541, 16, 5, 1, 1);

        pushButton_681 = new QPushButton(layoutWidget);
        pushButton_681->setObjectName("pushButton_681");
        sizePolicy1.setHeightForWidth(pushButton_681->sizePolicy().hasHeightForWidth());
        pushButton_681->setSizePolicy(sizePolicy1);
        pushButton_681->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_681, 12, 6, 1, 1);

        pushButton_701 = new QPushButton(layoutWidget);
        pushButton_701->setObjectName("pushButton_701");
        sizePolicy1.setHeightForWidth(pushButton_701->sizePolicy().hasHeightForWidth());
        pushButton_701->setSizePolicy(sizePolicy1);
        pushButton_701->setMaximumSize(QSize(30, 30));
        pushButton_701->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_701, 5, 7, 1, 1);

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

        pushButton_391 = new QPushButton(layoutWidget);
        pushButton_391->setObjectName("pushButton_391");
        sizePolicy1.setHeightForWidth(pushButton_391->sizePolicy().hasHeightForWidth());
        pushButton_391->setSizePolicy(sizePolicy1);
        pushButton_391->setMinimumSize(QSize(30, 30));
        pushButton_391->setMaximumSize(QSize(30, 30));
        pushButton_391->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_391, 6, 3, 1, 1);

        pushButton_511 = new QPushButton(layoutWidget);
        pushButton_511->setObjectName("pushButton_511");
        sizePolicy1.setHeightForWidth(pushButton_511->sizePolicy().hasHeightForWidth());
        pushButton_511->setSizePolicy(sizePolicy1);
        pushButton_511->setMinimumSize(QSize(30, 30));
        pushButton_511->setMaximumSize(QSize(30, 30));
        pushButton_511->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FFFFFF;\n"
"    color: black;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_511, 6, 4, 1, 1);

        pushButton_551 = new QPushButton(layoutWidget);
        pushButton_551->setObjectName("pushButton_551");
        sizePolicy1.setHeightForWidth(pushButton_551->sizePolicy().hasHeightForWidth());
        pushButton_551->setSizePolicy(sizePolicy1);
        pushButton_551->setMinimumSize(QSize(30, 30));
        pushButton_551->setMaximumSize(QSize(30, 30));
        pushButton_551->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(pushButton_551, 6, 5, 1, 1);

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

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName("label_21");
        label_21->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_21, 8, 0, 1, 1);

        label_31 = new QLabel(layoutWidget);
        label_31->setObjectName("label_31");
        label_31->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_31, 8, 1, 1, 1);

        label_41 = new QLabel(layoutWidget);
        label_41->setObjectName("label_41");
        label_41->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_41, 8, 2, 1, 1);

        label_51 = new QLabel(layoutWidget);
        label_51->setObjectName("label_51");
        label_51->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_51, 8, 3, 1, 1);

        label_61 = new QLabel(layoutWidget);
        label_61->setObjectName("label_61");
        label_61->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_61, 8, 4, 1, 1);

        label_71 = new QLabel(layoutWidget);
        label_71->setObjectName("label_71");
        label_71->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_71, 8, 5, 1, 1);

        label_81 = new QLabel(layoutWidget);
        label_81->setObjectName("label_81");
        label_81->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_81, 8, 6, 1, 1);

        label_91 = new QLabel(layoutWidget);
        label_91->setObjectName("label_91");
        label_91->setMaximumSize(QSize(30, 30));

        gridLayout_2->addWidget(label_91, 8, 7, 1, 1);

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

        stackedWidget->addWidget(Game);
        Settings = new QWidget();
        Settings->setObjectName("Settings");
        label_211 = new QLabel(Settings);
        label_211->setObjectName("label_211");
        label_211->setGeometry(QRect(320, 200, 49, 16));
        stackedWidget->addWidget(Settings);
        About = new QWidget();
        About->setObjectName("About");
        label_18 = new QLabel(About);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(340, 230, 49, 16));
        stackedWidget->addWidget(About);
        End = new QWidget();
        End->setObjectName("End");
        label_19 = new QLabel(End);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(330, 280, 49, 16));
        stackedWidget->addWidget(End);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "WIZARD CHESS", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Welcome To", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "Tutorial", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "House", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Tutorial", nullptr));
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
        pushButton_61->setText(QCoreApplication::translate("MainWindow", "G2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_521->setText(QCoreApplication::translate("MainWindow", "E7", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        pushButton_39->setText(QCoreApplication::translate("MainWindow", "D2", nullptr));
        pushButton_51->setText(QCoreApplication::translate("MainWindow", "A5", nullptr));
        pushButton_631->setText(QCoreApplication::translate("MainWindow", "F8", nullptr));
        pushButton_70->setText(QCoreApplication::translate("MainWindow", "H3", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        pushButton_111->setText(QCoreApplication::translate("MainWindow", "A4", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "B4", nullptr));
        pushButton_49->setText(QCoreApplication::translate("MainWindow", "C8", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        pushButton_58->setText(QCoreApplication::translate("MainWindow", "D4", nullptr));
        pushButton_65->setText(QCoreApplication::translate("MainWindow", "E4", nullptr));
        pushButton_581->setText(QCoreApplication::translate("MainWindow", "D4", nullptr));
        pushButton_121->setText(QCoreApplication::translate("MainWindow", "B8", nullptr));
        pushButton_41->setText(QCoreApplication::translate("MainWindow", "C3", nullptr));
        pushButton_55->setText(QCoreApplication::translate("MainWindow", "F2", nullptr));
        pushButton_471->setText(QCoreApplication::translate("MainWindow", "D8", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        pushButton_621->setText(QCoreApplication::translate("MainWindow", "G4", nullptr));
        pushButton_74->setText(QCoreApplication::translate("MainWindow", "H4", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "A3", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "B3", nullptr));
        pushButton_411->setText(QCoreApplication::translate("MainWindow", "C3", nullptr));
        pushButton_38->setText(QCoreApplication::translate("MainWindow", "D3", nullptr));
        pushButton_57->setText(QCoreApplication::translate("MainWindow", "E3", nullptr));
        pushButton_54->setText(QCoreApplication::translate("MainWindow", "B3", nullptr));
        pushButton_781->setText(QCoreApplication::translate("MainWindow", "G6", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        pushButton_541->setText(QCoreApplication::translate("MainWindow", "F3", nullptr));
        pushButton_681->setText(QCoreApplication::translate("MainWindow", "G3", nullptr));
        pushButton_701->setText(QCoreApplication::translate("MainWindow", "H3", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "A2", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "B2", nullptr));
        pushButton_35->setText(QCoreApplication::translate("MainWindow", "C2", nullptr));
        pushButton_391->setText(QCoreApplication::translate("MainWindow", "D2", nullptr));
        pushButton_511->setText(QCoreApplication::translate("MainWindow", "E2", nullptr));
        pushButton_551->setText(QCoreApplication::translate("MainWindow", "F2", nullptr));
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
        label_21->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        label_61->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        label_71->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        label_81->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_91->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "P1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "P2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Turn #", nullptr));
        label_211->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "End", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
