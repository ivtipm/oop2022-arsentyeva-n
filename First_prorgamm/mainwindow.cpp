/// @author Арсентьева Н. В.
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calc.h"                                               // модуль с вычислениями
#include <QMessageBox>
#include <exception>


/// Конструктор объекта по умолчанию
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

/// Деструктор удаления объекта окна
MainWindow::~MainWindow()
{
    delete ui;
}

/// Кнопка "вычислить"
void MainWindow::on_pushButton_calc_clicked()
{
    try {
        a = ui->lineEdit_firstCathetus->text().toFloat();          // Обращение к содержимому поля ввода
        c = ui->lineEdit_hypotenuse->text().toFloat();
        b = calc_katet(a, c);                                      // Вычисление 2 катета
        R = calc_r(a, b, c);                                       // Вычисление радиуса вписанной окружности
        ui->label_resultB->setText( QString::number( b, 'f', 3 )); // Изменение текста на элементе интерфейса
        ui->label_resultR->setText( QString::number( R, 'f', 3 )); // Перевод в строку и округление до 3 чисел
      //roundf(b,3)

    }  catch (std::invalid_argument &e) {

    }

}


void MainWindow::on_action_triggered()
{
    QMessageBox::about(this, "О разработчике", "Арсентьева Н. В.");
}

