#include <iostream>
#include <cstdio>

struct Persona
{
    char nombre[30];
    int id;
    float nota;
};

using namespace std;

int main ()
{
    int cantidad;
    Persona * personas;

    cout << "Número de estudiantes: ";
    cin >> cantidad;

    personas = new Persona [cantidad];

    for (int i = 0; i < cantidad; i++)
    {
       cout << "Nombre del estudiante: ";
       cin >> personas[i].nombre;

       cout << "Id. del estudiante: ";
       cin >> personas[i].id;

       cout << "Nota del estudiante: ";
       cin >> personas[i].nota;
    }

    cout << endl;

    cout << "Datos introducidos: " << endl;
    cout << "====================" << endl << endl;

    for (int i = 0; i < cantidad; i++)
    {
       cout << personas[i].nombre << endl;
       cout << personas[i].id << endl;
       cout << personas[i].nota << endl;
       cout << endl;
    }
}

