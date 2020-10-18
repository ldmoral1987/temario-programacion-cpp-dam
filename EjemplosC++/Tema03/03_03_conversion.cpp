#include <iostream>

using namespace std;

int main ()
{
    int entero = 50;
    float flotante = entero;

    cout << entero << endl;
    cout << flotante << endl;

    flotante = 3.141592;
    entero = (int) flotante;

    cout << entero << endl;
    cout << flotante << endl;

    flotante = 3.141592;
    entero = flotante;

    cout << entero << endl;
    cout << flotante << endl;
}
