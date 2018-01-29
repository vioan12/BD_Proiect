#ifndef ETAPA_H
#define ETAPA_H


class Etapa
{
private:
    int id;
    char nume[30];
public:
    Etapa(int id, char nume[]);
    int Get_id();
    char* Get_nume();
};

#endif // ETAPA_H
