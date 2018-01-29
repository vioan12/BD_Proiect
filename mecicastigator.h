#ifndef MECICASTIGATOR_H
#define MECICASTIGATOR_H

#include<QString>

class MeciCastigator
{
private:
    int id_meci,id_castigator;
    QString scor;
public:
    MeciCastigator(int id_meci, QString scor, int id_castigator);
    int Get_id_meci();
    QString Get_scor();
    int Get_id_castigator();
};

#endif // MECICASTIGATOR_H
