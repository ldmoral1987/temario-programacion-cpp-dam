#include <iostream>

using namespace std;

int funcion1 ();
int funcion2 ();

int main ()
{
    cout << "Llamando a la función 1" << endl;
    funcion1();

    return 1;
}

int funcion1 ()
{
    cout << "La función 1 llama a su vez a la función 2" << endl;
    funcion2();
    return 1;
}

int funcion2 ()
{
    cout << "Se ha ejecutado la función 2" << endl;
    return 1;
}
