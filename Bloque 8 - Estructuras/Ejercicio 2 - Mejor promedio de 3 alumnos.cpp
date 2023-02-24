/*2. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes
Campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cuál 
de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Alumno{
	char nombre[20];
	int edad;
	float promedio;
}alumnos[3];

int main(){
	int mayor = 0,pos=0;
	
	//Pedir los datos para 3 alumnos
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Nombre: "; cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Edad: "; cin>>alumnos[i].edad;
		cout<<"Promedio: "; cin>>alumnos[i].promedio;
		
		if(alumnos[i].promedio > mayor){
			mayor = alumnos[i].promedio; //sacamos el mayor promedio
			pos = i; // guardamos la posicion del mayor promedio
		}
		cout<<"\n";
	}
	
	//Imprimimos los datos del alumno con el mejor promedio
	cout<<"\nAlumnos con el mejor Promedio: \n";
	cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
	cout<<"Edad: "<<alumnos[pos].edad<<endl;
	cout<<"Promedio: "<<alumnos[pos].promedio<<endl;
	
	getch();
	return 0;
}
