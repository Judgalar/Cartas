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
        a->robar();
        cout<<endl;

        cout<<"mazo B roba ";
        b->robar();
        cout<<endl;

        cout<<"mazo C roba ";
        c->robar();
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

int main()
{
    
    ejercicioExamen();


    return 0;
}