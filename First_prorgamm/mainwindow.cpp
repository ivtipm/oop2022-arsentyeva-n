/// @author Арсентьева Н. В.
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calc.h"  // модуль с вычислениями
#include <math.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_calc_clicked()
{   float a, b = 0, c, R = 0;
    a = ui->lineEdit_firstCathetus->text().toFloat(); // Обращение к содержимому поля ввода
    c = ui->lineEdit_hypotenuse->text().toFloat();
    b = calc_katet(a, c);   // Вычисление 2 катета
    R = calc_r(a, b, c);    // Вычисление ралиуса вписанной окружности
    ui->label_resultB->setText( QString::number( b, 'f', 3 )); // Изменение текста на элементе интерфейса
    ui->label_resultR->setText( QString::number( R, 'f', 3 ));
  //roundf(b,3)
}

