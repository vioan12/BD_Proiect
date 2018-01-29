#include "etapa.h"

Etapa::Etapa(int id, QString nume)
{
    this->id=id;
    this->nume=nume;
}

int Etapa::Get_id()
{
    return this->id;
}

QString Etapa::Get_nume()
{
    return this->nume;
}
