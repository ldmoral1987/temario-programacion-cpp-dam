#include <iostream>

using namespace std;

void multiplicar (int * variable, int multiplicando)
{
    *variable *= multiplicando;
}

int main ()
{
    int variable = 15;

    cout << "Variable: " << variable<< endl;
    multiplicar (&variable, 2);
    cout << "Multiplicación: " << variable << endl;
    cout << "Variable (después de multiplicación): " << variable<< endl;
}
