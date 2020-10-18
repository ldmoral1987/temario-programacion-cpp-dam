#include <iostream>

struct Persona
{
    char nombre[30];
    int id;
    float nota;
};

using namespace std;

int main ()
{
    Persona personas[3];

    cout << "Introduce los datos de los estudiantes" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Registro " << i << endl;
        cout << "Nombre del estudiante: ";
        cin >> personas[i].nombre;

        cout << "Id. del estudiante: ";
        cin >> personas[i].id;

        cout << "Nota del estudiante: ";
        cin >> personas[i].nota;
        cout << endl;
    }

    cout << endl;

    cout << "Datos introducidos: " << endl;
    cout << "====================" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Registro " << i << endl;
        cout << personas[i].nombre << endl;
        cout << personas[i].id << endl;
        cout << personas[i].nota << endl;
        cout << endl;
    }
}
