#include <iostream>

using namespace std;

int main ()
{
    int opcion = 0;

    cout << "Elige una de las siguientes opciones: " << endl;
    cout << " 1. Opción 1" << endl;
    cout << " 2. Opción 2" << endl;
    cout << " 3. Opción 3" << endl;
    cout << " - Introduce la opción elegida: ";
    cin >> opcion;

    switch (opcion)
    {
        case 1:
            cout << "Opción Uno" << endl;
            break;

        case 2:
            cout << "Opción Dos" << endl;
            break;

        case 3:
            cout << "Opción Tres" << endl;
            break;

        default:
            cout << "Opción desconocida" << endl;
            break;
    }
}
