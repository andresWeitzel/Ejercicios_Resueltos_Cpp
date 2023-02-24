/*Ejercicio 7: Intercambiar el valor de 2 variables utilizando paso de parámetros por
referencia.*/

#include<iostream>
#include<conio.h>
using namespace std;

void intercambio(int&, int&);

int main(){
	int num1=10,num2=15;
	
	cout<<"El valor almacenado en num1 es: "<<num1<<endl;
	cout<<"El valor almacenado en num2 es: "<<num2<<endl;
	
	intercambio(num1,num2);
	
	cout<<"Ahora el nuevo valor de num1 es: "<<num1<<endl;
	cout<<"Ahora el nuevo valor de num2 es: "<<num2<<endl;			
	
	getch();
	return 0;
}

void intercambio(int& num1, int& num2){
	int aux;
	//Intercambiamos ambos valores de las variables num1 y num2
	aux = num1;
	num1 = num2;
	num2 = aux;
}
