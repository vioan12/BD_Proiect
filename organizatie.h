#ifndef ORGANIZATIE_H
#define ORGANIZATIE_H


class Organizatie
{
private:
    int id;
    char nume[30],oras[30];
public:
    Organizatie(int id, char nume[], char oras[]);
    int Get_id();
    char* Get_nume();
    char* Get_oras();
};

#endif // ORGANIZATIE_H
