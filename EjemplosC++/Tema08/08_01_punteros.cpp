#include <iostream>

using namespace std;

int main ()
{
    int variable = 15;
    int * ptr = &variable;

    cout << "Contenido de la variable: " << variable << endl;
    cout << "Dirección de memoria de la variable: " << &variable << endl;
    cout << "Dirección de memoria del puntero: " << &ptr << endl;
    cout << "Contenido del puntero: " << ptr << endl;
    cout << "Indirección del puntero: " << *ptr << endl;
}
