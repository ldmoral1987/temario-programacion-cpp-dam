//si utilizasemos cin como hasta ahora cuando pulsamos espacio deja de guardar
//con la funcion cin.getline lo guarda todo
#include <iostream>
#include "string.h"

using namespace std;
void tamano (char x[20]);//como hacer alguna de estas funciones con funciones
void mostrar (char x[20],int n);
void recorrer (char x[20]);
void recorrert (char x[20]);
void copy (char x[20],char y[20]);

int main ()
{
	int numero;
	cin>>numero;
	cin.get();
	char cadena[20];
	cin.getline(cadena,20);//para recoger las cadenas char
	cout<<cadena;
	//strlen() sirve para saber el numero de caracteres que hay en una cadena
	numero=strlen(cadena);
	cout<<endl<<numero<<endl;
	//podemos recorrer los caracteres que hemos introducido como un vector normal
		for (int i=0;i<numero;i++)
		cout<<cadena[i]<<",";

	char copia[20];
	cout<<endl;
	//strcpy(a,b) copia una cadena en otra variable
	strcpy(copia,cadena);
	for (int i=0;i<numero;i++)
	{
		cout<<copia[i]<<",";
	}
	//utilizamos funciones para hacer lo anterior
	tamano(cadena);

	cout<<endl<<"funcion mostar: ";
	mostrar(cadena,numero);

	cout<<endl<<"funcion recorrer: "<<endl;
	recorrer(cadena);

	cout<<endl<<"funcion recorrert: "<<endl;
	recorrert(cadena);

	//funcion que copie la cadena
	char paste[20];
	copy(cadena,paste);
	cout<<endl<<"la copia paste es: "<<paste;

	return 0;
}
void tamano (char x[20])
{
	cout<<"Tamaño: "<<strlen(x);
}
void mostrar (char x[20],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<x[i]<<",";
	}
}
void recorrer (char x[20])
{
	int ini;
	int n;
	cout<<"introduce el inicio: ";cin>>ini;
	cout<<"introduce el final: ";cin>>n;
	for (int i=ini-1;i<=n-1;i++)
	{
		cout<<x[i]<<",";
	}
}
void recorrert (char x[20])
{
	int ini;
	int t;
	cout<<"introduce el inicio: ";cin>>ini;
	cout<<"introduce el tamaño: ";cin>>t;
	for (int i=ini-1;i<(ini+(t-1));i++)
	{
		cout<<x[i]<<",";
	}
}
void copy (char x[20],char y[20])
{
	strcpy(y,x);
}
