#include <iostream>

namespace geo
{
    const double PI = 3.141592;
    double longitudCircunferencia (int radio)
    {
        return 2*PI*radio;
    }
}

using namespace std;
using namespace geo;

int main ()
{
    int radio;
    cout << "Introduce el radio de la circunferencia: ";
    cin >> radio;

    cout << "Longitud de la circunferencia: " << longitudCircunferencia(radio) << endl;

    return 0;
}
