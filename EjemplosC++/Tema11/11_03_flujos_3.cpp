#include <iostream>

using namespace std;

int main()
{
    char nombre[50];
    int edad;

    cout << "Edad: ";
    cin >> edad;
    cout << "Nombre: ";
    cin.getline(nombre, 50);

    cout << "Te llamas " << nombre << " y tienes " << edad << " años." << endl;
}

