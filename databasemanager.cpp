#include "databasemanager.h"
#include <QMessageBox>

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

