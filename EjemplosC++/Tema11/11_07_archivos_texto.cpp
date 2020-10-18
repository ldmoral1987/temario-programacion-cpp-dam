#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   ofstream salida ("fichero_texto.txt");
   if(!salida)
   {
       cout << "No se puede abrir el fichero" << endl;
       return -1;
   }

   salida << 10 << endl;
   salida << 3.1415 << endl;
   salida << "Cadena de caracteres" << endl;

   salida.close();

   ifstream entrada ("fichero_texto.txt");

   int entero;
   float flotante;
   char cadena[50];

   if (!entrada)
   {
        cout << "No se puede abrir el fichero" << endl;
        return -1;
   }

   entrada >> entero;
   entrada >> flotante;
   entrada >> cadena;

   cout << "Datos leídos del fichero: " << endl;
   cout << entero << endl;
   cout << flotante << endl;
   cout << cadena << endl;

   entrada.close();
   return 0;
}
