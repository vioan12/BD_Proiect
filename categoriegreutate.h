#ifndef CATEGORIEGREUTATE_H
#define CATEGORIEGREUTATE_H

#include <QString>

class CategorieGreutate
{
private:
    int id;
    QString greutate;
public:
    CategorieGreutate(int id, QString greutate);
    int Get_id();
    QString Get_greutate();
};

#endif // CATEGORIEGREUTATE_H
