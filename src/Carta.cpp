#include <Carta.hpp>

Carta::Carta( int _id , string _palo )
{
    id  = _id;
    palo = _palo;
    alias = std::to_string(id) + " de " + palo;

    if ( palo == "oros" ){
        if(id == 10) alias = "Sota de oros";
        if(id == 11) alias = "Caballo de oros";
        if(id == 12) alias = "Rey de oros";
    }
    if ( palo == "copas" ){
        if(id == 10) alias = "Sota de copas";
        if(id == 11) alias = "Caballo de copas";
        if(id == 12) alias = "Rey de copas";
    }
    if ( palo == "bastos" ){
        if(id == 10) alias = "Sota de bastos";
        if(id == 11) alias = "Caballo de bastos";
        if(id == 12) alias = "Rey de bastos";
    }
    if ( palo == "espadas" ){
        if(id == 10) alias = "Sota de espadas";
        if(id == 11) alias = "Caballo de espadas";
        if(id == 12) alias = "Rey de espadas";
    }


}

string Carta::getAlias(){
    return alias;
}