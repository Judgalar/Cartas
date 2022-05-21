#ifndef CARTA_H
#define CARTA_H

#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Carta{
    protected:
        int id;
        int numero;
        string palo;
        string alias;
    public:
        Carta();
        Carta(int _id , int _numero, string _palo );

        int getId();
        int getNumero();
        string getPalo();
        string getAlias();

        void setId(int);
        void setNumero(int);
        void setPalo(string);
        void setAlias(string);
};



#endif