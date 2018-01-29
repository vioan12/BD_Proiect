#include "mecicastigator.h"

MeciCastigator::MeciCastigator(int id_meci, QString scor, int id_castigator)
{
    this->id_meci=id_meci;
    this->scor=scor;
    this->id_castigator=id_castigator;
}

int MeciCastigator::Get_id_meci()
{
    return this->id_meci;
}

QString MeciCastigator::Get_scor()
{
    return this->scor;
}

int MeciCastigator::Get_id_castigator()
{
    return this->id_castigator;
}
