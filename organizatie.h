#ifndef ORGANIZATIE_H
#define ORGANIZATIE_H

#include<QString>

class Organizatie
{
private:
    int id;
    QString nume,oras;
public:
    Organizatie(int id, QString nume, QString oras);
    int Get_id();
    QString Get_nume();
    QString Get_oras();
};

#endif // ORGANIZATIE_H
