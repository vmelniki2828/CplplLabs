//Роботу виконали студенти групи IT-83 Білоус Максим та Мельник Владислав

#include "mainwindow.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();


}

