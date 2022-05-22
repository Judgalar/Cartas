#include <Francesa.hpp>

Francesa::Francesa()
{
    string paloCarta="corazones";
    int numeroCarta=1;
    for( int nCarta=0; nCarta<52 ; nCarta++){
        if(nCarta==13){
            paloCarta="diamantes";
            numeroCarta=1;
        } 
        if(nCarta==26){
            paloCarta="picas";
            numeroCarta=1;
        } 
        if(nCarta==39){
            paloCarta="treboles";
            numeroCarta=1;
        } 

        mazo.push_back(Carta("francesa",nCarta,numeroCarta,paloCarta));
        numeroCarta++;
    }
}

void Francesa::reset()
{
    Baraja::reset();
    
    string paloCarta="corazones";
    int numeroCarta=1;
    for( int nCarta=0; nCarta<52 ; nCarta++){
        if(nCarta==13){
            paloCarta="diamantes";
            numeroCarta=1;
        } 
        if(nCarta==26){
            paloCarta="picas";
            numeroCarta=1;
        } 
        if(nCarta==39){
            paloCarta="treboles";
            numeroCarta=1;
        } 

        mazo.push_back(Carta("francesa",nCarta,numeroCarta,paloCarta));
        numeroCarta++;
    }
}