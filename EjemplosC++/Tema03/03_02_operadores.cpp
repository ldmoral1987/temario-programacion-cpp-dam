#include <iostream>

using namespace std;

int main ()
{
    int valor, saldo = 0, resultado, c1 = 5, c2 = 4, cantidad;
    int a = 17;
    int b = 14;
    valor = 5;
    saldo += 10;
    resultado = saldo - valor;
    cantidad *= c1 + c2;

    cout << resultado << endl;
    cout << ++cantidad << endl;
    cout << cantidad++ << endl;

    cout << (resultado >= cantidad) << endl;
    cout << (resultado != cantidad) << endl;
    cout << (resultado || cantidad) << endl;

    cout << ((1 < 10) && (resultado != cantidad)) << endl;
    cout << (! 1) << endl;

    cout << (a < b) ? a : b ;
}
