#include "DoMessengerSocket.h"

namespace DuarteCorporation
{

DoMessengerSocket::DoMessengerSocket(qintptr handle,QObject *parent)
    :QTcpSocket(parent)
{
    setSocketDescriptor(handle);

    connect(this, &DoMessengerSocket::readyRead, [&]()
    {
        emit DoReadyRead(this);
    });

    connect(this, &DoMessengerSocket::stateChanged, [&](int S){
        emit DoStateChanged(this,S);
    });
}
}
