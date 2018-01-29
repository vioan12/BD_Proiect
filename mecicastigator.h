#ifndef MECICASTIGATOR_H
#define MECICASTIGATOR_H


class MeciCastigator
{
private:
    int id_meci,id_castigator;
    char scor[10];
public:
    MeciCastigator(int id_meci, char scor[], int id_castigator);
    int Get_id_meci();
    char* Get_scor();
    int Get_id_castigator();
};

#endif // MECICASTIGATOR_H
