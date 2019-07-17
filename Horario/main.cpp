#include <iostream>
#include "Horario.h"

using namespace std;

int main()
{
    Horario test1 = Horario(23, 59, 59);//para testar metodo avancarHorario em relacao a mudanca de dia
    Horario test2 = Horario(10, 59, 59);//para testar valores invalidos
    Horario test3= Horario(3, 30, 0);//para testar metodo setHorario

    cout<<"hora test1: "<<test1.getHora()<<":"<<test1.getMinuto()<<":"<<test1.getSegundo()<<endl;
    cout<<"hora test2: "<<test2.getHora()<<":"<<test2.getMinuto()<<":"<<test2.getSegundo()<<endl;
    cout<<"hora test3: "<<test3.getHora()<<":"<<test3.getMinuto()<<":"<<test3.getSegundo()<<endl;
    cout<<endl;

    test1.avancarHorario();
    test2.setHorario(26, 24, 24);
    test3.setHorario(4, 20, 30);

    cout<<"hora test1: "<<test1.getHora()<<":"<<test1.getMinuto()<<":"<<test1.getSegundo()<<endl;
    cout<<"hora test2: "<<test2.getHora()<<":"<<test2.getMinuto()<<":"<<test2.getSegundo()<<endl;
    cout<<"hora test3: "<<test3.getHora()<<":"<<test3.getMinuto()<<":"<<test3.getSegundo()<<endl;
    cout<<endl;

    test1.avancarHorario();

    cout<<"hora test1: "<<test1.getHora()<<":"<<test1.getMinuto()<<":"<<test1.getSegundo()<<endl;

    return 0;
}
