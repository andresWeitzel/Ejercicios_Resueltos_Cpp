/*Ejercicio 1: Comprobar si un número es par o impar, y señalar la posicion de memoria 
donde se está guardando el número. Con punteros.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero, *dir_numero;
	
	cout<<"Digite un numero: "; cin>>numero; //Pedimos el numero al usuario
	
	dir_numero = &numero;
	
	if(*dir_numero%2==0){
		cout<<"El numero: "<<*dir_numero<<" es par"<<endl;
		cout<<"Posicion: "<<dir_numero<<endl;
	}
	else{
		cout<<"El numero: "<<*dir_numero<<" es impar"<<endl;
		cout<<"Posicion: "<<dir_numero<<endl;
	}
	
	getch();
	return 0;
}
