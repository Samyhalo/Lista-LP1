#ifndef DATAM_H
#define DATAM_H
#include <iostream>

using namespace std;

class DataM
{
    public:
        DataM();
        DataM(int dia, int mes, int ano);

        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);

        int getDia();
        int getMes();
        int getAno();

        void getMesExtenso();

        int compara(DataM d1);

        int isBissexto();

    private:
        int dia, mes, ano;
};

#endif // DATAM_H
