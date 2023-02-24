/*Ejercicio 8: Pedir una cadena de caracteres (string) al usuario, e indicar cuantas 
veces aparece la vocal a,e,i,o,u; en la cadena de caracteres.
NOTA: Usar punteros*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void pedirDatos();
void contarVocales(char *);

char palabraUsuario[30];

int main(){
	pedirDatos();
	contarVocales(palabraUsuario);//Llamada a la funcion para contar vocales del nombre
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite una palabra: ";
	cin.getline(palabraUsuario,30,'\n');
	
	strupr(palabraUsuario); //pasar el nombre a mayuscula
}

void contarVocales(char *palabra){
	int contA=0,contE=0,contI=0,contO=0,contU=0;
	
	while(*palabra){ //mientras nombre sea diferente de nulo '\0'
		switch(*palabra){
			case 'A': contA++;break;
			case 'E': contE++;break;
			case 'I': contI++;break;
			case 'O': contO++;break;
			case 'U': contU++;break;
		}
		palabra++;
	}
	
	//Imprimiendo el conteo de cada vocal
	cout<<"\nNumero de vocales A: "<<contA<<endl;
	cout<<"Numero de vocales E: "<<contE<<endl;
	cout<<"Numero de vocales I: "<<contI<<endl;
	cout<<"Numero de vocales O: "<<contO<<endl;
	cout<<"Numero de vocales U: "<<contU<<endl;
}
