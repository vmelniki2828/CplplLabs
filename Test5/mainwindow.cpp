#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_action_3_triggered()
{
    logwin = new login();
    logwin ->show();
}

void MainWindow::on_pushButton_clicked()
{

    model = new QSqlQueryModel();

    model->setQuery("SELECT * from Questions  ");
    model->setHeaderData(0,Qt::Horizontal,"ID");
    model->setHeaderData(1,Qt::Horizontal,"Вопрос");
    model->setHeaderData(2,Qt::Horizontal,"Ответ");

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    dobzap = new addrecord();
    connect(dobzap,SIGNAL(refresh_table()),this,SLOT(obr_ref_tab()));
    dobzap->show();
}

void MainWindow::obr_ref_tab()
{
    on_pushButton_clicked();
}

