#include <Tarot.hpp>

Tarot::Tarot(){
    string paloCarta="oros";
        int numeroCarta=1;
        for( int nCarta=0; nCarta<78 ; nCarta++){
            if(nCarta==14){
                paloCarta="copas";
                numeroCarta=1;
            } 
            if(nCarta==28){
                paloCarta="espadas";
                numeroCarta=1;
            } 
            if(nCarta==42){
                paloCarta="bastos";
                numeroCarta=1;
            }
            if(nCarta==56){
                paloCarta="arcanos mayores";
                numeroCarta=0;
            }

            mazo.push_back(Carta("tarot",nCarta,numeroCarta,paloCarta));
            numeroCarta++;
        }
}

void Tarot::reset()
{
    Baraja::reset();

    string paloCarta="oros";
        int numeroCarta=1;
        for( int nCarta=0; nCarta<78 ; nCarta++){
            if(nCarta==14){
                paloCarta="copas";
                numeroCarta=1;
            } 
            if(nCarta==28){
                paloCarta="espadas";
                numeroCarta=1;
            } 
            if(nCarta==42){
                paloCarta="bastos";
                numeroCarta=1;
            }
            if(nCarta==56){
                paloCarta="arcanos mayores";
                numeroCarta=0;
            }

            mazo.push_back(Carta("tarot",nCarta,numeroCarta,paloCarta));
            numeroCarta++;
        }
}