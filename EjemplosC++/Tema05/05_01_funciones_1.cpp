#include <iostream>

using namespace std;

int sumar (int);

int main ()
{
    int n;
    cout << "Dime un número de elementos a sumar N: ";
    cin >> n;

    int resultado = sumar (n);
    cout << "Resultado de la suma: " << resultado;
}

int sumar (int numeroElementos)
{
    int resultado = 0;

    for (int i = 0; i < numeroElementos; i++)
        resultado += i;

    return resultado;
}
