#include <iostream>

using namespace std;

int variableGlobal = 4;

int main ()
{
    int variableLocal = 3;

    variableLocal = 2;
    cout << variableLocal << endl;

    variableGlobal = 3;
    cout << variableGlobal << endl;

    return 0;
}
