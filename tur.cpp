#include "tur.h"

Tur::Tur(int id, QString nume, int punctaj)
{
    this->id=id;
    this->punctaj=punctaj;
    this->nume=nume;
}

int Tur::Get_id()
{
    return this->id;
}

QString Tur::Get_nume()
{
    return this->nume;
}

int Tur::Get_punctaj()
{
    return this->punctaj;
}
