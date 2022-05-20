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
        int cartasRestantes();
        int cartasSacadas();
        int cartasTotales();
      //  void reset();
       // virtual void ordenar()=0;
       // friend ostream& operator<<(ostream& o, const Baraja&b);
        
       // Carta getCarta();
       // Carta robar();
       void addCarta(Carta c);
};

#endif