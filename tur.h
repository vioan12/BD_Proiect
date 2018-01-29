#ifndef TUR_H
#define TUR_H


class Tur
{
private:
    int id,punctaj;
    char nume[30];
public:
    Tur(int id, char nume[], int punctaj);
    int Get_id();
    char* Get_nume();
    int Get_punctaj();
};

#endif // TUR_H
