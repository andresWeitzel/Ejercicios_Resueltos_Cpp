/*Ejercicio 2: Crear una lista que almacene "n" números reales  y calcular su suma y promedio.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	float dato;
	Nodo *siguiente;	
};

void insertarLista(Nodo *&,float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

int main(){
	Nodo *lista = NULL;
	float dato;
	char opcion;
	
	do{
		cout<<"Digite un numero: ";;
		cin>>dato;
		insertarLista(lista,dato);
		
		cout<<"\nDesea agregar otro elemento a lista(s/n): ";
		cin>>opcion;
	}while(opcion == 's' || opcion == 'S');
	
	cout<<"\nElementos de la lista:\n";
	mostrarLista(lista);
	
	calcularSumaPromedio(lista); 
	
	getch();
	return 0;
}

//Insertar elementos al final de la lista
void insertarLista(Nodo *&lista,float n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL){//lista vacia
		lista = nuevo_nodo;
	}
	else{
		aux = lista; //aux señala el inicio de la lista
		while(aux->siguiente != NULL){ //recorremos la lista
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo_nodo;
	}
	cout<<"\tElemento "<<n<<" insertado a lista correctamente\n";
}

//Mostrar todos los elementos de la lista
void mostrarLista(Nodo *lista){
	while(lista != NULL){ //mientras no sea el final de la lista
		cout<<lista->dato<<" -> "; //mostramos el dato
		lista = lista->siguiente; //avanzamos una posicion mas en la lista
	}
}

//Calcular suma y promedio de los elementos de la lista
void calcularSumaPromedio(Nodo *lista){
	float suma=0,promedio=0;
	int contador=0;
	
	while(lista != NULL){//mientras no sea el final de la lista
		suma += lista->dato; //suma iterativa
		contador++; //aumentamos el contador de elementos de la lista
		lista = lista->siguiente; //Avanzamos en la lista
	}
	
	promedio = suma / contador;
	
	cout<<"\n\nLa suma es: "<<suma<<endl;
	cout<<"El promedio es: "<<promedio<<endl;
}
