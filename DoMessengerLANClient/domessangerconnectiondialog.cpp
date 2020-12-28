#include "DoMessangerConnectionDialog.h"
#include "ui_DoMessangerConnectionDialog.h"

namespace DuarteCorporation
{
DoMessangerConnectionDialog::DoMessangerConnectionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DoMessangerConnectionDialog)
{
    ui->setupUi(this);
}

DoMessangerConnectionDialog::~DoMessangerConnectionDialog()
{
    delete ui;
}

void DoMessangerConnectionDialog::on_ok_clicked()
{
    mHostname = ui->hostname->text();
    mPort = ui->port->value();
    accept();
}

void DoMessangerConnectionDialog::on_cancel_clicked()
{
    reject();
}
}
