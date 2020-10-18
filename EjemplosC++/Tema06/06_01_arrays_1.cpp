#include <iostream>

using namespace std;

int main ()
{
    char nombre[] = {'P', 'e', 'p', 'e', '\0'};
    int numeros[6] = {0, 1, 2, 3, 4, 5};
    int edades[4];

    cout << nombre << endl;

    for (int i = 0; i < 6; i++)
        cout << numeros[i] << " ";

    cout << endl;

    cout << "Introduce 4 edades" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Edad " << (i + 1) << ": ";
        cin >> edades[i];
    }

    cout << "Edades introducidas: ";
     for (int i = 0; i < 4; i++)
        cout << edades[i] << " ";
}
