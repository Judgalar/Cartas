#include <Carta.hpp>
#include <Espanola.hpp>
#include <EspanolaSimple.hpp>
#include <Napolitana.hpp>
#include <Francesa.hpp>
#include <Inglesa.hpp>
#include <Americana.hpp>
#include <Tarot.hpp>


using namespace std;



void ejercicioExamen()
{
    Baraja *a;
    Baraja *b;
    Baraja *c;

    a = new Espanola(false);
    b = new Francesa;
    c = new Tarot;

    bool aVacio=false;
    bool bVacio=false;
    bool cVacio=false;

    while( (aVacio==false) || (bVacio==false) || (cVacio==false) ){
        cout<<"mazo A roba ";
        a->getCarta();
        cout<<endl;

        cout<<"mazo B roba ";
        b->getCarta();
        cout<<endl;

        cout<<"mazo C roba ";
        c->getCarta();
        cout<<endl;

        if( a->cartasRestantes() == 0 ){
            aVacio = true;
            break;
        } 
        if( b->cartasRestantes() == 0 ){
            bVacio = true;
            break;
        } 
        if( c->cartasRestantes() == 0 ){
            cVacio = true;
            break;
        } 
    }

    if(aVacio==true) cout<<"Mazo A vacio"<<endl<<endl;
    if(bVacio==true) cout<<"Mazo B vacio"<<endl<<endl;
    if(cVacio==true) cout<<"Mazo C vacio"<<endl<<endl;

    cout<<"<Cartas Restantes>"<<endl<<endl;

    if(aVacio==false){
        a->ordenar();
        cout << "-Mazo A-" <<endl;
        cout << "Cartas restantes: " << a->cartasRestantes() << endl;
        cout << "-Cartas-"<<endl;
        a->imprimirRestantes();
    }
    if(bVacio==false){
        b->ordenar();
        cout << "-Mazo B-" <<endl;
        cout << "Cartas restantes: " << b->cartasRestantes() << endl;
        cout << "-Cartas-"<<endl;
        b->imprimirRestantes();
    }
    if(cVacio==false){
        c->ordenar();
        cout << "-Mazo C-" <<endl;
        cout << "Cartas restantes: " << c->cartasRestantes() << endl;
        cout << "-Cartas-"<<endl;
        c->imprimirRestantes();
    }

}



bool colocarCarta( vector<Carta> &mano , vector<Carta> &oros , vector<Carta> &copas , vector<Carta> &espadas , vector<Carta> &bastos , int &vueltas ){

    bool resul=false;
    vector<Carta>::iterator jugable = mano.end()-1;

    if( jugable->getPalo() == "oros"){
        if(jugable->getNumero() == 1)
        {
            Carta c;
            c.setTipo( jugable->getTipo() );
            c.setId( jugable->getId() );
            c.setNumero ( jugable->getNumero() );
            c.setPalo ( jugable->getPalo() );
            c.setAlias ( jugable->getAlias() );
            c.setSimbolo ( jugable->getSimbolo() );

            mano.erase(jugable);
            oros.push_back(c);
            resul=true;
            vueltas=0;
        }
        else{
            vector<Carta>::iterator ultima = oros.end()-1;
            if( ultima+1 != oros.begin() )
            {
                if( jugable->getNumero() == ultima->getNumero() + 1 ){
                    Carta c;
                    c.setTipo( jugable->getTipo() );
                    c.setId( jugable->getId() );
                    c.setNumero ( jugable->getNumero() );
                    c.setPalo ( jugable->getPalo() );
                    c.setAlias ( jugable->getAlias() );
                    c.setSimbolo ( jugable->getSimbolo() );

                    mano.erase(jugable);
                    oros.push_back(c);
                    resul=true;
                    vueltas=0;
                }
            }
            
        }  
    }

    if( jugable->getPalo() == "copas"){
        if(jugable->getNumero() == 1)
        {
            Carta c;
            c.setTipo( jugable->getTipo() );
            c.setId( jugable->getId() );
            c.setNumero ( jugable->getNumero() );
            c.setPalo ( jugable->getPalo() );
            c.setAlias ( jugable->getAlias() );
            c.setSimbolo ( jugable->getSimbolo() );

            mano.erase(jugable);
            copas.push_back(c);
            resul=true;
            vueltas=0;
        }
        else{
            vector<Carta>::iterator ultima = copas.end()-1;
            if( ultima+1 != copas.begin() )
            {
                if( jugable->getNumero() == ultima->getNumero() + 1 ){
                    Carta c;
                    c.setTipo( jugable->getTipo() );
                    c.setId( jugable->getId() );
                    c.setNumero ( jugable->getNumero() );
                    c.setPalo ( jugable->getPalo() );
                    c.setAlias ( jugable->getAlias() );
                    c.setSimbolo ( jugable->getSimbolo() );

                    mano.erase(jugable);
                    copas.push_back(c);
                    resul=true;
                    vueltas=0;
                }
            }
            
        }  
    }

    if( jugable->getPalo() == "espadas"){
        if(jugable->getNumero() == 1)
        {
            Carta c;
            c.setTipo( jugable->getTipo() );
            c.setId( jugable->getId() );
            c.setNumero ( jugable->getNumero() );
            c.setPalo ( jugable->getPalo() );
            c.setAlias ( jugable->getAlias() );
            c.setSimbolo ( jugable->getSimbolo() );

            mano.erase(jugable);
            espadas.push_back(c);
            resul=true;
            vueltas=0;
        }
        else{
            vector<Carta>::iterator ultima = espadas.end()-1;
            if( ultima+1 != espadas.begin() )
            {
                if( jugable->getNumero() == ultima->getNumero() + 1 ){
                    Carta c;
                    c.setTipo( jugable->getTipo() );
                    c.setId( jugable->getId() );
                    c.setNumero ( jugable->getNumero() );
                    c.setPalo ( jugable->getPalo() );
                    c.setAlias ( jugable->getAlias() );
                    c.setSimbolo ( jugable->getSimbolo() );

                    mano.erase(jugable);
                    espadas.push_back(c);
                    resul=true;
                    vueltas=0;
                }
            }
            
        }  
    }

    if( jugable->getPalo() == "bastos"){
        if(jugable->getNumero() == 1)
        {
            Carta c;
            c.setTipo( jugable->getTipo() );
            c.setId( jugable->getId() );
            c.setNumero ( jugable->getNumero() );
            c.setPalo ( jugable->getPalo() );
            c.setAlias ( jugable->getAlias() );
            c.setSimbolo ( jugable->getSimbolo() );

            mano.erase(jugable);
            bastos.push_back(c);
            resul=true;
            vueltas=0;
        }
        else{
            vector<Carta>::iterator ultima = bastos.end()-1;
            if( ultima+1 != bastos.begin() )
            {
                if( jugable->getNumero() == ultima->getNumero() + 1 ){
                    Carta c;
                    c.setTipo( jugable->getTipo() );
                    c.setId( jugable->getId() );
                    c.setNumero ( jugable->getNumero() );
                    c.setPalo ( jugable->getPalo() );
                    c.setAlias ( jugable->getAlias() );
                    c.setSimbolo ( jugable->getSimbolo() );

                    mano.erase(jugable);
                    bastos.push_back(c);
                    resul=true;
                    vueltas=0;
                }
            }
            
        }  
    }
    return resul;
}

void vuelta( vector<Carta> &mano , Espanola &baraja )
{
    int cartasRestantes = 0;
    for( auto it = mano.begin() ; it != mano.end() ; it++ ){
        cartasRestantes++;
    }
    while(cartasRestantes != 0){
        Carta c;
        vector<Carta>::iterator it = mano.end()-1;
        c.setTipo( it->getTipo() );
        c.setId( it->getId() );
        c.setNumero ( it->getNumero() );
        c.setPalo ( it->getPalo() );
        c.setAlias ( it->getAlias() );
        c.setSimbolo ( it->getSimbolo() );
        
        mano.erase(it);
        baraja.addCarta(c);

        cartasRestantes = 0;
        for( auto it = mano.begin() ; it != mano.end() ; it++ ){
            cartasRestantes++;
        }
    }
    
}

void jugar( Espanola &baraja , vector<Carta> &mano , vector<Carta> &oros , vector<Carta> &copas , vector<Carta> &espadas , vector<Carta> &bastos , int &vueltas ){
    int cartasRestantes = baraja.cartasRestantes();
        while( cartasRestantes != 0)
        {
            cartasRestantes = baraja.cartasRestantes();
            if( cartasRestantes !=0 ) mano.push_back( baraja.robar() );
            cartasRestantes = baraja.cartasRestantes();
            if( cartasRestantes !=0 ) mano.push_back( baraja.robar() );
            cartasRestantes = baraja.cartasRestantes();
            

            while(  ( colocarCarta(mano,oros,copas,espadas,bastos,vueltas) ) ==true ){
                
            }
            

            cout<<"-------------------"<<endl;

        }
}

int main()
{
    srand(time(NULL)); 

    Espanola baraja(false);

    vector<Carta> mano;

    vector<Carta> oros;
    vector<Carta> copas;
    vector<Carta> espadas;
    vector<Carta> bastos;



    baraja.barajar();
    system("clear"); 

    bool juego = true;
    bool victoria = false;
    int vueltas=0;
    

    while( juego == true){
        int nCartasOros=0;
        int nCartasCopas=0;
        int nCartasEspadas=0;
        int nCartasBastos=0;
        jugar( baraja , mano , oros , copas , espadas , bastos , vueltas );

        for(auto it = oros.begin() ; it != oros.end() ; it++){
            nCartasOros++;
        }
        for(auto it = copas.begin() ; it != copas.end() ; it++){
            nCartasCopas++;
        }
        for(auto it = espadas.begin() ; it != espadas.end() ; it++){
            nCartasEspadas++;
        }
        for(auto it = bastos.begin() ; it != bastos.end() ; it++){
            nCartasBastos++;
        }

        cout<<"Oros: ";
        for(auto it = oros.begin() ; it != oros.end() ; it++){
            cout<<it->getSimbolo()<<" , ";
        }
        cout<<endl<<"Copas: ";
        for(auto it = copas.begin() ; it != copas.end() ; it++){
            cout<<it->getSimbolo()<<" , ";
        }
        cout<<endl<<"Espadas: ";
        for(auto it = espadas.begin() ; it != espadas.end() ; it++){
            cout<<it->getSimbolo()<<" , ";
        }
        cout<<endl<<"Bastos: ";
        for(auto it = bastos.begin() ; it != bastos.end() ; it++){
            cout<<it->getSimbolo()<<" , ";
        }


        if( nCartasOros==12 && nCartasCopas==12 && nCartasEspadas==12 && nCartasBastos==12){
            victoria=true;
            juego=false;
        }

        if(victoria==false){
            vuelta( mano , baraja );
            cout<<endl<<"VUELTA"<<endl<<endl;
            vueltas++;
            if(vueltas == 3){
                juego=false;
                break;
            } 
        }

        
        
    }

    if(victoria == true){
        cout<<endl;
        cout<<"<VICTORIA>"<<endl;
    }
    if(victoria == false){
        cout<<endl;
        cout<<"<DERROTA>"<<endl;
    }
    
    

    int a=5;
    


    return 0;
}

