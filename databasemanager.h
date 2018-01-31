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

    void StergeParticipant(int id);
    void StergeCategorieGreutate(int id);
    void StergeOrganizatie(int id);
    void StergeClasament(Clasament &clasament);
    void StergeClasamentGreutate(int id);
    void StergeEtapa(int id);
    void StergeTur(int id);
    void StergeMeciCastigator(MeciCastigator &mecicastigator);
    void StergeMeci(int id);

    bool get_loaded();
};

#endif // DATABASEMANAGER_H
