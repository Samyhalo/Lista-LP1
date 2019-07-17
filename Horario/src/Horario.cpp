#include "Horario.h"
#include <iostream>

Horario::Horario()
{
    hora = 0;
    minuto = 0;
    segundo = 0;
    //ctor
}
Horario::Horario(int hora, int minuto, int segundo)
       : Horario()
{
    if(hora<0||hora>23)
    {
        cout<<"Horario invalido."<<endl;
    }else if(minuto<0||minuto>59)
    {
        cout<<"Horario invalido."<<endl;
    }else if(segundo<0||segundo>59)
    {
        cout<<"Horario invalido."<<endl;
    }else
    {
        this->hora = hora;
        this->minuto = minuto;
        this->segundo = segundo;
    }
}

void Horario::setHora(int hora)
{
    this->hora = hora;
}

void Horario::setMinuto(int minuto)
{
    this->minuto = minuto;
}

void Horario::setSegundo(int segundo)
{
    this->segundo = segundo;
}

int Horario::getHora()
{
    return hora;
}

int Horario::getMinuto()
{
    return minuto;
}

int Horario::getSegundo()
{
    return segundo;
}

void Horario::setHorario(int hora, int minuto, int segundo)
{
    setHora(hora);
    setMinuto(minuto);
    setSegundo(segundo);
    if(hora<0||hora>23)
    {
        cout<<"Horario invalido."<<endl;
        setHora(0);
        setMinuto(0);
        setSegundo(0);
    }else if(minuto<0||minuto>59)
    {
        cout<<"Horario invalido."<<endl;
        setHora(0);
        setMinuto(0);
        setSegundo(0);
    }else if(segundo<0||segundo>59)
    {
        cout<<"Horario invalido."<<endl;
        setHora(0);
        setMinuto(0);
        setSegundo(0);
    }
}

void Horario::avancarHorario()
{
    segundo++;
    if(segundo>59)
    {
        setSegundo(0);
        minuto++;
    }
    if(minuto>59)
    {
        setMinuto(0);
        hora++;
    }
    if(hora>23)
    {
        setHora(0);
        setMinuto(0);
        setSegundo(0);
    }
}
