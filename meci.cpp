#include "meci.h"

Meci::Meci(int id, int id_participant1, int id_participant2, int id_etapa, int id_tur, char data[], char ora[])
{
    this->id=id;
    this->id_participant1=id_participant1;
    this->id_participant2=id_participant2;
    this->id_etapa=id_etapa;
    this->id_tur=id_tur;
    strcpy(this->data,data);
    strcpy(this->ora,ora);
}

int Meci::Get_id()
{
    return this->id;
}

int Meci::Get_id_participant1()
{
    return this->id_participant1;
}

int Meci::Get_id_participant2()
{
    return this->id_participant2;
}

int Meci::Get_id_etapa()
{
    return this->id_etapa;
}

int Meci::Get_id_tur()
{
    return this->id_tur;
}

char* Meci::Get_data()
{
    return this->data;
}

char* Meci::Get_ora()
{
    return this->ora;
}
