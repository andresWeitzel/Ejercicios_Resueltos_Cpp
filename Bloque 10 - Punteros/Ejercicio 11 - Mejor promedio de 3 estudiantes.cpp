/*Ejercicio 11: Hacer una estructura llamada alumno, en la cual se tendrán los siguientes
Campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cuál 
de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.
NOTA: Usar punteros a estructura*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno = alumno;

void pedirDatos();
void comprobarMejorPromedio(Alumno *);

int main(){
	pedirDatos();	
	comprobarMejorPromedio(puntero_alumno);
	
	getch();
	return 0;
}

void pedirDatos(){
	for(int i=0;i<3;i++){
		fflush(stdin); //Limpiar buffer para poder seguir digitando datos
		cout<<"Digite su nombre: ";
		cin.getline((puntero_alumno+i)->nombre,30,'\n');
		cout<<"Digite su edad: ";
		cin>>(puntero_alumno+i)->edad;
		cout<<"Digite su promedio: ";
		cin>>(puntero_alumno+i)->promedio;
		cout<<"\n";
	}
}

void comprobarMejorPromedio(Alumno *puntero_alumno){
	float mayor = 0.0;
	int pos=0;
	
	for(int i=0;i<3;i++){
		if((puntero_alumno+i)->promedio > mayor){
			mayor = (puntero_alumno+i)->promedio;//sacamos el mayor promedio
			pos = i;// guardamos la posicion del mayor promedio
		}
	}
	
	//Imprimimos los datos del alumno con el mejor promedio	
	cout<<"\nAlumno con el mejor promedio: "<<endl;
	cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
	cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;	
}
