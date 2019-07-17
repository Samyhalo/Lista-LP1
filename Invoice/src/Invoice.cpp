#include "Invoice.h"
#include <iostream>
#include <string>

Invoice::Invoice()
{
    numItem = 0;
    qtdItem = 0;
    precoItem = 0;
    descItem = "descricao vazia.";
    //ctor
}

Invoice::Invoice(int numItem, int qtdItem, float precoItem, string descItem)
       : Invoice()
{
    setNumItem(numItem);
    setQtdItem(qtdItem);
    setPrecoItem(precoItem);
    setDescItem(descItem);
}

void Invoice::setNumItem(int numItem)
{
    this->numItem = numItem;
}

void Invoice::setQtdItem(int qtdItem)
{
    if(qtdItem<0)
    {
        cout<<"quantidade invalida"<<endl;
    }else
    {
        this->qtdItem = qtdItem;
    }
}

void Invoice::setPrecoItem(float precoItem)
{
    if(precoItem<0)
    {
        cout<<"preco invalido"<<endl;
    }else
    {
        this->precoItem = precoItem;
    }
}

void Invoice::setDescItem(string descItem)
{
    this->descItem = descItem;
}

int Invoice::getNumItem()
{
    return numItem;
}

int Invoice::getQtdItem()
{
    return qtdItem;
}

float Invoice::getPrecoItem()
{
    return precoItem;
}

string Invoice::getDescItem()
{
    return descItem;
}

double Invoice::getInvoiceAmount()
{
    return qtdItem*precoItem;
}
