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
    if ( tipo == "espanola" ){
        if(numero == 1 ){
            alias = "As";
        } 
        if(numero == 10){
            alias = "Sota";
        } 
        if(numero == 11){
            alias = "Caballero";
        } 
        if(numero == 12){
            alias = "Rey";
        } 
    }

    //Francesas
    if ( tipo == "francesa" ){
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

    //Tarot
    if ( tipo == "tarot" ){
        if( (palo=="oros") || (palo=="copas") || (palo=="espadas") || (palo=="bastos") )
        {
            if(numero == 1 ){
                alias = "As";
            } 
            if(numero == 11){
                alias = "Sota";
                simbolo = "Sota";
            } 
            if(numero == 12){
                alias = "Caballero";
                simbolo = "Caballero";
            } 
            if(numero == 13){
                alias = "Reina";
                simbolo = "Reina";
            }
            if(numero == 14){
                alias = "Rey";
                simbolo = "Rey";
            }
        }

        if(palo=="arcanos mayores")
        {
            if(numero == 0 ){
                alias = "El Loco";
                simbolo = "?";
            } 
            if(numero == 1 ){
                alias = "El Mago";
                simbolo = "I";
            } 
            if(numero == 2 ){
                alias = "La Sacerdotisa";
                simbolo = "II";
            } 
            if(numero == 3 ){
                alias = "La Emperatriz";
                simbolo = "III";
            } 
            if(numero == 4 ){
                alias = "El Emperador";
                simbolo = "IV";
            } 
            if(numero == 5 ){
                alias = "El Hierofante";
                simbolo = "V";
            } 
            if(numero == 6 ){
                alias = "El Enamorado";
                simbolo = "VI";
            } 
            if(numero == 7 ){
                alias = "El Carro";
                simbolo = "VII";
            } 
            if(numero == 8 ){
                alias = "La Justicia";
                simbolo = "VIII";
            } 
            if(numero == 9 ){
                alias = "El Ermitaño";
                simbolo = "IX";
            } 
            if(numero == 10 ){
                alias = "La Rueda de la Fortuna";
                simbolo = "X";
            } 
            if(numero == 11 ){
                alias = "La Fuerza";
                simbolo = "XI";
            } 
            if(numero == 12 ){
                alias = "El Colgado";
                simbolo = "XII";
            } 
            if(numero == 13 ){
                alias = "La Muerte";
                simbolo = "XIII";
            } 
            if(numero == 14 ){
                alias = "La Templanza";
                simbolo = "XIV";
            } 
            if(numero == 15 ){
                alias = "El Diablo";
                simbolo = "XV";
            } 
            if(numero == 16 ){
                alias = "La Torre";
                simbolo = "XVI";
            } 
            if(numero == 17){
                alias = "La Estrella";
                simbolo = "XVII";
            } 
            if(numero == 18 ){
                alias = "La Luna";
                simbolo = "XVIII";
            } 
            if(numero == 19 ){
                alias = "El Sol";
                simbolo = "XIX";
            } 
            if(numero == 20 ){
                alias = "El Juicio";
                simbolo = "XX";
            } 
            if(numero == 21 ){
                alias = "El Mundo";
                simbolo = "XXI";
            } 
        }
        
        
    }


    //comodin
    if( palo=="comodin"){
        numero = 0;
        alias = "comodin";
        simbolo = "#";
    }
}



string Carta::getTipo(){
    return tipo;
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



void Carta::setTipo(string _tipo){
    tipo = _tipo;
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