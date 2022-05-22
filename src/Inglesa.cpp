#include <Inglesa.hpp>

Inglesa::Inglesa() : Francesa()
{
     for(vector<Carta>::iterator it = mazo.begin() ; it != mazo.end() ; it++){
          if(it->getAlias() == "1"){
               it->setAlias("Ace");
               it->setSimbolo("A");
          }
          if(it->getAlias() == "Valet"){
               it->setAlias("Jack");
               it->setSimbolo("J");
          }
          if(it->getAlias() == "Dame"){
               it->setAlias("Queen");
               it->setSimbolo("Q");
          }
          if(it->getAlias() == "Roi"){
               it->setAlias("King");
               it->setSimbolo("K");
          }
    }
}

void Inglesa::reset()
{
     Francesa::reset();
     
     for(vector<Carta>::iterator it = mazo.begin() ; it != mazo.end() ; it++){
          if(it->getAlias() == "1"){
               it->setAlias("Ace");
               it->setSimbolo("A");
          }
          if(it->getAlias() == "Valet"){
               it->setAlias("Jack");
               it->setSimbolo("J");
          }
          if(it->getAlias() == "Dame"){
               it->setAlias("Queen");
               it->setSimbolo("Q");
          }
          if(it->getAlias() == "Roi"){
               it->setAlias("King");
               it->setSimbolo("K");
          }
    }
}