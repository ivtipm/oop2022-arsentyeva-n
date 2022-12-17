/// @author: Natalya Arsentyeva
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "SquareFig.h"
#include "file.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_triggered();

    void on_pushButton_calc_clicked();

    void on_pushButton_clean_clicked();

private:
    Ui::MainWindow *ui;
    SquareFig square1;
};
#endif // MAINWINDOW_H
