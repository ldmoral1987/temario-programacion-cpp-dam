//paso por valor y referencia

#include<iostream>

using namespace std;

struct estructurapila
{
	int dato;
	estructurapila *siguiente;
};

int anadir(estructurapila **, int numero);
int sacar(estructurapila **, int *);
int vacia(estructurapila *);
void recorrer(estructurapila *);
void recorrerinverso(estructurapila *);
void recorrerrecursivo(estructurapila *);
int contarpila(estructurapila *);

int main()
{
	estructurapila *pila = NULL;
	int numero=0, lectura=0, contador=0;
	int valorcontado=0;
	int dato2=0;
	//cout<<"Direccion almacenada en pila:"<<pila<<endl;
	do
	{
		cout<<"1- a�adir"<<endl;
		cout<<"2- quitar"<<endl;
		cout<<"3- recorrer"<<endl;
		cout<<"4 - recorrer recursivo"<<endl;
		cout<<"5 - reocorrer inverso"<<endl;
		cout<<"6 - contar"<<endl;
		cout<<"0- salir "<<endl;
		cin>>lectura;
		switch(lectura)
		{
			case 1: cout<<"Introduce el dato:";cin>>numero;anadir(&pila, numero);break;
			case 2: sacar(&pila, &numero);cout<<endl<<"Dato sacado:"<<numero<<endl;numero=0;break;
			case 3: recorrer(pila);cout<<endl;break;
			case 4: recorrerrecursivo(pila);cout<<endl;break;
			case 5: recorrerinverso(pila);cout<<endl;break;
			case 6: dato2=0;cout<<"N�mero de elementos:"<<contarpila(pila)<<endl;cout<<dato2<<endl;break;
			default: break;

		}
	}while(lectura!=0);



	return 0;
}

int contarpila(estructurapila *nodopilacontar)
{
	int contador=0;
	if( vacia(nodopilacontar)==1)
		contador=0;
	else
	{
	 while(  vacia(nodopilacontar)==0)
	 {
	 	contador++;
		 nodopilacontar=nodopilacontar->siguiente;
	 }

	}
	return contador;
}
void recorrerrecursivo(estructurapila *nodopilarecorrer)
{
	if(   vacia(nodopilarecorrer)==1) cout<<"Fin"<<endl;
	else
	 {
	 		cout<<nodopilarecorrer->dato<<endl;
	 		recorrerrecursivo(nodopilarecorrer->siguiente);
	}
}
void recorrer(estructurapila *nodopilarecorrer2)
{
	if  (vacia(nodopilarecorrer2)==1) cout<<"Pila Vacia"<<endl;

	while(   vacia(nodopilarecorrer2)==0)
	{
	 		cout<<nodopilarecorrer2->dato<<endl;
	 		nodopilarecorrer2=nodopilarecorrer2->siguiente;
	}
}



void recorrerinverso(estructurapila *nodopilarecorrerinverso)
{
	if(   vacia(nodopilarecorrerinverso)==1) cout<<"Inicio recorrido:"<<endl;
	else
	 {

	 		recorrerinverso(nodopilarecorrerinverso->siguiente);
			cout<<nodopilarecorrerinverso->dato<<endl;
	}
}

int anadir(estructurapila **nodopila, int numero)
{
	estructurapila *nuevapila = new estructurapila;
	nuevapila->dato = numero;
	nuevapila->siguiente = *nodopila;
	*nodopila = nuevapila;
}


int sacar(estructurapila **nodopilasalida, int *numerosalida)
{
	if(vacia(*nodopilasalida)==1) cout<<endl<<"Pila vacia"<<endl<<endl;
	else
	{
		estructurapila *aux;
	aux = *nodopilasalida;
	*numerosalida = aux->dato;
	*nodopilasalida= aux->siguiente;
	delete aux;
	}
}

int vacia(estructurapila *nodopilavacia)
{
	if(nodopilavacia==NULL)
		return 1;
	else
		return 0;

}

