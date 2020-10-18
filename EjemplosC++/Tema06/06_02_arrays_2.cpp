#include <iostream>

using namespace std;

int main ()
{
    int notas[2][5];

    cout << "Introduce 10 notas" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Nota : ";
            cin >> notas[i][j];
        }
    }

    cout << "Notas introducidas: ";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << notas[i][j] << " ";
        }
    }
}
