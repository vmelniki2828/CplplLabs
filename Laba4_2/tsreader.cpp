#include "tsreader.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <string>
#include <QDebug>

Tsreader::Tsreader()
{

}

    QString answer;



QString Tsreader :: ReadQuestion(QString dir){
     QString a = dir;
     QFile file(a);
     if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
     QTextStream in(&file);
     this->answer = file.readAll();
     return this->answer;
}

void Tsreader :: SaveResault(QString dir, QString rez){
    //QFile file;
    //QString d = dir;
    //file.open(QIODevice::WriteOnly);
    //file.write("file,dir");
    //file.close();

    QFile file(dir);

    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        //QMessageBox::warning(this,"title","file not open");
    }
    QTextStream out(&file);
    QString text = rez;
    out << text;
    file.flush();
    file.close();
}

QString Tsreader :: ReadResault(QString dir){
    QString d = dir;
    QFile file(d);
    if(!file.open(QIODevice::ReadOnly))
       QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    this->answer = file.readAll();
    return this->answer;
}

