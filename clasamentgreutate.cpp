#include "clasamentgreutate.h"
#include"string.h"

ClasamentGreutate::ClasamentGreutate(int id_clasament, char nume[], int id_catgreutate)
{
    this->id_clasament=id_clasament;
    this->id_catgreutate=id_catgreutate;
    strcpy(this->nume,nume);
}

int ClasamentGreutate::Get_id_catgreutate()
{
    return this->id_catgreutate;
}

int ClasamentGreutate::Get_id_clasament()
{
    return this->id_clasament;
}

char* ClasamentGreutate::Get_nume()
{
    return this->nume;
}
