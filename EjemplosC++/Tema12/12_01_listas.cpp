// lista simplemente enlazada
#include<iostream>
using namespace std;

struct elementolista
{
	int dato;
	elementolista *siguiente;
};

void anadirenorden(elementolista *&, int numero);
void sacar(elementolista *&, int numero);
int vacio(elementolista *l_lista){ if( l_lista==NULL) return 0; else return 1;}
void recorrer(elementolista *);
void buscar(elementolista *l_lista, int numero);
int buscarposicion(elementolista *l_lista, int numero);
void anadirprincipio(elementolista *&l_lista, int numero);
void anadiralfinal(elementolista *&l_lista, int numero);
void vaciar(elementolista *&l_lista);
int main( )
{
	elementolista *lista=NULL;
	int valormostrar=0;
	int valorinsertar=0;

	int salir=0;
	do
	{
		cout<<"0 Salir"<<endl;
		cout<<"1 Vacio"<<endl;
		cout<<"2 Añadir al principio"<<endl;
		cout<<"3 Recorrer"<<endl;
		cout<<"4 Anadir al final"<<endl;
		cout<<"5 Buscarposicion"<<endl;
		cout<<"6 Anadir en orden"<<endl;
		cout<<"7 Sacar en una lista"<<endl;
		cout<<"8 Buscar en una lista en ordena"<<endl;
		cout<<"9 Vaciar la lista"<<endl;
		cin>>salir;

		switch(salir)
		{
			case 1: if(   vacio(lista)==0)cout<<"Lista vacia"<<endl;else cout<<"listano vacia"<<endl;break;
			case 2:cin>>valorinsertar;anadirprincipio(lista,valorinsertar);break;
			case 3:recorrer(lista);break;
			case 4:cin>>valorinsertar;anadiralfinal(lista,valorinsertar);break;
			case 5:cout<<"Introduce el dato buscado:";cin>>valorinsertar;int posicion;
			                posicion=buscarposicion(lista, valorinsertar);cout<<posicion<<endl;
							recorrer(lista);break;
			case 6:cin>>valorinsertar;anadirenorden(lista,valorinsertar);break;
			case 7:cout<<"Introduce el dato a sacar:";cin>>valorinsertar;sacar(lista, valorinsertar);break;
			case 8:cout<<"Introduce el dato buscado:";cin>>valorinsertar;buscar(lista, valorinsertar);break;
			case 9:vaciar(lista);break;


		}
	}while(salir!=0);

	return 0;
}
// añade un elemento el primero de la lista
void anadirprincipio(elementolista *&l_lista, int numero)
{
	elementolista *nuevo = new elementolista;
	nuevo->siguiente = l_lista;
	nuevo->dato = numero;
	l_lista = nuevo;
}
// añade un elemento al final de la lista
void anadiralfinal(elementolista *&l_lista, int numero)
{
	elementolista *nuevo = new elementolista;
	nuevo->dato = numero;
	nuevo->siguiente = NULL;
	if(l_lista == NULL)
	{
		l_lista = nuevo;

	}
	else
	{
		elementolista *actual=NULL;
		elementolista *anterior=NULL;
		actual = l_lista;
		while(actual!=NULL)
		{
			//cout<<actual->dato<<"--";
			anterior=actual;   //cuando acutal sea null,
                               //anterior será el anterior
			actual = actual->siguiente;
		}
		anterior->siguiente = nuevo;
	}

}

//devuelve 0 si no está encontrado, o la posicion comenzando por 1
int buscarposicion(elementolista *l_lista, int numero)
{
	int encontrado=0;
	int contador=0;
	while( l_lista != NULL )
	{
		contador++;
		if( l_lista->dato == numero) encontrado = contador;
		l_lista = l_lista->siguiente;
	}
	return encontrado;

}
// añade en una lista ordeanda
void anadirenorden(elementolista *&l_lista, int numero)
{
    elementolista *nuevo = new elementolista;

    nuevo->dato = numero;

    elementolista *recorrido = l_lista;
    elementolista *anterior;

    while( (recorrido!=NULL) && (recorrido->dato< numero)) //nos pararmos si es nulo, o el siguiente es mayor
    {
    	anterior = recorrido;              // anterior guarda el noda anterior
    	recorrido = recorrido->siguiente;  // siguiente pasa al siguiente elemmento
	}
	if( l_lista == recorrido) //insertamos al principaio
	{
		l_lista = nuevo;
	}
	else     // anterior es el noda anterior a donde queremos insertar
	{
		anterior->siguiente = nuevo;
	}
	nuevo->siguiente = recorrido;
}

//funcion buscar, devuelve 0 si no está encontrado, o 1 encontrado, en una lista ordenada
void buscar(elementolista *l_lista, int numero)
{
	int encontrado = 0;
	while( l_lista != NULL && l_lista->dato <=numero)
	{

		if( l_lista->dato == numero) encontrado = 1;
		l_lista = l_lista->siguiente;
	}
	if (encontrado == 0) cout<<endl<<"DAto no encontrado"<<endl;
	else cout<<endl<<"Dato encontrado"<<endl;

}

//saca un elemento de la lista
void sacar(elementolista *&l_lista, int numero)
{
	int borrado=0;
	if(l_lista!=NULL)
	{
		elementolista *actual=NULL;
		elementolista *anterior=NULL;
		actual = l_lista;
		while( (actual != NULL) && (actual->dato != numero) ) //no podemos comparar punteros con mayor y menor
		{
			anterior = actual;
			actual = actual->siguiente;
		}

		if(actual ==NULL)  // no encontrado
		{
		cout<<"no encontrado"<<endl;
		}
		else if(anterior==NULL) //eliminamos AL PRINCIPIO DE LA LISTA
		{
				l_lista=l_lista->siguiente;
				delete actual;
		}
		else  // eliminamos en la otra posicion
		{
				anterior->siguiente = actual->siguiente;
				delete actual;
		}
	}
}
//////////////////////////////////////////////////////////////////////////////////////

void vaciar(elementolista *&l_lista)
{
	elementolista *aux;

	while(l_lista !=NULL)
	{
			cout<<"Borrando:"<<l_lista->dato<<endl;
			aux = l_lista;
			l_lista=aux->siguiente;
			delete aux;
	}


}

void recorrer(elementolista *l_lista)
{
	while(  vacio(l_lista)!=0)
	{
		cout<<l_lista->dato<<"--->";
		l_lista = l_lista->siguiente;

	}
	cout<<endl;
}



/*
	*/
