#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "settings.h"
#include "home.h"
#include <QTableWidget>
#include <QTimer>
#include "../software/digitalGame/Board.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void populateCells(char x1, int y1, char x2, int y2, int i, int turnCnt);

    void clearTableWidget();

    void on_pushButton_home_about_clicked();

    void on_pushButton_home_end_clicked();
    void on_pushButton_start_clicked();

    void on_pushButton_tutorial_clicked();

    void on_pushButton_settings_clicked();

    void on_pushButton_about_clicked();

    void on_pushButton_home_settings_clicked();

    void on_pushButton_continue_tutorial_clicked();

    void on_pushButton_home_tutorial_clicked();

    void on_pushButton_home_tutorial_end_clicked();

    void on_pushButton_previous_tutorial_clicked();

    void on_pushButton_home1_clicked();

    void on_pushButton_home2_clicked();

    void on_pushButton_EndGame_clicked();

    void on_easyLevel_clicked();

    void on_intermediateLevel_clicked();

    void on_hardLevel_clicked();

    void on_expertLevel_clicked();

    void on_voiceCommand_clicked();

    void on_touchCommand_clicked();

    void on_pushButton_back_settings_clicked();

    void on_randomGeneratorButton_clicked();

    void on_pushButton_Gryffindor_clicked();

    void on_pushButton_Slytherin_clicked();

    void on_pushButton_Hufflepuff_clicked();

    void on_pushButton_Ravenclaw_clicked();

    void on_pushButton_Gryffindor_2_clicked();

    void on_pushButton_Slytherin_2_clicked();

    void on_pushButton_Hufflepuff_2_clicked();

    void on_pushButton_Ravenclaw_2_clicked();

private:
    Ui::MainWindow *ui;
    Settings *mwSettings;
    Home *whiteChoice;
    Home *blackChoice;
    QTableWidget *tableWidget;
    QTimer *timer;
    bool bCheck;
    bool wCheck;
    Board game;

};
#endif // MAINWINDOW_H
