#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    //void on_pushButton_clicked();

    void on_pushButton_18_clicked();

// <<<<<<< HEAD
    void on_pushButton_19_clicked();

    void on_pushButton_2_clicked();
// =======
    void on_pushButton_start_clicked();

    void on_pushButton_tutorial_clicked();

    void on_pushButton_settings_clicked();

    void on_pushButton_about_clicked();
// >>>>>>> ec80273e3b344ef1a23e998207c077d80fe31758

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
