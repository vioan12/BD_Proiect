#include "clasament.h"

Clasament::Clasament(int id, int id_organizatie, int punctaj)
{
    this->id=id;
    this->id_organizatie=id_organizatie;
    this->punctaj=punctaj;
}

int Clasament::Get_id()
{
    return this->id;
}

int Clasament::Get_id_organizatie()
{
    return this->id_organizatie;
}

int Clasament::Get_punctaj()
{
    return this->punctaj;
}
