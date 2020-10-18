#include <iostream>

using namespace std;

int main()
{
    char nombre[50], auxiliar[2];
    int edad;

    cout << "Edad: ";
    cin >> edad;
    cin.getline(auxiliar, 2); // limpiar el buffer de teclado.
    cout << "Nombre: ";
    cin.getline(nombre, 50);

    cout << "Te llamas " << nombre << " y tienes " << edad << " años." << endl;
}

