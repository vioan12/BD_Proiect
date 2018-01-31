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

void DatabaseManager::AdaugaClasamentGreutate(ClasamentGreutate &clasamentgreutate)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("INSERT INTO clasamentgreutate(id_clasament, nume, id_catgreutate )"
                      "VALUES(:id_clasament, :nume, :id_catgreutate)");
        query.bindValue(":id_clasament", clasamentgreutate.Get_id_clasament());
        query.bindValue(":nume", clasamentgreutate.Get_nume());
        query.bindValue(":id_catgreutate", clasamentgreutate.Get_id_catgreutate());
        query.exec();
    }
}

void DatabaseManager::AdaugaEtapa(Etapa &etapa)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("INSERT INTO etapa(id, nume)"
                      "VALUES(:id, :nume)");
        query.bindValue(":id", etapa.Get_id());
        query.bindValue(":nume", etapa.Get_nume());
        query.exec();
    }
}

void DatabaseManager::AdaugaTur(Tur &tur)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("INSERT INTO tur(id, nume, punctaj)"
                      "VALUES(:id, :nume, :punctaj)");
        query.bindValue(":id", tur.Get_id());
        query.bindValue(":nume", tur.Get_nume());
        query.bindValue(":punctaj", tur.Get_punctaj());
        query.exec();
    }
}

void DatabaseManager::AdaugaMeciCastigator(MeciCastigator &mecicastigator)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("INSERT INTO mecicastigator(id_meci, scor, id_castigator)"
                      "VALUES(:id_meci, :scor, :id_castigator)");
        query.bindValue(":id_meci", mecicastigator.Get_id_meci());
        query.bindValue(":scor", mecicastigator.Get_scor());
        query.bindValue(":id_castigator", mecicastigator.Get_id_castigator());
        query.exec();
    }
}

void DatabaseManager::AdaugaMeci(Meci &meci)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("INSERT INTO meci(id, id_participant1, id_participant2, id_etapa, id_tur,  data, ora)"
                      "VALUES(:id, :id_participant1, :id_participant2, :id_etapa, :id_tur,  :data, :ora)");
        query.bindValue(":id", meci.Get_id());
        query.bindValue(":id_participant1", meci.Get_id_participant1());
        query.bindValue(":id_participant2", meci.Get_id_participant2());
        query.bindValue(":id_etapa", meci.Get_id_etapa());
        query.bindValue(":id_tur", meci.Get_id_tur());
        query.bindValue(":data", meci.Get_data());
        query.bindValue(":ora", meci.Get_ora());
        query.exec();
    }
}

void DatabaseManager::StergeParticipant(int id)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("DELETE FROM participant WHERE id = (:id)");
        query.bindValue(":id", id);
        query.exec();
    }
}

void DatabaseManager::StergeCategorieGreutate(int id)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("DELETE FROM categoriegreutate WHERE id = (:id)");
        query.bindValue(":id", id);
        query.exec();
    }
}

void DatabaseManager::StergeOrganizatie(int id)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("DELETE FROM organizatie WHERE id = (:id)");
        query.bindValue(":id", id);
        query.exec();
    }
}

void DatabaseManager::StergeClasament(Clasament &clasament)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("DELETE FROM clasament WHERE id = (:id) AND id_organizatie = (:id_organizatie) AND punctaj = (:punctaj)");
        query.bindValue(":id", clasament.Get_id());
        query.bindValue(":id_organizatie", clasament.Get_id_organizatie());
        query.bindValue(":punctaj", clasament.Get_punctaj());
        query.exec();
    }
}

void DatabaseManager::StergeClasamentGreutate(int id)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("DELETE FROM clasamentgreutate WHERE id = (:id)");
        query.bindValue(":id", id);
        query.exec();
    }
}

void DatabaseManager::StergeEtapa(int id)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("DELETE FROM etapa WHERE id = (:id)");
        query.bindValue(":id", id);
        query.exec();
    }
}

void DatabaseManager::StergeTur(int id)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("DELETE FROM tur WHERE id = (:id)");
        query.bindValue(":id", id);
        query.exec();
    }
}

void DatabaseManager::StergeMeciCastigator(MeciCastigator &mecicastigator)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("DELETE FROM mecicastigator WHERE id_meci = (:id_meci) AND scor = (:scor) AND id_castigator = (:id_castigator)");
        query.bindValue(":id_meci", mecicastigator.Get_id_meci());
        query.bindValue(":scor", mecicastigator.Get_scor());
        query.bindValue(":id_castigator", mecicastigator.Get_id_castigator());
        query.exec();
    }
}

void DatabaseManager::StergeMeci(int id)
{
    if(get_loaded()==true)
    {
        QSqlQuery query(db);
        query.prepare("DELETE FROM meci WHERE id = (:id)");
        query.bindValue(":id", id);
        query.exec();
    }
}
