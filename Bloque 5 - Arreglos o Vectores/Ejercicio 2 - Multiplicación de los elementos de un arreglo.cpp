/*2. Escribe un programa que defina un vector de números y calcule la 
multiplicación acumulada de sus elementos.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[5] = {1,2,3,4,5};
	int multiplicacion=1;

	for(int i=0;i<5;i++){
		multiplicacion *= numeros[i]; //Hacemos la multiplicacion iterativa
	}
	
	cout<<"La multiplicacion de los elementos es: "<<multiplicacion<<endl;
	
	getch();
	return 0;
}

