#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
    int * notas;
    int cantidad;

    cout << "¿Cuántas notas vas a almacenar?: ";
    cin >> cantidad;

    notas = new int [cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    cout << "Notas introducidas: ";
    for (int i = 0; i < cantidad; i++)
        cout << notas [i] << " ";

    delete [] notas;
}

