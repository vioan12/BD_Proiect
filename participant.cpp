#include "participant.h"

Participant::Participant(int id, QString nume, QString varsta, QString experienta, int id_greutate, int id_organizatie)
{
    this->id=id;
    this->nume=nume;
    this->varsta=varsta;
    this->experienta=experienta;
    this->id_greutate=id_greutate;
    this->id_organizatie=id_organizatie;
}

int Participant::Get_id()
{
    return this->id;
}

int Participant::Get_id_greutate()
{
    return this->id_greutate;
}

int Participant::Get_id_organizatie()
{
    return this->id_organizatie;
}

QString Participant::Get_nume()
{
    return this->nume;
}

QString Participant::Get_varsta()
{
    return this->varsta;
}

QString Participant::Get_experienta()
{
    return this->experienta;
}
