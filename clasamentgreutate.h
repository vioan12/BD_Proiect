#ifndef CLASAMENTGREUTATE_H
#define CLASAMENTGREUTATE_H

#include<QString>

class ClasamentGreutate
{
private:
    int id_clasament,id_catgreutate;
    QString nume;
public:
    ClasamentGreutate(int id_clasament, QString nume, int id_catgreutate);
    int Get_id_clasament();
    int Get_id_catgreutate();
    QString Get_nume();
};

#endif // CLASAMENTGREUTATE_H
