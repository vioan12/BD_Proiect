#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QDialog>
#include"participant.h"
#include"categoriegreutate.h"
#include"organizatie.h"
#include"clasament.h"
#include"clasamentgreutate.h"
#include"etapa.h"
#include"tur.h"
#include"mecicastigator.h"
#include"meci.h"

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
    void AdaugaClasamentGreutate(ClasamentGreutate &clasamentgreutate);
    void AdaugaEtapa(Etapa &etapa);
    void AdaugaTur(Tur &tur);
    void AdaugaMeciCastigator(MeciCastigator &mecicastigator);
    void AdaugaMeci(Meci &meci);
    bool get_loaded();
};

#endif // DATABASEMANAGER_H
