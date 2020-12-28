#ifndef DOMESSENGERSOCKET_H
#define DOMESSENGERSOCKET_H

#include <QTcpSocket>
namespace DuarteCorporation
{
class DoMessengerSocket : public QTcpSocket
{
    Q_OBJECT

public:
    DoMessengerSocket(qintptr handle, QObject *parent = nullptr);
signals:
    void DoReadyRead(DoMessengerSocket *);
    void DoStateChanged(DoMessengerSocket *, int);
};
}
#endif // DOMESSENGERSOCKET_H
