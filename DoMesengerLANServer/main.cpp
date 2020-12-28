//Роботу виконали студенти групи IT-83 Білоус Максим та Мельник Владислав

#include <QCoreApplication>
#include "DoMessengerServer.h"

using namespace DuarteCorporation;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    DoMessengerServer Server;
    if(!Server.startServer(5555))
    {
        qDebug() << "Error : " << Server.errorString();
        return 1;
    }
    qDebug() << "Server started...";
    return a.exec();
}
