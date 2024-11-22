#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMap>
#include <QList>
#include <QFile>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class ChessPiece {
public:
    QString type;  // "pawn", "rook", etc.
    QString color; // "white" or "black"
    QString position; // Chess notation, e.g., "A1", "B2"

    ChessPiece(QString t, QString c, QString p) : type(t), color(c), position(p) {}
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:

    void onTileClicked();

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

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_EndGame_clicked();

private:
    Ui::MainWindow *ui;
    QMap<QString, QPushButton*> boardMap; // Map positions (A1, B2) to QPushButtons
    QList<ChessPiece> pieces;            // List of chess pieces
    QString selectedPiecePosition;       // Position of selected piece
    ChessPiece* selectedPiece = nullptr; // Currently selected piece

    void setupBoard();
    void setupInitialPositions();
    void placePieceOnTile(const QString& position, const QString& pieceType, const QString& color);
    bool isValidMove(const QString& pieceType, const QString& from, const QString& to);

};

#endif // MAINWINDOW_H
