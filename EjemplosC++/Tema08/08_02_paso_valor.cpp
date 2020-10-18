#include <iostream>

using namespace std;

int multiplicar (int variable, int multiplicando)
{
    variable = variable * multiplicando;
    return variable;

}

int main ()
{
    int variable = 15;

    cout << "Variable: " << variable << endl;
    cout << "Multiplicación: " << multiplicar (variable, 2)<< endl;
    cout << "Variable (después de multiplicación): " << variable << endl;
}
