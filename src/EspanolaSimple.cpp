#include <EspanolaSimple.hpp>

EspanolaSimple::EspanolaSimple(bool _comodin) : Espanola(_comodin)
{
    for( vector<Carta>::iterator it = mazo.begin() ; it != mazo.end() ; it++)
    {
        if(it->getNumero() == 8){
            mazo.erase(it);
        }
        if(it->getNumero() == 9){
            mazo.erase(it);
        }
    }
}