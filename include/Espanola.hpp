#ifndef ESPANOLA_H
#define ESPANOLA_H

#include <Baraja.hpp>

class Espanola : public Baraja{
    protected:
        bool comodin;
    public:
        Espanola(bool _comodin);
        void reset();
        void ordenar();
};


#endif