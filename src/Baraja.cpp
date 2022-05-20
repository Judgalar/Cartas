#include <Baraja.hpp>


void Baraja::imprimirRestantes()
{
    for(vector<Carta>::iterator it = mazo.begin() ; it<mazo.end() ; it++)
    {
        cout<<it->getAlias()<<endl;
    }
}

int Baraja::cartasRestantes()
{
    int numeroCartas=0;
    for(vector<Carta>::iterator it = mazo.begin() ; it!=mazo.end() ; it++)
    {
        numeroCartas++;
    }

    return numeroCartas;
}

void Baraja::reset()
{

}

int Baraja::cartasSacadas()
{
    int cartasSacadas;
    for(vector<Carta>::iterator it = sacadas.begin() ; it!=sacadas.end() ; it++)
    {
        cartasSacadas++;
    }
    return cartasSacadas;
}

int Baraja::cartasTotales()
{
    int totales = cartasRestantes() + cartasSacadas();

    return totales;
}



void Baraja::addCarta(Carta c){
    mazo.push_back(c);
}