#include <Carta.hpp>

Carta::Carta(){

}

Carta::Carta( string _tipo , int _id , int _numero , string _palo )
{
    tipo = _tipo;
    id  = _id;
    numero = _numero;
    palo = _palo;
    alias = to_string(numero);
    simbolo = to_string(numero);

    //Españolas
    if ( (palo == "oros") || (palo == "copas") || (palo == "bastos") || (palo == "espadas") ){
        if(numero == 1 ){
            alias = "As";
        } 
        if(numero == 10){
            alias = "Sota";
            simbolo = "S";
        } 
        if(numero == 11){
            alias = "Caballo";
            simbolo = "C";
        } 
        if(numero == 12){
            alias = "Rey";
            simbolo = "R";
        } 
    }

    //Francesas
    if ( (palo == "corazones") || (palo == "diamantes") || (palo == "picas") || (palo == "treboles") ){
        if(numero == 11){
            alias = "Valet";
            simbolo = "V";
        } 
        if(numero == 12){
            alias = "Dame";
            simbolo = "D";
        } 
        if(numero == 13){
            alias = "Roi";
            simbolo = "R";
        } 
    }


    //comodin
    if( palo=="comodin"){
        numero = 0;
        alias = "comodin";
        simbolo = "#";
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

string Carta::getSimbolo(){
    return simbolo;
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

void Carta::setSimbolo(string _simbolo){
    simbolo = _simbolo;
}