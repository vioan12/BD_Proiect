#ifndef MECI_H
#define MECI_H


class Meci
{
private:
    int id,id_participant1,id_participant2,id_etapa,id_tur;
    char data[20],ora[10];
public:
    Meci(int id, int id_participant1, int id_participant2, int id_etapa, int id_tur, char data[], char ora[]);
    int Get_id();
    int Get_id_participant1();
    int Get_id_participant2();
    int Get_id_etapa();
    int Get_id_tur();
    char* Get_data();
    char* Get_ora();
};

#endif // MECI_H
