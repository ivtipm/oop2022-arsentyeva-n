/// @author: Natalya Arsentyeva
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>          // библиотека для создания диалоговых окон
#include <QTextStream>

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



/// Обработчик событий вычислений
void MainWindow::on_pushButton_calc_clicked()
{
    try {
        square1.set_coordinates(ui->lineEdit_Ax->text().toFloat(),
                                ui->lineEdit_Ay->text().toFloat(),
                                ui->lineEdit_Bx->text().toFloat(),
                                ui->lineEdit_By->text().toFloat(),
                                ui->lineEdit_Cx->text().toFloat(),
                                ui->lineEdit_Cy->text().toFloat(),
                                ui->lineEdit_Dx->text().toFloat(),
                                ui->lineEdit_Dy->text().toFloat());  // Обращение к содержимому поля ввода


        ui->plainTextEdit_report->setStyleSheet("background-color: white"); // Задает цвет поля белый

        ui->statusbar->clearMessage();

        // Вычисления
        ui->label_result_length_a->setText( QString::number( square1.side_lengths(), 'f', 3 )); // Изменение текста на элементе интерфейса
        ui->label_result_perimeter->setText( QString::number( square1.perimeter(), 'f', 3 )); // Перевод в строку и округление до 3 чисел
        ui->label_result_area->setText( QString::number( square1.area(), 'f', 3 ));


        ui->plainTextEdit_report->appendPlainText( "a = " +
                                                          QString::number(square1.side_lengths(),'f', 3 ) +
                                                          "; p = " +
                                                          QString::number(square1.perimeter(),'f', 3 ) +
                                                          "; s = " +
                                                          QString::number(square1.area(),'f', 3 )
                                                          );

    }  catch (const std::invalid_argument &e) {
        ui->statusbar->showMessage( "Error" );
        ui->plainTextEdit_report->setStyleSheet("background-color: rgb(255, 120, 122);"); // Меняет цвет lineEdit на красный в случае исключения
        ui->plainTextEdit_report->appendPlainText( "Square don't exist");
    }
}


/// Очистка всех полей
void MainWindow::on_pushButton_clean_clicked()
{
    ui->lineEdit_Ax->clear();
    ui->lineEdit_Ay->clear();
    ui->lineEdit_Bx->clear();
    ui->lineEdit_By->clear();
    ui->lineEdit_Cx->clear();
    ui->lineEdit_Cy->clear();
    ui->lineEdit_Dx->clear();
    ui->lineEdit_Dy->clear();
    ui->statusbar->clearMessage();
    ui->label_result_length_a->setText("0"); // Изменение текста на элементе интерфейса
    ui->label_result_perimeter->setText("0");
    ui->label_result_area->setText("0");
    ui->plainTextEdit_report->clear(); // Задает цвет поля белый
    ui->plainTextEdit_report->setStyleSheet("background-color: white"); // Задает цвет поля белый
}


/// О разработчике
void MainWindow::on_action_triggered()
{
    QMessageBox::about(this, "О разработчике", "Арсентьева Н. В.");
}


//SquareFig l3(5, 3, 2.5, 3, 2.5, 0.5, 5, 0.5); // P = 10, S = 6.25, len = 2.5
//l1.set_coordinates(2, 2, 2, 6, -2, 6, -2, 2); // lengths side = 4.000000 cm; P = 16.000000 cm; S = 16.000000 cm2
//l2.set_coordinates(0, 3, 3, 0, 0, -3, -3, 0);  // P = 16.97, S = 18, len = 4.24


/////
//void MainWindow::on_action_save_file_triggered()
//{
//    ui->plainTextEdit_report->clear(); // Задает цвет поля белый
//}


/////
//void MainWindow::on_action_open_file_triggered()
//{
//        // получение пути к домашней папке пользователя
//        QString home = QDir::homePath();

//        // функция getOpenFileName создаёт диалоговое окно для открытия существующего файла
//        // Параметры:
//        // указатель на объект родительского окна
//        // Заголовок окна
//        // Путь к паке по умолчанию
//        // Фильтр по типам файлов
//        // После закрытия окна функция вернёт абсолютное имя файла, если он был выбран

//        QString filename = QFileDialog::getOpenFileName(this, "Open Text File", home, "Text Files (*.txt)");
//        std::string filename1 = filename.toStdString();
//        int n = file_lines_count(filename1);
//        //std::string utf8_text = qs.toUtf8().constData();
//        read_file(filename1, n, square1);
//        ui->lineEdit_Ax->setText( QString::number(square1.get_Ax()));
//        ui->lineEdit_Ay->setText( QString::number(square1.get_Ay()));
//        ui->lineEdit_Bx->setText( QString::number(square1.get_Bx()));
//        ui->lineEdit_By->setText( QString::number(square1.get_By()));
//        ui->lineEdit_Cx->setText( QString::number(square1.get_Cx()));
//        ui->lineEdit_Cy->setText( QString::number(square1.get_Cy()));
//        ui->lineEdit_Dx->setText( QString::number(square1.get_Dx()));
//        ui->lineEdit_Dy->setText( QString::number(square1.get_Dy()));
//}

