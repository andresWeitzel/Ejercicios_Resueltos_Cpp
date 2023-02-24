/*Ejercicio 8: Escriba una función nombrada cambio() que tenga un parámetro en número
entero y seis parámetros de referencia en número entero nombrados cien, cincuenta,
veinte, diez, cinco y uno, respectivamente. La función tiene que considerar el
valor entero transmitido como una cantidad en dólares y convertir el valor en el número
menor de billetes equivalentes. */

#include<iostream>
#include<conio.h>
using namespace std;

void cambio(int,int&,int&,int&,int&,int&,int&);

int main(){
	int valor,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
	
	cout<<"Digite un valor: ";
	cin>>valor;
	//Llamos a la funcion
	cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);
	
	cout<<"Cantidad de billetes a entregar como cambio:"<<endl;
	cout<<"Cien: "<<cien<<endl;
	cout<<"Cincuenta: "<<cincuenta<<endl;
	cout<<"Veinte: "<<veinte<<endl;
	cout<<"Diez: "<<diez<<endl;
	cout<<"Cinco: "<<cinco<<endl;
	cout<<"Uno: "<<uno<<endl;
	
	getch();
	return 0;
}

void cambio(int valor,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
	cien = valor/100;
	valor %= 100;
	cincuenta = valor/50;
	valor %= 50;
	veinte = valor/20;
	valor %= 20;
	diez = valor/10;
	valor %= 10;
	cinco = valor/5;
	uno = valor%5;
}
