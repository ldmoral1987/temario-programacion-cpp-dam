#include <iostream>

using namespace std;

int main ()
{
    int x = 0;

    cout << "Introduce un número entero, x: " << endl;
    cin >> x;

    if (x >= 0)
        cout << "El número es mayor o igual a 0" << endl;
    else if (x < 0)
        cout << "El número es menor que 0" << endl;
    else
        cout << "El número es igual a 0" << endl;
}
