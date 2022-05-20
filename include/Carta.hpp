#ifndef CARTA_H
#define CARTA_H

#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Carta{
    protected:
        int id;
        string palo;
        string alias;
    public:
        Carta(int _id , string _palo );
        string getAlias();

};



#endif