#ifndef MECI_H
#define MECI_H

#include<QString>

class Meci
{
private:
    int id,id_participant1,id_participant2,id_etapa,id_tur;
    QString data,ora;
public:
    Meci(int id, int id_participant1, int id_participant2, int id_etapa, int id_tur, QString data, QString ora);
    int Get_id();
    int Get_id_participant1();
    int Get_id_participant2();
    int Get_id_etapa();
    int Get_id_tur();
    QString Get_data();
    QString Get_ora();
};

#endif // MECI_H
