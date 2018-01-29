#ifndef CATEGORIEGREUTATE_H
#define CATEGORIEGREUTATE_H


class CategorieGreutate
{
private:
    int id;
    char greutate[30];
public:
    CategorieGreutate(int id, char greutate[]);
    int Get_id();
    char* Get_greutate();
};

#endif // CATEGORIEGREUTATE_H
