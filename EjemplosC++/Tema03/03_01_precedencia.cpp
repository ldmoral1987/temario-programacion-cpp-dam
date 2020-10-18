#include <iostream>

using namespace std;

int main ()
{
    cout << 6 + 3 * 4 / 2 + 2 << endl;      // 14
    cout << (6 + 3) * 4 / (2 + 2) << endl;  // 9
    cout << 6 + (3 * 4) / 2 + 2 << endl;    // 14
    cout << 6 + (3 * 4) / (2 + 2) << endl;  // 9
}
