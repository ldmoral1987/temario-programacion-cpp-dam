#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Prueba a indicar el fichero salida.txt
    cout << "Indica el nombre del fichero: ";

    char nombreArchivo[80];
    cin >> nombreArchivo;

    ifstream archivo (nombreArchivo);

    if (!archivo)
    {
        cout << "No se puede abrir el fichero para leer" << endl;
        return -1;
    }

    char caracter;
    while (archivo.get(caracter))
        cout.put(caracter);
    return 0;
}

