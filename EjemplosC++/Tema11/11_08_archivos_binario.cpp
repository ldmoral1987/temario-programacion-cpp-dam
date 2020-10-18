#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   ofstream salida("fichero_binario.txt", ios::out | ios::binary);
   if (!salida)
   {
       cout << "No se puede abrir el fichero" << endl;
       return -1;
   }

   int car;
   while ((car = cin.get()) != EOF)
    salida.put(car);

   salida.close();
}
