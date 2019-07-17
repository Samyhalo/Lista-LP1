#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>

using namespace std;

class Invoice
{
    public:
        Invoice();
        Invoice(int numItem, int qtdItem, float precoItem, string descItem);

        void setNumItem(int numItem);
        void setQtdItem(int qtdItem);
        void setPrecoItem(float precoItem);
        void setDescItem(string descItem);

        int getNumItem();
        int getQtdItem();
        float getPrecoItem();
        string getDescItem();

        double getInvoiceAmount();

    private:
        int numItem, qtdItem;
        float precoItem;
        string descItem;

};

#endif // INVOICE_H
