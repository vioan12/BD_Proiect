#ifndef ETAPA_H
#define ETAPA_H

#include<QString>

class Etapa
{
private:
    int id;
    QString nume;
public:
    Etapa(int id, QString nume);
    int Get_id();
    QString Get_nume();
};

#endif // ETAPA_H
