/*8. Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real,
convertirlos a sus respectivos valores y por ultimo sumarlos.*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){
	char cad1[10],cad2[10];
	int valorEntero;
	float valorFlotante;
	
	//Guardamos los numeros como cadenas
	cout<<"Digite un numero entero: ";
	cin.getline(cad1,10,'\n');
	cout<<"Digite un numero flotante: ";
	cin.getline(cad2,10,'\n');
	
	//Transformamos las cadenas a numeros
	valorEntero = atoi(cad1);
	valorFlotante = atof(cad2);
	
	//Por ultimo los sumamos
	cout<<"\nLa suma es: "<<valorEntero+valorFlotante<<endl;
	
	getch();
	return 0;
}
