#include <iostream>

using namespace std;

int main()
{
    char cadena[50];
    cin.get(cadena, 8);
    cout << "[" << cadena << "]\n";
    cin.get(cadena, sizeof(cadena));
    cout << "[" << cadena << "]\n";
}

