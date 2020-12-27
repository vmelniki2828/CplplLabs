#ifndef TSREADER_H
#define TSREADER_H
#include <QString>
#include <QFile>


class Tsreader
{
public:
    Tsreader();
    QString ReadQuestion(QString dir);
    void SaveResault(QString dir, QString rez);
    QString ReadResault(QString dir);
    QString answer;

};

#endif // TSREADER_H
