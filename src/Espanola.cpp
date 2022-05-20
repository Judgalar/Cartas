#include <Espanola.hpp>


Espanola::Espanola()
{
    string paloCarta="oros";
        int numeroCarta=1;
        for( int nCarta=0; nCarta<48 ; nCarta++){
            if(nCarta==12){
                paloCarta="copas";
                numeroCarta=1;
            } 
            if(nCarta==24){
                paloCarta="espadas";
                numeroCarta=1;
            } 
            if(nCarta==36){
                paloCarta="bastos";
                numeroCarta=1;
            } 

            mazo.push_back(Carta(nCarta,numeroCarta,paloCarta));
            numeroCarta++;
        }
}

Espanola::Espanola(bool comodin)
{
    if (comodin == true) // falta comodines
    {
        string paloCarta="oros";
        int numeroCarta=1;
        for( int nCarta=0; nCarta<50 ; nCarta++){
            if(nCarta==12){
                paloCarta="copas";
                numeroCarta=1;
            } 
            if(nCarta==24){
                paloCarta="espadas";
                numeroCarta=1;
            } 
            if(nCarta==36){
                paloCarta="bastos";
                numeroCarta=1;
            }
            if(nCarta==48){
                paloCarta="comodin";
            }

            mazo.push_back(Carta(nCarta,numeroCarta,paloCarta));
            numeroCarta++;
        }
    }
    else
    {
        string paloCarta="oros";
        int numeroCarta=1;
        for( int nCarta=0; nCarta<48 ; nCarta++){
            if(nCarta==12){
                paloCarta="copas";
                numeroCarta=1;
            } 
            if(nCarta==24){
                paloCarta="espadas";
                numeroCarta=1;
            } 
            if(nCarta==36){
                paloCarta="bastos";
                numeroCarta=1;
            } 

            mazo.push_back(Carta(nCarta,numeroCarta,paloCarta));
            numeroCarta++;
        }
    }
}