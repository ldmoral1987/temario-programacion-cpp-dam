#include <iostream>

using namespace std;

int main ()
{
    int calificacion = 0;

    cout << "Introduce la calificación (0-10): " << endl;
    cin >> calificacion;

    if (calificacion >= 5)
        cout << "El alumno está aprobado" << endl;
    else
        cout << "El alumno está suspenso" << endl;
}
