#include "etapa.h"
#include"string.h"

Etapa::Etapa(int id, char nume[])
{
    this->id=id;
    strcpy(this->nume,nume);
}

int Etapa::Get_id()
{
    return this->id;
}

char* Etapa::Get_nume()
{
    return this->nume;
}
