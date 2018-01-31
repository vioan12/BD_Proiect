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
    connect(ui->actionDeleteParticipant,&QAction::triggered,this,&MainWindow::OnDeleteParticipant);
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
        Participanti.append(participant);
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
        Organizatii.append(organizatie);
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
        CategoriiGreutate.append(categoriegreutate);
    }

}

void MainWindow::OnDeleteParticipant()
{
    QList<QTableWidgetItem*> selectionRangeList = this->ui->TableParticipant->selectedItems();
    int rowIndex;
    QString id,nume,varsta,experienta,idgreutate,idorganizatie;
    QListIterator<QTableWidgetItem*> selectionRangeListIter(selectionRangeList);
    while(selectionRangeListIter.hasNext())
    {
        rowIndex = ((int)((QTableWidgetItem*)selectionRangeListIter.next())->row());
        id=this->ui->TableParticipant->item(rowIndex,0)->text();
        nume=this->ui->TableParticipant->item(rowIndex,1)->text();
        varsta=this->ui->TableParticipant->item(rowIndex,2)->text();
        experienta=this->ui->TableParticipant->item(rowIndex,3)->text();
        idgreutate=this->ui->TableParticipant->item(rowIndex,4)->text();
        idorganizatie=this->ui->TableParticipant->item(rowIndex,5)->text();
        Participant participant(id.toInt(),nume,varsta,experienta,idgreutate.toInt(),idorganizatie.toInt());
        /*
        for(int i=0;i<Participanti.length(); i++)
        {
            if((int)participant.Get_id() == (int)Participanti.at(i).Get_id())
            {
                Participanti.removeAt(i);
            }
        }
        */
        this->ui->TableParticipant->removeRow(rowIndex);
    }
}

void MainWindow::OnDeleteOrganizatie()
{
    QList<QTableWidgetItem*> selectionRangeList = this->ui->TableOrganizatie->selectedItems();
    int rowIndex;
    QString id,nume,oras;
    QListIterator<QTableWidgetItem*> selectionRangeListIter(selectionRangeList);
    while(selectionRangeListIter.hasNext())
    {
        rowIndex = ((int)((QTableWidgetItem*)selectionRangeListIter.next())->row());
        id=this->ui->TableParticipant->item(rowIndex,0)->text();
        nume=this->ui->TableParticipant->item(rowIndex,1)->text();
        oras=this->ui->TableParticipant->item(rowIndex,2)->text();
        Organizatie organizatie(id.toInt(),nume,oras);

        this->ui->TableOrganizatie->removeRow(rowIndex);
    }
}

void MainWindow::OnDeleteCategorieGreutate()
{
    QList<QTableWidgetItem*> selectionRangeList = this->ui->TableCategorieGreutate->selectedItems();
    int rowIndex;
    QString id,greutate;
    QListIterator<QTableWidgetItem*> selectionRangeListIter(selectionRangeList);
    while(selectionRangeListIter.hasNext())
    {
        rowIndex = ((int)((QTableWidgetItem*)selectionRangeListIter.next())->row());
        id=this->ui->TableParticipant->item(rowIndex,0)->text();
        greutate=this->ui->TableParticipant->item(rowIndex,1)->text();
        CategorieGreutate categoriegreutate(id.toInt(),greutate);

        this->ui->TableCategorieGreutate->removeRow(rowIndex);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
