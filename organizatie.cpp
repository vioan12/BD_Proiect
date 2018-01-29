#include "organizatie.h"
#include"string.h"

Organizatie::Organizatie(int id, char nume[], char oras[])
{
    this->id=id;
    strcpy(this->nume,nume);
    strcpy(this->oras,oras);
}

int Organizatie::Get_id()
{
    return this->id;
}

char* Organizatie::Get_nume()
{
    return this->nume;
}

char* Organizatie::Get_oras()
{
    return this->oras;
}
