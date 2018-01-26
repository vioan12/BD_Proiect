#include "addorganizatie.h"
#include "ui_addorganizatie.h"
#include <QMessageBox>

AddOrganizatie::AddOrganizatie(QWidget *parent) : QDialog(parent), ui(new Ui::AddOrganizatie)
{
    ui->setupUi(this);
}

void AddOrganizatie::SetData(const QString &id, const QString &nume, const QString &oras)
{
    ui->TB_id->setText(id);
    ui->TB_nume->setText(nume);
    ui->TB_oras->setText(oras);
}

void AddOrganizatie::Data(QString &id, QString &nume, QString &oras)
{
    id=ui->TB_id->text();
    nume=ui->TB_nume->text();
    oras=ui->TB_oras->text();
}

void AddOrganizatie::showEvent(QShowEvent *)
{
    ui->TB_id->setText("");
    ui->TB_nume->setText("");
    ui->TB_oras->setText("");
}

void AddOrganizatie::accept()
{
    bool ok=true,sw=true;
    ui->TB_id->text().toInt(&ok);
    if(!ok)
    {
        sw=false;
        QMessageBox::warning(this,"AddError","Introduceti ID-ul");
    }
    if(sw==true)
    {
        QMessageBox::information(nullptr,"AddSucced","Succes");
        QDialog::accept();
    }
}

AddOrganizatie::~AddOrganizatie()
{
    delete ui;
}
