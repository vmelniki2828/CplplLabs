#include "addrecord.h"
#include "ui_addrecord.h"

addrecord::addrecord(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addrecord)
{
    ui->setupUi(this);
}

addrecord::~addrecord()
{
    delete ui;
}

void addrecord::on_pushButton_clicked()
{
    QSqlQuery* query = new QSqlQuery;
    query->prepare("insert into Questions values(:QuestionText,:QuestionAnswer)");
    query->bindValue(":QuestionText",ui->lineEdit->text());
    query->bindValue(":QuestionAnswer",ui->lineEdit_2->text());

    QMessageBox* mess = new QMessageBox();

    if(!query->exec())
    {
        mess->setText("Запрос неверен");
        mess->show();
    }

    emit refresh_table();
}
