#include "clasamentgreutate.h"

ClasamentGreutate::ClasamentGreutate(int id_clasament, QString nume, int id_catgreutate)
{
    this->id_clasament=id_clasament;
    this->id_catgreutate=id_catgreutate;
    this->nume=nume;
}

int ClasamentGreutate::Get_id_catgreutate()
{
    return this->id_catgreutate;
}

int ClasamentGreutate::Get_id_clasament()
{
    return this->id_clasament;
}

QString ClasamentGreutate::Get_nume()
{
    return this->nume;
}
