#include "DataM.h"
#include <iostream>
#include <string>

using namespace std;

DataM::DataM()
{
    dia = 1;
    mes = 1;
    ano = 1;
    //ctor
}

DataM::DataM(int dia, int mes, int ano)
     : DataM()
{
        setDia(dia);
        setMes(mes);
        this->ano=ano;

        if(mes>12)
        {
            cout << "Mes invalido" << mes << endl;
        }

        if(mes==2)
        {
            if(dia>28)
            {
                cout << "Dia invalido" << dia << endl;
            }
        }

        if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
        {
            if(dia>31)
            {
                cout << "Dia invalido" << dia << endl;
            }
        }
        if(mes==4 || mes==6 || mes==9 || mes==11)
        {
            if(dia>31)
            {
                cout << "Dia invalido" << dia << endl;
            }
        }
}

void DataM::setDia(int dia)
{
    if(dia>31 || dia<1)
    {
        cout << "Dia invalido" << dia << endl;
    }else
    {
        this->dia=dia;//dia da classe recebe dia do parametro
    }
}

void DataM::setMes(int mes)
{
    if(mes>12 || mes<1)
    {
        cout << "Mes invalido" << mes << endl;
    }else
    {
        this->mes=mes;//mes da classe recebe mes do parametro
    }
}

void DataM::setAno(int ano)
{
    this->ano=ano;
}

int DataM::getDia()
{
    return dia;
}

int DataM::getMes()
{
    return dia;
}

int DataM::getAno()
{
    return ano;
}

void DataM::getMesExtenso() //done
{
    string mesExtenso = "vazio";

    switch (mes)
    {
        case 1:
            mesExtenso = "Janeiro";
            break;
        case 2:
            mesExtenso = "Fevereiro";
            break;
        case 3:
            mesExtenso = "Marco";
            break;
        case 4:
            mesExtenso = "Abril";
            break;
        case 5:
            mesExtenso = "Maio";
            break;
        case 6:
            mesExtenso = "Junho";
            break;
        case 7:
            mesExtenso = "Julho";
            break;
        case 8:
            mesExtenso = "Agosto";
            break;
        case 9:
            mesExtenso = "Setembro";
            break;
        case 10:
            mesExtenso = "Outubro";
            break;
        case 11:
            mesExtenso = "Novembro";
            break;
        case 12:
            mesExtenso = "Dezembro";
            break;
    }
    cout << "Dia "<<dia<<" de "<<mesExtenso<<" de "<<ano<<endl;
}

int DataM::compara(DataM d1)
{
    int flag=0;

    if((this->dia == d1.dia)&&(this->mes == d1.mes)&&(this->ano == d1.ano))
    {
        return 0;
    }else if((this->dia > d1.dia)&&(this->mes >= d1.mes)&&(this->ano >= d1.ano))
    {
        return 1;
    }else
        return -1;
}

int DataM::isBissexto()
{

}
