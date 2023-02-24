/*4. Escribe un programa que defina un vector de números y muestre en la salida 
estándar el vector en orden inverso—del último al primer elemento.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[5] = {1,2,3,4,5}; //Definimos el arreglo
	
	for(int i=4;i>=0;i--){
		cout<<numeros[i]<<endl; //Imprimimos el arreglo en orden inverso
	}
		
	getch();
	return 0;
}

