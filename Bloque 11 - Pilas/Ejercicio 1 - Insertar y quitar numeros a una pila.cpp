/*Ejercicio 1: Hacer un programa para agregar números enteros a una pila, hasta que el
usuario lo decida, después mostrar todos los números introducidos en la pila.*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipos de Función
void agregarPila(Nodo *&,int); 
void sacarPila(Nodo *&,int &);

int main(){
	Nodo *pila = NULL;	//Inicializamos pila
	int dato;
	char rpt;
	
	do{ //Pedimos todos los elementos de la pila
		cout<<"Digite un numero: ";
		cin>>dato;
		agregarPila(pila,dato);
	
		cout<<"\nDesea agregar otro numero a pila(s/n): ";
		cin>>rpt;
	}while((rpt == 's')||(rpt=='S'));
	
	
	cout<<"\nMostrando los elementos de la pila: ";
	while(pila != NULL){
		sacarPila(pila,dato);
		
		if(pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\tElemento "<<n<<" agregado a PILA correctamente";
}

void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
