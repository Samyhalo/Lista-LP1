#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

Pessoa::Pessoa()
{
    nome = "\0";
    idade = 0;
    telefone = "sem numero";
}
Pessoa::Pessoa(string nome)
{
    setNome(nome);
}
Pessoa::Pessoa(int idade, string nome, string telefone)
{
    setIdade(idade);
    setNome(nome);
    setTelefone(telefone);
}

void Pessoa::setIdade(int idade)
{
    if(idade<0)
    {
        cout << "Idade invalida: " << idade << endl;
    }else
    {
        this->idade=idade;
    }
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

void Pessoa::setTelefone(string telefone)
{
    this->telefone = telefone;
}

int Pessoa::getIdade()
{
    return idade;
}

string Pessoa::getNome()
{
    return nome;
}

string Pessoa::getTelefone()
{
    return telefone;
}
