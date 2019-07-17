#ifndef HORARIO_H
#define HORARIO_H
#include <iostream>

using namespace std;

class Horario
{
    public:
        Horario();
        Horario(int hora, int minuto, int segundo);

        void setHora(int hora);
        void setMinuto(int minuto);
        void setSegundo(int segundo);

        int getHora();
        int getMinuto();
        int getSegundo();

        void setHorario(int hora, int minuto, int segundo);
        void avancarHorario();

    private:
    int hora, minuto, segundo;
};

#endif // HORARIO_H
