#include "categoriegreutate.h"
#include"string.h"

CategorieGreutate::CategorieGreutate(int id, char greutate[])
{
    this->id=id;
    strcpy(this->greutate,greutate);
}

int CategorieGreutate::Get_id()
{
    this->id;
}

char* CategorieGreutate::Get_greutate()
{
    this->greutate;
}

