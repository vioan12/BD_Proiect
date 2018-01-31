#include "categoriegreutate.h"

CategorieGreutate::CategorieGreutate(int id, QString greutate)
{
    this->id=id;
    this->greutate=greutate;
}

int CategorieGreutate::Get_id()
{
    return this->id;
}

QString CategorieGreutate::Get_greutate()
{
    return this->greutate;
}

