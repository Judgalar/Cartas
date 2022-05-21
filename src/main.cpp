#include <Carta.hpp>
#include <Espanola.hpp>
#include <EspanolaSimple.hpp>

using namespace std;

int main()
{
    Espanola esp(true);
    EspanolaSimple simp(false);


    cout<<esp.cartasRestantes()<<endl;
    simp.getCarta();

    
    simp.ordenar();


    int a;
    cin>>a;
    return 0;
}