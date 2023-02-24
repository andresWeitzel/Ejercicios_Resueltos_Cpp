/*Ejercicio 1: Hacer un programa en C++, utilizando Colas que contenga el siguiente 
menu: 

	1. Insertar un caracter a una cola
	2. Mostrar todos los elementos de la cola
	3. Salir
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;	
};

//Prototipos de Funciones
void menu();
void insertarCola(Nodo *&,Nodo *&,char);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,char &);

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int opc;
	char dato;
	
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Insertar un caracter a una cola"<<endl;
		cout<<"2. Mostrar todos los elementos de la cola"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc; 
		
		switch(opc){
			case 1: cout<<"\nIngrese el caracter para agregar a la cola: ";
					cin>>dato;
					insertarCola(frente,fin,dato);
					break;
			case 2: cout<<"\nMostrando los elementos de la cola: ";
					while(frente != NULL){
						suprimirCola(frente,fin,dato);
						if(frente != NULL){
							cout<<dato<<" , ";
						}
						else{
							cout<<dato<<".";
						}
					}
					cout<<"\n";
					system("pause");
					break;
			case 3: break;
		}
		system("cls");
	}while(opc != 3);
}

//Función para insertar elementos en la cola
void insertarCola(Nodo *&frente,Nodo *&fin,char n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
}

//Función para determinar si la cola está vacia
bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false; 
}

//Función para eliminar elementos de la cola
void suprimirCola(Nodo *&frente,Nodo *&fin,char &n){
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	delete aux;
}
