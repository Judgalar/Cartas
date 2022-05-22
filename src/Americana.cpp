#include <Americana.hpp>

Americana::Americana() : Inglesa()
{
    mazo.push_back( Carta("francesa",52,0,"comodin") );
    mazo.push_back( Carta("francesa",53,0,"comodin") );
    mazo[52].setAlias("Joker");
    mazo[53].setAlias("Joker");

}

void Americana::reset()
{
    Inglesa::reset();

    mazo.push_back( Carta("francesa",52,0,"comodin") );
    mazo.push_back( Carta("francesa",53,0,"comodin") );
    mazo[52].setAlias("Joker");
    mazo[53].setAlias("Joker");
}