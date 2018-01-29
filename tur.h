#ifndef TUR_H
#define TUR_H

#include<QString>

class Tur
{
private:
    int id,punctaj;
    QString nume;
public:
    Tur(int id, QString nume, int punctaj);
    int Get_id();
    QString Get_nume();
    int Get_punctaj();
};

#endif // TUR_H
