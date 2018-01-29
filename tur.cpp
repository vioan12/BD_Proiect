#include "tur.h"
#include"string.h"

Tur::Tur(int id, char nume[], int punctaj)
{
    this->id=id;
    this->punctaj=punctaj;
    strcpy(this->nume,nume);
}

int Tur::Get_id()
{
    return this->id;
}

char* Tur::Get_nume()
{
    return this->nume;
}

int Tur::Get_punctaj()
{
    return this->punctaj;
}
