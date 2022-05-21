#include <Carta.hpp>

Carta::Carta(){

}

Carta::Carta( int _id , int _numero , string _palo )
{
    id  = _id;
    numero = _numero;
    palo = _palo;
    alias = std::to_string(numero) + " de " + palo;

    if ( palo == "oros" ){
        if(numero == 1 ) alias = "As de oros";
        if(numero == 10) alias = "Sota de oros";
        if(numero == 11) alias = "Caballo de oros";
        if(numero == 12) alias = "Rey de oros";
    }
    if ( palo == "copas" ){
        if(numero == 1 ) alias = "As de copas";
        if(numero == 10) alias = "Sota de copas";
        if(numero == 11) alias = "Caballo de copas";
        if(numero == 12) alias = "Rey de copas";
    }
    if ( palo == "bastos" ){
        if(numero == 1 ) alias = "As de bastos";
        if(numero == 10) alias = "Sota de bastos";
        if(numero == 11) alias = "Caballo de bastos";
        if(numero == 12) alias = "Rey de bastos";
    }
    if ( palo == "espadas" ){
        if(numero == 1 ) alias = "As de espadas";
        if(numero == 10) alias = "Sota de espadas";
        if(numero == 11) alias = "Caballo de espadas";
        if(numero == 12) alias = "Rey de espadas";
    }
    if( palo=="comodin"){
        numero = 0;
        alias = "comodin";
    }


}

int Carta::getId(){
    return id;
}

int Carta::getNumero(){
    return numero;
}

string Carta::getPalo(){
    return palo;
}

string Carta::getAlias(){
    return alias;
}

void Carta::setId(int _id){
    id = _id;
}

void Carta::setNumero(int _numero){
    numero = _numero;
}

void Carta::setPalo(string _palo){
    palo = _palo;
}

void Carta::setAlias(string _alias){
    alias = _alias;
}