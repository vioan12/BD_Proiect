#include "addcategoriegreutate.h"
#include "ui_addcategoriegreutate.h"
#include <QMessageBox>

AddCategorieGreutate::AddCategorieGreutate(QWidget *parent) :  QDialog(parent), ui(new Ui::AddCategorieGreutate)
{
    ui->setupUi(this);
}

void AddCategorieGreutate::SetData(const QString &id, const QString &greutate)
{
    ui->TB_id->setText(id);
    ui->TB_greutate->setText(greutate);
}

void AddCategorieGreutate::Data(QString &id, QString &greutate)
{
    id=ui->TB_id->text();
    greutate=ui->TB_greutate->text();
}

void AddCategorieGreutate::showEvent(QShowEvent *)
{
    ui->TB_id->setText("");
    ui->TB_greutate->setText("");
}

void AddCategorieGreutate::accept()
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


AddCategorieGreutate::~AddCategorieGreutate()
{
    delete ui;
}
