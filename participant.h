#ifndef PARTICIPANT_H
#define PARTICIPANT_H


class Participant
{
private:
    int id,id_greutate,id_organizatie;
    char nume[30],varsta[30],experienta[30];
public:
    Participant(int id, char nume[], char varsta[], char experienta[], int id_greutate, int id_organizatie);
    int Get_id();
    int Get_id_greutate();
    int Get_id_organizatie();
    char* Get_nume();
    char* Get_varsta();
    char* Get_experienta();
};

#endif // PARTICIPANT_H
