/// @author Арсентьева Н. В.
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>



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
        t.setA( ui->lineEdit_firstCathetus->text().toFloat());  // Обращение к содержимому поля ввода
        t.setC( ui->lineEdit_hypotenuse->text().toFloat());

        ui->statusbar->clearMessage(); //

        // Вычисления
        ui->label_resultB->setText( QString::number( t.calc_b(), 'f', 3 )); // Изменение текста на элементе интерфейса
        ui->label_resultR->setText( QString::number( t.calc_r(), 'f', 3 )); // Перевод в строку и округление до 3 чисел
        //roundf(b,3)

        ui->plainTextEdit_report->appendPlainText( "c = " +
                                                          QString::number(t.calc_b(),'f', 3 ) +
                                                          "; r = " +
                                                          QString::number(t.calc_r(),'f', 3 )
                                                          );

    }  catch (const std::invalid_argument &e) {
        ui->statusbar->showMessage( "Error" );
        // todo:
    }

}


void MainWindow::on_action_triggered()
{
    QMessageBox::about(this, "О разработчике", "Арсентьева Н. В.");
}

