#include <Baraja.hpp>
#include <stdlib.h>
#include <time.h>


void Baraja::imprimirRestantes()
{
    for(vector<Carta>::iterator it = mazo.begin() ; it<mazo.end() ; it++)
    {
        cout<<it->getAlias()<<endl;
    }
}

void Baraja::imprimirSacadas()
{
    for(vector<Carta>::iterator it = sacadas.begin() ; it<sacadas.end() ; it++)
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

void Baraja::reset()
{
    mazo.clear();
    sacadas.clear();
}


Carta Baraja::getCarta()
{   
    int cantidad=0;
    int aleatorio=0;

    for(vector<Carta>::iterator it = mazo.begin() ; it != mazo.end() ; it++){
        cantidad++;
    }

    srand(time(NULL)); 
    aleatorio = rand() % cantidad ;

    int i=0;
    Carta c;
    for(auto it = mazo.begin() ; it != mazo.end() ; it++)
    {
        if(i == aleatorio){
            cout<<it->getAlias()<<endl;
            c.setId( it->getId() );
            c.setNumero ( it->getNumero() );
            c.setPalo ( it->getPalo() );
            c.setAlias ( it->getAlias() );
            
            it = mazo.erase(it);

            break;
        }


        i++;
    }


    sacadas.push_back(c);

    return c;
}

Carta Baraja::robar(){
    return getCarta();
}

ostream& operator<<(ostream& o,  Baraja&b){
    o << b.cartasTotales()<<"estas son las cartas totales: "<<endl;
    o << b.cartasSacadas()<<"estas son las cartas sacadas: "<<endl;
    o << b.cartasRestantes()<<"estas son las cartas restantes: "<<endl;
    return o;
}

void Baraja::addCarta(Carta c){
    mazo.push_back(c);
}

