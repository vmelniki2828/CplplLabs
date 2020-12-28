#include "DoMessengerServer.h"
#include "DoMessengerSocket.h"
#include <QTextStream>
#include <QDebug>
namespace DuarteCorporation
{
DoMessengerServer::DoMessengerServer(QObject *parent)
    :QTcpServer(parent)
{
}

bool DoMessengerServer::startServer(quint16 port)
{
    return listen(QHostAddress::Any, port);
}

void DoMessengerServer::incomingConnection(qintptr handle)
{
    qDebug() << "Client connected with handle:"<<handle;
    auto socket = new DoMessengerSocket(handle, this);
    mSockets << socket;

    for(auto i : mSockets){
        QTextStream T(i);
        T<<"Server : Has connected:"<<handle;
        i->flush();
    }

    connect(socket, &DoMessengerSocket::DoReadyRead,[&](DoMessengerSocket *S)
    {
        qDebug() << "DoReadyRead";
        QTextStream T(S);
        auto text = T.readAll();

        for(auto i : mSockets)
        {
            QTextStream K(i);
            K << text;
            i->flush();
        }
    });

    connect(socket, &DoMessengerSocket::DoStateChanged,
            [&](DoMessengerSocket *S, int ST){
        qDebug() << "DoStateChanged with handle:" << S ->socketDescriptor();
        if(ST == QTcpSocket::UnconnectedState)
        {
            qDebug() <<"Unconnected state with handle:" << S ->socketDescriptor();
            mSockets.removeOne(S);
            for(auto i : mSockets)
            {
                QTextStream K(i);
                K <<"Server: Client"<< S->socketDescriptor()<<"disconnection";
                i->flush();
            }
        }
    });
}
}
