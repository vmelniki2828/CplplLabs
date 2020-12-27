#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <tsreader.h>
#include <testlaba.h>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    TestLaba filewin;


private slots:

    void on_pushButton_3_clicked();

    void on_ch_an_clicked();

    void on_sh_rez_clicked();

    void on_sv_rezz_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
