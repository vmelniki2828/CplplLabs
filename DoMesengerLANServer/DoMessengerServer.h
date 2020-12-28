#ifndef DOMESSENGERSERVER_H
#define DOMESSENGERSERVER_H

#include <QTcpServer>
namespace DuarteCorporation
{
class DoMessengerSocket;

class DoMessengerServer:public QTcpServer
{
public:
    DoMessengerServer(QObject *parent = nullptr);
    bool startServer(quint16 port);
protected:
    void incomingConnection(qintptr handle);
private:
    QList<DoMessengerSocket *> mSockets;
};
}

#endif // DOMESSENGERSERVER_H
