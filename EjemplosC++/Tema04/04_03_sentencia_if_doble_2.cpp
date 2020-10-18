#include <iostream>

using namespace std;

int main ()
{
    int x = 0, y = 0;

    cout << "Introduce un número entero, x: " << endl;
    cin >> x;
    cout << "Introduce un número entero, y: " << endl;
    cin >> y;

    if (x <= y)
        cout << "x es menor o igual que y" << endl;
    else
        cout << "x es mayor que y" << endl;
}
