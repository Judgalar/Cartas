#include <Carta.hpp>
#include <Espanola.hpp>
#include <EspanolaSimple.hpp>
#include <Napolitana.hpp>
#include <Francesa.hpp>
#include <Inglesa.hpp>
#include <Americana.hpp>


using namespace std;

int main()
{
    Espanola esp(false);
    EspanolaSimple simp(true);
    Napolitana nap(true);
    Francesa fr;
    Inglesa ing;
    Americana am;

    cout<<esp.cartasRestantes()<<endl;
    simp.getCarta();

    fr.getCarta();
    fr.reset();

    ing.getCarta();
    ing.reset();

    am.getCarta();
    am.reset();


    int a;
    cin>>a;
    return 0;
}