/*8. Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo 
multiplicados por 2 y muestre el segundo arreglo.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[5],numeros2[5];
	
	//Primero vamos a pedir los 5 numeros del primer arreglo
	for(int i=0;i<5;i++){
		cout<<i+1<<". Digite un numero: "; cin>>numeros[i];
	}
	
	//Ahora, vamos a multiplicar por 2 los elementos del primer arreglo
	for(int i=0;i<5;i++){
		numeros2[i] = numeros[i]*2;
	}
	
	cout<<"\nMostrando numeros multiplicados por 2:\n\n";
	
	//Luego mostramos el segundo arreglo
	for(int i=0;i<5;i++){
		cout<<numeros2[i]<<endl;
	}
	
	getch();
	return 0;
}
