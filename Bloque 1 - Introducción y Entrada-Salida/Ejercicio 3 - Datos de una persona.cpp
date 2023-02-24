/*3. Realice un programa que lea de la entrada estándar los siguientes datos de
una persona:

	Edad: dato de tipo entero.
	Sexo: dato de tipo carácter.
	Altura en metros: dato de tipo real.
	
Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite su sexo: "; cin>>sexo;
	cout<<"Digite su altura en metros: "; cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura en metros: "<<altura<<endl;
	
	
	return 0;
}
