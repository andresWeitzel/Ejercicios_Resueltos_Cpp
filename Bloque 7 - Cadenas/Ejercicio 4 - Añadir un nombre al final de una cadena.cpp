/*4. Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra
cadena para preguntarle al usuario su nombre, por ultimo añadir el nombre al final de 
la primera cadena y mostrar el mensaje completo "Hola que tal (NombreDelUsuario)".*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[] = "Hola que tal ";
	char cad2[20];
	
	cout<<"Digite su nombre: ";
	cin.getline(cad2,20,'\n');
	
	strcat(cad1,cad2);
	
	cout<<"Frase: "<<cad1<<endl;	
	
	
	getch();
	return 0;
}
