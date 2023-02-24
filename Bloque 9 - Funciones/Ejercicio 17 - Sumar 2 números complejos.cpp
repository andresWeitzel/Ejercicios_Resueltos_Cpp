/*Ejercicio 17: Suma de números Complejos

z1 = 5-3i   ,  z2 = -4+2i

z1 + z2 = (5-3i)+(-4+2i)
	    = 5-3i-4+2i
		= 1-i

*/

#include<iostream>
#include<conio.h>
using namespace std;

struct complejo{
	float real,imaginaria;
}z1,z2;

//Prototipo de Función
void pedirDatos();
complejo suma(complejo,complejo);
void muestra(complejo);

int main(){
	pedirDatos();
	
	complejo x = suma(z1,z2);
	
	muestra(x);	
	
	getch();
	return 0;
} 

void pedirDatos(){
	cout<<"Digite el primer numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>z1.real;
	cout<<"Parte Imaginaria: "; cin>>z1.imaginaria;
	
	cout<<"\nDigite el segundo numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>z2.real;
	cout<<"Parte Imaginaria: "; cin>>z2.imaginaria;
}

complejo suma(complejo z1,complejo z2){
	z1.real += z2.real;
	z1.imaginaria += z2.imaginaria;
	
	return z1;
}

void muestra(complejo x){
	cout<<"\nLa suma es: "<<x.real<<" , "<<x.imaginaria<<endl;
}

