/// @author Арсентьева Н. В.

#include "mainwindow.h"             // Подключение заголовочного файла окна

// подключаем описание класса QApplication. В каждом приложении Qt с графическим интерфейсом (GUI)
// обязательно должен быть только один объект QApplication.
// QApplication управляет различными ресурсами приложения, такими как шрифт по умолчанию и курсор.  Он представляет собой само приложение и содержит главный цикл обработки событий.
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);     // Объект a является экземпляром класса QApplication в данной программе. Передаём параметры argc и argv в конструктор QApplication, чтобы он мог обработать определенные стандартные аргументы командной строки.
    MainWindow w;                   // Создание объекта нового окна
    w.show();                       // Показывать окно
    return a.exec();                // Запускается цикл обработки событий и начинает свою работу приложение.Взаимодействия курсора.
}
