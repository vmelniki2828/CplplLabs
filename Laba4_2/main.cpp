//Роботу виконали студенти групи IT-83 Білоус Максим та Мельник Владислав

#include "mainwindow.h"
#include "testlaba.h"
#include "tsreader.h"
#include "questionlaba.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    TestLaba t;
    Tsreader q;
    t.filetest = q;
    w.filewin = t;


    w.show();
    return a.exec();
}
