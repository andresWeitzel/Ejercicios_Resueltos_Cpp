/*Ejercicio 13: Realiza una función que tome como parámetros un vector de números y su
tamaño y cambie el signo de los elementos del vector.*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de Funciones
void pedirDatos();
void cambiarSigno(int vec[],int);
void mostrarVector(int vec[],int);


int tam,vec[100];

int main(){
	//Llamada a las funciones - en orden
	pedirDatos();
	cambiarSigno(vec,tam);	
	mostrarVector(vec,tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el tamanio del vector: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
	}
}

void cambiarSigno(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i] *= -1;
	}
}

void mostrarVector(int vec[],int tam){
	cout<<"\nMostrando vector con cambio de signo: "<<endl;
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
}
