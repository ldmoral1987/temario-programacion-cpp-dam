#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Puedes salir del programa pulsando CTRL+C
    ofstream salida ("salida.txt");

    if (!salida)
    {
        cout << "No se puede abrir el fichero para escribir" << endl;
        return -1;
    }

    char caracter;
    while (cin.get(caracter))
        salida.put(caracter);
    return 0;
}

