#ifndef BARAJA_H
#define BARAJA_H


#include <iostream>
#include <list>
#include <vector>
#include <iterator>

#include <Carta.hpp>

using namespace std;

class Baraja
{
    private:
    protected:
        vector<Carta> mazo;
        vector<Carta> sacadas;

    public:
        void imprimirRestantes();
        void imprimirSacadas();
        int cartasRestantes();
        int cartasSacadas();
        int cartasTotales();
        virtual void reset()=0;
        virtual void ordenar()=0;
        friend ostream& operator<<(ostream& o, const Baraja&b);
        
        Carta getCarta();
        Carta robar();
        void addCarta(Carta c);
};

#endif