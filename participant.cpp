#include "participant.h"
#include "string.h"

Participant::Participant(int id, char nume[30], char varsta[30], char experienta[30], int id_greutate, int id_organizatie)
{
    this->id=id;
    strcpy(this->nume,nume);
    strcpy(this->varsta,varsta);
    strcpy(this->experienta,experienta);
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

char* Participant::Get_nume()
{
    return this->nume;
}

char* Participant::Get_varsta()
{
    return this->varsta;
}

char* Participant::Get_experienta()
{
    return this->experienta;
}
