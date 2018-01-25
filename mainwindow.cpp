#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addparticipant.h"

MainWindow::MainWindow(QWidget *parent) :  QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mAddParticipant=new AddParticipant(this);
    connect(ui->actionAdd,&QAction::triggered,this,&MainWindow::OnAddParticipant);
    /*
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("tantor.db.elephantsql.com");
    db.setDatabaseName("ripevura");
    db.setUserName("ripevura");
    db.setPassword("5QnCiePpUx3L9t_FE2okYHnB0jdkhJj7");
    bool ok = db.open();
    */

}

void MainWindow::OnAddParticipant()
{
    int ok=mAddParticipant->exec();
    if(ok==QDialog::Accepted)
    {
        QString id,nume,varsta,experienta,idgreutate;
        mAddParticipant->Data(id,nume,varsta,experienta,idgreutate);
        int count=ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(count);
        ui->tableWidget->setItem(count,0,new QTableWidgetItem(id));
        ui->tableWidget->setItem(count,1,new QTableWidgetItem(nume));
        ui->tableWidget->setItem(count,2,new QTableWidgetItem(varsta));
        ui->tableWidget->setItem(count,3,new QTableWidgetItem(experienta));
        ui->tableWidget->setItem(count,4,new QTableWidgetItem(idgreutate));
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
