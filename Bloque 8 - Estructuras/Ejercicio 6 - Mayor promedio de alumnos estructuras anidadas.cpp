/*6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N 
alumnos, y calcular cuál de todos tiene el mejor promedio, e imprimir sus datos.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alumnos[100];

int main(){
	int n_alumnos,posM=0;
	float promedio_alumno[100],mayor=0;
	
	cout<<"Digite el numero de alumnos: ";
	cin>>n_alumnos;
	
	for(int i=0;i<n_alumnos;i++){
		fflush(stdin);
		cout<<"Nombre: "; cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Sexo: "; cin.getline(alumnos[i].sexo,10,'\n');
		cout<<"Edad: "; cin>>alumnos[i].edad;
	
		cout<<".:Notas del Examen:."<<endl;
		cout<<"Nota1: "; cin>>alumnos[i].prom.nota1;
		cout<<"Nota2: "; cin>>alumnos[i].prom.nota2;
		cout<<"Nota3: "; cin>>alumnos[i].prom.nota3;
	
		//Sacando el promedio del alumno
		promedio_alumno[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;
		
		if(promedio_alumno[i] > mayor){
			mayor = promedio_alumno[i];
			posM = i;
		}
		cout<<"\n";
	}
	
	cout<<"\n\nMostrando Datos del alumno con mejor Promedio"<<endl;
	cout<<"Nombre: "<<alumnos[posM].nombre<<endl;
	cout<<"Sexo: "<<alumnos[posM].sexo<<endl;
	cout<<"Edad: "<<alumnos[posM].edad<<endl;
	cout<<"Promedio: "<<promedio_alumno[posM];
		
	getch();
	return 0;
}
