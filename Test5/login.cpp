#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    ui->lineEdit->setText("DESKTOP-QTF967D\\SQLEXPRESS");
    ui->lineEdit_2->setText("Lab5");
    ui->lineEdit_3->setText("sa");
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
    mes =new QMessageBox();
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={SQL Server};SERVER="+ui->lineEdit->text()+";DATABASE="+ui->lineEdit_2->text()+";");
    db.setUserName(ui->lineEdit_3->text());
    db.setPassword(ui->lineEdit_4->text());


    if(db.open())
    {
        mes->setText("Соединилось");
    }
    else
    {
        mes->setText("Соединение не установлено");
    }

    mes->show();
}
