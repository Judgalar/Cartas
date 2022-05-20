#include <Carta.hpp>
#include <Espanola.hpp>

using namespace std;

int main()
{
    Espanola esp;
    Espanola comod(true);


    cout<<comod.cartasRestantes()<<endl;
    comod.imprimirRestantes();

    int a;
    cin>>a;
    return 0;
}