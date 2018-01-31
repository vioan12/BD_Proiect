#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QDialog>
#include"participant.h"
#include"categoriegreutate.h"
#include"organizatie.h"
#include"clasament.h"

class DatabaseManager
{
private:
    QSqlDatabase db;
    bool loaded;
public:
    DatabaseManager();
    void AdaugaParticipant(Participant &participant);
    void AdaugaCategorieGreutate(CategorieGreutate &categoriegreutate);
    void AdaugaOrganizatie(Organizatie &organizatie);
    void AdaugaClasament(Clasament &clasament);
    bool get_loaded();
};

#endif // DATABASEMANAGER_H
