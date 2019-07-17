#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice test1 = Invoice(500, 2, 20.50, "Cabo usb tipo c");
    Invoice test2 = Invoice(120, 4, 49.9, "Fone jbl t110");
    Invoice test3 = Invoice(169, -2, -23, "Item teste valores invalidos");

    cout<<"numero do item: "<<test1.getNumItem()<<" quantidade: "<<test1.getQtdItem()<<" preco: R$"<<test1.getPrecoItem()<<" descricao: "<<test1.getDescItem()<<endl;
    cout<<"numero do item: "<<test2.getNumItem()<<" quantidade: "<<test2.getQtdItem()<<" preco: R$"<<test2.getPrecoItem()<<" descricao: "<<test2.getDescItem()<<endl;
    cout<<"numero do item: "<<test3.getNumItem()<<" quantidade: "<<test3.getQtdItem()<<" preco: R$"<<test3.getPrecoItem()<<" descricao: "<<test3.getDescItem()<<endl;
    cout<<endl;

    test1.setDescItem("Mouse pad fortrek red.");
    test1.setQtdItem(3);

    cout<<"numero do item: "<<test1.getNumItem()<<" quantidade: "<<test1.getQtdItem()<<" preco: R$"<<test1.getPrecoItem()<<" descricao: "<<test1.getDescItem()<<endl;
    cout<<"numero do item: "<<test2.getNumItem()<<" quantidade: "<<test2.getQtdItem()<<" preco: R$"<<test2.getPrecoItem()<<" descricao: "<<test2.getDescItem()<<endl;
    cout<<"numero do item: "<<test3.getNumItem()<<" quantidade: "<<test3.getQtdItem()<<" preco: R$"<<test3.getPrecoItem()<<" descricao: "<<test3.getDescItem()<<endl;
    cout<<endl;

    cout<<"Valor total test1: R$"<<test1.getInvoiceAmount()<<endl;

    return 0;
}
