#ifndef CARTA_H
#define CARTA_H

#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Carta{
    protected:
        string tipo;
        int id;
        int numero;
        string palo;
        string alias;
        string simbolo;
    public:
        Carta();
        Carta( string _tipo , int _id , int _numero, string _palo );

        int getId();
        int getNumero();
        string getPalo();
        string getAlias();
        string getSimbolo();

        void setId(int);
        void setNumero(int);
        void setPalo(string);
        void setAlias(string);
        void setSimbolo(string);
};



#endif