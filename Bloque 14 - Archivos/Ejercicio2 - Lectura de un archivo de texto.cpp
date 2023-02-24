/*Ejercicio 2: Realice un programa que pida al usuario el nombre o ubicacion 
de un fichero de texto y, a continuación de lectura a todo el fichero. */

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void lectura();

int main(){
	lectura();
	
	system("pause");
	return 0;
}

void lectura(){
	ifstream archivo;
	string nombreArchivo,texto;
	
	cout<<"Digite el nombre o la ubicacion del archivo o fichero: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //Cerramos el archivo
}
