#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"
#include "ui_login.h"
//#include <QSqlTableModel>
#include <QSqlQuery>
#include "addrecord.h"
#include "ui_addrecord.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    login*logwin;
    addrecord*dobzap;

private slots:
    void on_action_3_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void obr_ref_tab();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    //QSqlTableModel*model;
    QSqlQueryModel*model;
};
#endif // MAINWINDOW_H
