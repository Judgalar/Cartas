#include <Carta.hpp>

using namespace std;

int main()
{
    Carta ca(12,"bastos");
    Carta ca2(6,"oros");
    cout<<ca.getAlias()<<endl;

    int a;
    cin>>a;
    return 0;
}