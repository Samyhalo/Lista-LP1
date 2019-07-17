#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa test1 = Pessoa(19, "Samuel Albuquerque", "996057740");
    Pessoa test2 = Pessoa(19, "Arthur Dionizio", "66657740");
    Pessoa test3 = Pessoa(50, "Fulano de tal", "969690088");


    cout << "test1: " << test1.getNome() <<" / "<< test1.getIdade() <<" / "<< test1.getTelefone() << endl;
    cout << "test2: " << test2.getNome() <<" / "<< test2.getIdade() <<" / "<< test2.getTelefone() << endl;
    cout << "test3: " << test3.getNome() <<" / "<< test3.getIdade() <<" / "<< test3.getTelefone() << endl;
    cout << endl;

    test1.setIdade(25);
    test1.setNome("Sam Laerte");
    test1.setTelefone("99999999");

    test3.setIdade(-2);
    test3.setNome("Sicrano de fulano");
    test3.setTelefone("1111111");

    cout << "test1: " << test1.getNome() <<" / "<< test1.getIdade() <<" / "<< test1.getTelefone() << endl;
    cout << "test2: " << test2.getNome() <<" / "<< test2.getIdade() <<" / "<< test2.getTelefone() << endl;
    cout << "test3: " << test3.getNome() <<" / "<< test3.getIdade() <<" / "<< test3.getTelefone() << endl;

    return 0;
}
