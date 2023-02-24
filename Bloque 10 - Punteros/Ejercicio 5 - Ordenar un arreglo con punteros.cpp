/*Ejercicio 5: Pedir al usuario N números, almacenarlos en un arreglo dinámico
posteriormente ordenar los números en orden ascendente y mostrarlos en pantalla.
NOTA: Utilizar cualquier método de ordenamiento. */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//Prototipos de Funciones
void pedirDatos();
void ordenarNumeros(int *,int);
void mostrarArregloOrdenado(int *,int);

int nElementos, *elemento;

int main(){
	pedirDatos();
	ordenarNumeros(elemento,nElementos);	
	mostrarArregloOrdenado(elemento,nElementos);
	
	delete[] elemento;
	
	getch();
	return 0;
}

void pedirDatos(){//Pedimos los datos al usuario
	cout<<"Digite el numero de elementos: ";
	cin>>nElementos;
	
	elemento = new int[nElementos];
	
	for(int i=0;i<nElementos;i++){
		cout<<"Digite un numero ["<<i<<"]: ";
		cin>>*(elemento+i);
	}
}

void ordenarNumeros(int *elemento,int nElementos){
	int aux;
	
	//Ordenamiento por metodo burbuja con punteros
	for(int i=0;i<nElementos;i++){
		for(int j=0;j<nElementos-1;j++){
			if(*(elemento+j) > *(elemento+j+1)){
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}

void mostrarArregloOrdenado(int *elemento,int nElementos){//Mostrando Arreglo ordenado
	cout<<"\n\nMostrando Arreglo Ordenado: ";
	for(int i=0;i<nElementos;i++){
		cout<<*(elemento+i)<<" ";
	}
}


