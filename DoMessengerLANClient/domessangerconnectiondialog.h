#ifndef DOMESSANGERCONNECTIONDIALOG_H
#define DOMESSANGERCONNECTIONDIALOG_H

#include <QDialog>

namespace Ui {
class DoMessangerConnectionDialog;
}

namespace DuarteCorporation
{
class DoMessangerConnectionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DoMessangerConnectionDialog(QWidget *parent = nullptr);
    ~DoMessangerConnectionDialog();
    QString hostname() const;
    quint16 port() const;
private slots:
    void on_ok_clicked();

    void on_cancel_clicked();

private:
    Ui::DoMessangerConnectionDialog *ui;
    QString mHostname;
    quint16 mPort;
};

inline QString DoMessangerConnectionDialog::hostname() const
{
    return mHostname;
}
inline quint16 DoMessangerConnectionDialog::port() const
{
    return mPort;
}
}

#endif // DOMESSANGERCONNECTIONDIALOG_H
