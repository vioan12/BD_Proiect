#include "addparticipant.h"
#include "ui_addparticipant.h"
#include <QMessageBox>

AddParticipant::AddParticipant(QWidget *parent) : QDialog(parent), ui(new Ui::AddParticipant)
{
    ui->setupUi(this);
}

void AddParticipant::SetData(const QString &id, const QString &nume, const QString &varsta, const QString &experienta, const QString &idgreutate, const QString &idorganizatie)
{
    ui->TB_id->setText(id);
    ui->TB_nume->setText(nume);
    ui->TB_varsta->setText(varsta);
    ui->TB_experienta->setText(experienta);
    ui->TB_idgreutate->setText(idgreutate);
    ui->TB_idorganizatie->setText(idorganizatie);
}

void AddParticipant::Data(QString &id, QString &nume, QString &varsta, QString &experienta, QString &idgreutate, QString &idorganizatie)
{
    id=ui->TB_id->text();
    nume=ui->TB_nume->text();
    varsta=ui->TB_varsta->text();
    experienta=ui->TB_experienta->text();
    idgreutate=ui->TB_idgreutate->text();
    idorganizatie=ui->TB_idorganizatie->text();
}

void AddParticipant::showEvent(QShowEvent *)
{
    ui->TB_id->setText("");
    ui->TB_nume->setText("");
    ui->TB_varsta->setText("");
    ui->TB_experienta->setText("");
    ui->TB_idgreutate->setText("");
    ui->TB_idorganizatie->setText("");
}

void AddParticipant::accept()
{
    bool ok=true,ok2=true,ok3=true,sw=true;
    ui->TB_id->text().toInt(&ok);
    ui->TB_idgreutate->text().toInt(&ok2);
    ui->TB_idorganizatie->text().toInt(&ok3);
    if(!ok)
    {
        sw=false;
        QMessageBox::warning(this,"AddError","Introduceti ID-ul");
    }
    if(!ok2)
    {
        sw=false;
        QMessageBox::warning(this,"AddError","Introduceti ID_Greutate");
    }
    if(!ok3)
    {
        sw=false;
        QMessageBox::warning(this,"AddError","Introduceti ID_Organizatie");
    }
    if(sw==true)
    {
        QMessageBox::information(nullptr,"AddSucced","Succes");
        QDialog::accept();
    }
}

AddParticipant::~AddParticipant()
{
    delete ui;
}
