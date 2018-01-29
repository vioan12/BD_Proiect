#ifndef CLASAMENTGREUTATE_H
#define CLASAMENTGREUTATE_H


class ClasamentGreutate
{
private:
    int id_clasament,id_catgreutate;
    char nume[30];
public:
    ClasamentGreutate(int id_clasament, char nume[], int id_catgreutate);
    int Get_id_clasament();
    int Get_id_catgreutate();
    char* Get_nume();
};

#endif // CLASAMENTGREUTATE_H
