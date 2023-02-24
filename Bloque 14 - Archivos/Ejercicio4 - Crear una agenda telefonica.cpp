/*Ejercicio 4: Hacer un programa en C++. Para guardar numeros telefonicos que
muestre un menu con las siguientes opciones:
	
	1. Crear(nombre,apellidos,telefono)
	2. Agregar mas contactos(nombre,apellidos,telefono)
	3. Visualizar contactos existentes
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void menu();
void crear_contacto();
void agregar_contacto();
void visualizar_contacto();

struct contacto{
	string nombre,apellido,telefono;
}datos;

int main(){
	menu();	
	
	system("pause");
	return 0;
}

void menu(){
	int opcion;
	
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Crear Agenda Telefonica"<<endl;
		cout<<"2. Agregar mas contactos"<<endl;
		cout<<"3. Visualizar contactos existentes"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: crear_contacto();
					cout<<"\n";
					system("pause");
					break;
			case 2: agregar_contacto();
					cout<<"\n";
					system("pause");
					break;
			case 3: visualizar_contacto();
					cout<<"\n";
					system("pause");
					break;
		}
		system("cls");
	}while(opcion!=4);
}

//Funcion para crear un contacto
void crear_contacto(){
	ofstream archivo;
	char rpt;
	
	archivo.open("AgendaTelefonica.txt",ios::out); //Abrimos el archivo en modo escritura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<"\tAgenda Telefonica\n\n";
	
	do{
		fflush(stdin);
		cout<<"\nDigite su nombre: ";
		getline(cin,datos.nombre);
		cout<<"Digite su Apellido: ";
		getline(cin,datos.apellido);
		cout<<"Digite su Telefono: ";
		getline(cin,datos.telefono);
	
		archivo<<"Nombre: "<<datos.nombre<<endl;
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
		
		cout<<"\nDesea Agregar otro contacto: ";
		cin>>rpt;
	}while((rpt == 'S') || (rpt == 's'));
	
	archivo.close(); //Cerramos el archivo	
}

//Funcion para agregar más contactos
void agregar_contacto(){
	ofstream archivo;
	char rpt;
	
	archivo.open("AgendaTelefonica.txt",ios::app); //Abrimos el archivo en modo agregar
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"\nNombre: "; getline(cin,datos.nombre);
		cout<<"Apellido: "; getline(cin,datos.apellido);
		cout<<"Telefono: "; getline(cin,datos.telefono);
	
		archivo<<"Nombre: "<<datos.nombre<<endl;
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
	
		cout<<"\nDesea Agregar otro contacto: ";
		cin>>rpt;
	}while((rpt == 'S') || (rpt == 's'));
	
	archivo.close(); //Cerramos el archivo
}

void visualizar_contacto(){
	ifstream archivo;
	string texto;
	
	archivo.open("AgendaTelefonica.txt",ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //mientras no sea el final de archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //Cerramos el archivo
}
