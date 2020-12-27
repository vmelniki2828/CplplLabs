#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <string>
#include <QTextStream>
#include "testlaba.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

TestLaba filewin;


int i=0;
int trueAns = 0;
void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->setText("");
    if(i>=5){
        ui->pushButton_3->setText("Ваш результат");
        QString str;
        str.setNum(trueAns);
        ui->label->setText(str);
    }
    else{
    filewin.TestReadQuestion(filewin.andirs[i],filewin.questdirs[i]);
    i++;
    ui->label->setText(filewin.Question.Questionq);
}
}


void MainWindow::on_ch_an_clicked()
{
    if(filewin.Question.SetAnswer(ui->lineEdit->text())){
        trueAns = trueAns+1;
    }
}


void MainWindow::on_sh_rez_clicked()
{
     ui->label_2->setText(filewin.TestReadResault(filewin.resdir));
}

void MainWindow::on_sv_rezz_clicked()
{
    filewin.TestSaveResault(filewin.resdir, ui->label->text());
}


