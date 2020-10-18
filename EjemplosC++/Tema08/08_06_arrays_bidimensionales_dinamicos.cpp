#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
    int ** matriz;
    int filas, columnas;

    cout << "Filas: ";
    cin >> filas;

    cout << "Columnas: ";
    cin >> columnas;

    matriz = new int * [filas];

    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int [columnas];
    }

    cout << "Rellena la matriz: " << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Posición " << i << "," << j << ": ";
            cin >> matriz[i][j];
        }
    }

    // Hay varias formas de recorrer una matriz dinámica

    // Forma 1: igual que una matriz estática
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Forma 2: usando aritmética de punteros
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << *(*(matriz + i) + j) << " ";
        }
        cout << endl;
    }

    // Borrado de la matriz
    for (int i = 0; i < filas; i++)
        delete [] matriz[i];

    delete [] matriz;
}

