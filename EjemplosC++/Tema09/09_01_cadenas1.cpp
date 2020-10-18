#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   char frase1[] = "Copiando cadena";
   char frase2[80];
   strcpy(frase2,frase1);
   cout << "Cadena # 1: " << frase1 << endl;
   cout << "Cadena # 2: " << frase2 << endl;
}
