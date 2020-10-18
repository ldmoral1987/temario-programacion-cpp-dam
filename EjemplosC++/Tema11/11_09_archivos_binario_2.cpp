#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   ifstream entrada("fichero_binario.txt", ios::in | ios::binary);
   char c;
   if (!entrada)
   {
       cout << "No se puede abrir el fichero" << endl;
       return -1;
   }

   while(entrada)
   {
       entrada.get(c);
       cout << c;
   }
}
