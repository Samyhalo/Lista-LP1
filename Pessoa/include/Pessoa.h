#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

using namespace std;

class Pessoa
{
    public:
        Pessoa();
        Pessoa(string nome);
        Pessoa(int idade, string nome, string telefone);

        void setIdade(int idade);
        void setNome(string nome);
        void setTelefone(string telefone);

        int getIdade();
        string getNome();
        string getTelefone();

    private:
        string nome, telefone;
        int idade;

};

#endif // PESSOA_H
