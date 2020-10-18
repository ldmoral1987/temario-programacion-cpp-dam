#include<iostream>

using namespace std;

struct elemento
{
	int dato;
	elemento *siguiente;
};

void insertar(elemento *&e_entrada, elemento *&s_salida, int numero);
void sacar(elemento *&e_entrada, elemento *&s_salida, int &numero);
void mostrarentradasalida(elemento *e_entrada, elemento *salida);
void mostrarsalidaentrada(elemento *salida);
int vacia(elemento *s_salida){ if(s_salida==NULL)return 0;else return 1;};
int main()
{
	int numero =1;
	elemento *entrada=NULL, *salida=NULL;

	int salir=0;
	do
	{
		cout<<"0 Salir"<<endl;
		cout<<"1 anadir"<<endl;
		cout<<"2 mostrar salida-entrada"<<endl;
		cout<<"3 sacar"<<endl;
		cout<<"4 mostrar entrada-salida"<<endl;
		cout<<"5 vacia"<<endl;
		cin>>salir;
		switch(salir)
		{

			case 1:cin>>numero;insertar(entrada, salida, numero);break;
			case 2:mostrarsalidaentrada(salida);break;
			case 3:sacar(entrada, salida, numero);cout<<"Elemento sacado:"<<numero<<endl;break;
			case 4:mostrarentradasalida(entrada, salida);break; break;
			case 5:if(vacia(salida)==0)cout<<endl<<"vacia"<<endl;else cout<<"No vacia"<<endl;break;


		}
	}while(salir!=0);


	return 0;

}


void insertar(elemento *&e_entrada, elemento *&s_salida, int numero)
{
	elemento *nuevo;
	nuevo = new elemento;
	nuevo->dato = numero;
	nuevo->siguiente = NULL;
	if( e_entrada==NULL)    //si esta vicia
	{
		s_salida = nuevo;
	}
	else          //si no esta vacia
	{
		e_entrada->siguiente = nuevo;
	}
	e_entrada = nuevo;
}
void mostrarsalidaentrada(elemento *s_salida)
{
	    cout<<endl<<"---------------------"<<endl;
	    int contador=0;
	    elemento *aux;
	    aux = s_salida;
		while(s_salida != NULL)
		{
		cout<<endl<<s_salida->dato<<endl;
		s_salida=s_salida->siguiente;
		}

}
void sacar(elemento *&e_entrada, elemento *&s_salida, int &numero)
{
 if(s_salida==NULL)cout<<"Cola vacia"<<endl; //comprueba si esta vacio
 else
 {
	numero = s_salida->dato;
	if(e_entrada==s_salida) //comprueba si es el último
	{

		e_entrada = NULL;
		s_salida = NULL;

	}
	else
	{
	elemento *aux;
	aux = s_salida;
	s_salida = s_salida->siguiente;
	delete aux;
	}
 }
}

void mostrarentradasalida(elemento *e_entrada, elemento *s_salida)
{
	   elemento *aux;
	   aux = s_salida;
	 if(e_entrada==NULL) cout<<endl<<"Vacio"<<endl; //comprueba  si esta vacia
	 else
	 {
	   if(e_entrada==s_salida) cout<<e_entrada->dato<<endl;// compueba si es el último elemento
	   else
	   {
	   	cout<<e_entrada->dato<<endl;
	   	while(e_entrada!=aux->siguiente)aux=aux->siguiente;

	   	mostrarentradasalida(aux, s_salida);
	   }
	}

}
