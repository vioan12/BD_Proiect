#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include<QString>

class Participant
{
private:
    int id,id_greutate,id_organizatie;
    QString nume,varsta,experienta;
public:
    Participant(int id, QString nume, QString varsta, QString experienta, int id_greutate, int id_organizatie);
    int Get_id();
    int Get_id_greutate();
    int Get_id_organizatie();
    QString Get_nume();
    QString Get_varsta();
    QString Get_experienta();
};

#endif // PARTICIPANT_H
