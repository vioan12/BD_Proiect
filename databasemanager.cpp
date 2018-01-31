#include "databasemanager.h"
#include <QMessageBox>
#include<QSqlQuery>
#include <QVariant>

DatabaseManager::DatabaseManager()
{
    DatabaseManager::db = QSqlDatabase::addDatabase("QPSQL");
    DatabaseManager::db.setHostName("tantor.db.elephantsql.com");
    DatabaseManager::db.setDatabaseName("ripevura");
    DatabaseManager::db.setUserName("ripevura");
    DatabaseManager::db.setPassword("5QnCiePpUx3L9t_FE2okYHnB0jdkhJj7");
    loaded = DatabaseManager::db.open();
    if(loaded==0)
    {
        QMessageBox msgBox;
        msgBox.critical(0,"Error","Baza de Date nu a putut fi incarcata!!!");
    }
}

bool DatabaseManager::get_loaded()
{
    return this->loaded;
}

void DatabaseManager::AdaugaParticipant(Participant &participant)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("INSERT INTO participant(id, nume, varsta, experienta, id_greutate, id_organizatie)"
                      "VALUES(:id, :nume, :varsta, :experienta, :id_greutate, :id_organizatie)");
        query.bindValue(":id", participant.Get_id());
        query.bindValue(":nume", participant.Get_nume());
        query.bindValue(":varsta", participant.Get_varsta());
        query.bindValue(":experienta", participant.Get_experienta());
        query.bindValue(":id_greutate", participant.Get_id_greutate());
        query.bindValue(":id_organizatie", participant.Get_id_organizatie());
        query.exec();
    }
}

void DatabaseManager::AdaugaCategorieGreutate(CategorieGreutate &categoriegreutate)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("INSERT INTO categoriegreutate(id, greutate)"
                      "VALUES(:id, :greutate)");
        query.bindValue(":id", categoriegreutate.Get_id());
        query.bindValue(":greutate", categoriegreutate.Get_greutate());
        query.exec();
    }
}

void DatabaseManager::AdaugaOrganizatie(Organizatie &organizatie)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("INSERT INTO organizatie(id, nume, oras)"
                      "VALUES(:id, :nume, :oras)");
        query.bindValue(":id", organizatie.Get_id());
        query.bindValue(":nume", organizatie.Get_nume());
        query.bindValue(":oras", organizatie.Get_oras());
        query.exec();
    }
}

void DatabaseManager::AdaugaClasament(Clasament &clasament)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("INSERT INTO clasament(id, id_organizatie, punctaj )"
                      "VALUES(:id, :id_organizatie, :punctaj)");
        query.bindValue(":id", clasament.Get_id());
        query.bindValue(":id_organizatie", clasament.Get_id_organizatie());
        query.bindValue(":punctaj", clasament.Get_punctaj());
        query.exec();
    }
}
