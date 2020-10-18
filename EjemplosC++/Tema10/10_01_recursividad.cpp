#include <iostream>

using namespace std;

int factorial (int n)
{
    if (n <= 1)
        return 1;
    else return n * factorial (n - 1);
}

unsigned long fibonacci (unsigned long n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci (n - 1) + fibonacci (n - 2);
}

int main()
{
    int variable1;
    unsigned long variable2;
    cout << "Cálculo del factorial recursivo" << endl;
    cout << "Introduce un entero: ";
    cin >> variable1;
    cout << "Factorial (" << variable1 << "): " << factorial (variable1);

    cout << endl;

    cout << "Cálculo fibonacci" << endl;
    cout << "Introduce un entero: ";
    cin >> variable2;
    cout << "Fibonacci (" << variable2 << "): " << fibonacci (variable2);
}

