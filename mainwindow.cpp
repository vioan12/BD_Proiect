#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addparticipant.h"
#include "addorganizatie.h"
#include "addcategoriegreutate.h"

MainWindow::MainWindow(QWidget *parent) :  QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mAddParticipant=new AddParticipant(this);
    mAddOrganizatie=new AddOrganizatie(this);
    mAddCategorieGreutate=new AddCategorieGreutate(this);
    connect(ui->actionAddParticipant,&QAction::triggered,this,&MainWindow::OnAddParticipant);
    connect(ui->actionAddOrganizatie,&QAction::triggered,this,&MainWindow::OnAddOrganizatie);
    connect(ui->actionAddCategorieGreutate,&QAction::triggered,this,&MainWindow::OnAddCategorieGreutate);
}

void MainWindow::OnAddParticipant()
{
    int ok=mAddParticipant->exec();
    if(ok==QDialog::Accepted)
    {
        QString id,nume,varsta,experienta,idgreutate,idorganizatie;
        mAddParticipant->Data(id,nume,varsta,experienta,idgreutate,idorganizatie);
        int count=ui->TableParticipant->rowCount();
        ui->TableParticipant->insertRow(count);
        ui->TableParticipant->setItem(count,0,new QTableWidgetItem(id));
        ui->TableParticipant->setItem(count,1,new QTableWidgetItem(nume));
        ui->TableParticipant->setItem(count,2,new QTableWidgetItem(varsta));
        ui->TableParticipant->setItem(count,3,new QTableWidgetItem(experienta));
        ui->TableParticipant->setItem(count,4,new QTableWidgetItem(idgreutate));
        ui->TableParticipant->setItem(count,5,new QTableWidgetItem(idorganizatie));
        Participant participant(id.toInt(),nume,varsta,experienta,idgreutate.toInt(),idorganizatie.toInt());
        DBM.AdaugaParticipant(participant);
    }

}

void MainWindow::OnAddOrganizatie()
{
    int ok=mAddOrganizatie->exec();
    if(ok==QDialog::Accepted)
    {
        QString id,nume,oras;
        mAddOrganizatie->Data(id,nume,oras);
        int count=ui->TableOrganizatie->rowCount();
        ui->TableOrganizatie->insertRow(count);
        ui->TableOrganizatie->setItem(count,0,new QTableWidgetItem(id));
        ui->TableOrganizatie->setItem(count,1,new QTableWidgetItem(nume));
        ui->TableOrganizatie->setItem(count,2,new QTableWidgetItem(oras));
        Organizatie organizatie(id.toInt(),nume,oras);
        DBM.AdaugaOrganizatie(organizatie);
    }

}

void MainWindow::OnAddCategorieGreutate()
{
    int ok=mAddCategorieGreutate->exec();
    if(ok==QDialog::Accepted)
    {
        QString id,greutate;
        mAddCategorieGreutate->Data(id,greutate);
        int count=ui->TableCategorieGreutate->rowCount();
        ui->TableCategorieGreutate->insertRow(count);
        ui->TableCategorieGreutate->setItem(count,0,new QTableWidgetItem(id));
        ui->TableCategorieGreutate->setItem(count,1,new QTableWidgetItem(greutate));
        CategorieGreutate categoriegreutate(id.toInt(),greutate);
        DBM.AdaugaCategorieGreutate(categoriegreutate);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
