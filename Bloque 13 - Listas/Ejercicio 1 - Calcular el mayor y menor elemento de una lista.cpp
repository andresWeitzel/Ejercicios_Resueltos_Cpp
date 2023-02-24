/*Ejercicio 1: Crear una lista que almacene "n" números enteros  y calcular el menor y mayor 
de ellos.*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);
void calcularMayorMenor(Nodo *);

int main(){
	Nodo *lista = NULL;
	int dato;
	char opcion;
	
	do{
		cout<<"Digite un numero para agregarlo a lista: ";
		cin>>dato;
		insertarLista(lista,dato);
		
		cout<<"\nDesea agregar un nuevo numero(s/n): ";
		cin>>opcion;
	}while(opcion == 's' || opcion == 'S');
	
	cout<<"\nElementos de la lista: \n";
	mostrarLista(lista); //mostramos la lista
	
	calcularMayorMenor(lista);	
	
	getch();
	return 0;
}

//Insertar elemento en la lista
void insertarLista(Nodo *&lista,int n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL){//Si la lista esta vacia
		lista = nuevo_nodo;//agregamos el primer nodo
	}
	else{
		aux = lista;
		while(aux->siguiente != NULL){//recorremos la lista hasta llegar al final
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo_nodo;//agregamos el nuevo nodo al final de la lista
	}
	cout<<"\tElemento "<<n<<" agregado a lista correctamente\n";
}

//Mostrar todos los elementos de la lista
void mostrarLista(Nodo *lista){	
	Nodo *actual = new Nodo();
	
	actual = lista;
	while(actual != NULL){ //mientras no sea final de la lista
		cout<<actual->dato<<" -> "; //mostramos el dato
		actual = actual->siguiente; //avanzamos a la siguiente posicion de la lista
	}
}

//Calcular el menor y mayor elemento de la lista
void calcularMayorMenor(Nodo *lista){
	int mayor=0,menor=99999;
	
	while(lista != NULL){//mientras no sea el final de la lista
		if((lista->dato)>mayor){//Comprobamos el numero mayor
			mayor = lista->dato;
		}
		if((lista->dato)<menor){//Comprobamos el numero menor
			menor = lista->dato;
		}
		lista = lista->siguiente;//Avanzamos en la lista
	}
	
	cout<<"\n\nEl mayor numero es: "<<mayor<<endl;
	cout<<"El menor numero es: "<<menor<<endl;	
}

