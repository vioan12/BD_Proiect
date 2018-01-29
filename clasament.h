#ifndef CLASAMENT_H
#define CLASAMENT_H


class Clasament
{
private:
    int id,id_organizatie,punctaj;
public:
    Clasament(int id, int id_organizatie, int punctaj);
    int Get_id();
    int Get_id_organizatie();
    int Get_punctaj();
};

#endif // CLASAMENT_H
