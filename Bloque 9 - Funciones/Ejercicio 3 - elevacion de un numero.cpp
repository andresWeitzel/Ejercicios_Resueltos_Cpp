/*Ejercicio 3: Escriba una función nombrada funpot() que eleve un número entero que 
se le transmita a una potencia en número entero positivo y despliegue el resultado.
El número entero positivo deberá ser el segundo valor transmitido a la función.*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void funpot(int x,int y);

int numero,exponente;

int main(){
	pedirDatos();
	funpot(numero,exponente);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero a elevar: ";
	cin>>numero;
	cout<<"Digite el exponetente de elevacion: ";
	cin>>exponente;
}

void funpot(int x,int y){
	long resultado=1;
	
	for(int i=1;i<=y;i++){
		resultado *= x;
	}
	
	cout<<"El resultado de la elevacion es: "<<resultado<<endl;
}
