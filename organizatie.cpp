#include "organizatie.h"

Organizatie::Organizatie(int id, QString nume, QString oras)
{
    this->id=id;
    this->nume=nume;
    this->oras=oras;
}

int Organizatie::Get_id()
{
    return this->id;
}

QString Organizatie::Get_nume()
{
    return this->nume;
}

QString Organizatie::Get_oras()
{
    return this->oras;
}
