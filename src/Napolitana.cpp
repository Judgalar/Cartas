#include <Napolitana.hpp>

Napolitana::Napolitana(bool _comodin) : EspanolaSimple(_comodin)
{
    for( vector<Carta>::iterator it = mazo.begin() ; it != mazo.end() ; it++)
    {
        if(it->getNumero() == 10){
            it->setNumero(8);
        }
        if(it->getNumero() == 11){
            it->setNumero(9);
        }
        if(it->getNumero() == 12){
            it->setNumero(10);
        }
    }
}