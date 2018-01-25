#include "addparticipant.h"
#include "ui_addparticipant.h"
#include <QMessageBox>

AddParticipant::AddParticipant(QWidget *parent) : QDialog(parent), ui(new Ui::AddParticipant)
{
    ui->setupUi(this);
}

void AddParticipant::SetData(const QString &id, const QString &nume, const QString &varsta, const QString &experienta, const QString &idgreutate)
{
    ui->TB_id->setText(id);
    ui->TB_nume->setText(nume);
    ui->TB_varsta->setText(varsta);
    ui->TB_experienta->setText(experienta);
    ui->TB_idgreutate->setText(idgreutate);
}

void AddParticipant::Data(QString &id, QString &nume, QString &varsta, QString &experienta, QString &idgreutate)
{
    id=ui->TB_id->text();
    nume=ui->TB_nume->text();
    varsta=ui->TB_varsta->text();
    experienta=ui->TB_experienta->text();
    idgreutate=ui->TB_idgreutate->text();
}

void AddParticipant::showEvent(QShowEvent *)
{
    ui->TB_id->setText("");
    ui->TB_nume->setText("");
    ui->TB_varsta->setText("");
    ui->TB_experienta->setText("");
    ui->TB_idgreutate->setText("");
}

void AddParticipant::accept()
{
    bool ok=true;
    ui->TB_id->text().toInt(&ok);
    if(!ok)
    {
        QMessageBox::warning(this,"AddItemError","Introduceti ID-ul");
    }
    else{
        QMessageBox::information(nullptr,"AddSucced","Succes");
        QDialog::accept();
    }
}

AddParticipant::~AddParticipant()
{
    delete ui;
}
