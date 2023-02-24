/*Ejercicio 18: Escriba una función en C++ llamada mayor() que devuelva la fecha más 
reciente de cualquier par de fechas que se le transmitan. Por ejemplo, si se transmiten 
las fechas 10/9/2005 y 11/3/2015 a mayor(), será devuelta la segunda fecha.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Fecha{
	int dia,mes,anio;
}f1,f2;

//Prototipos de Funciones
void pedirDatos();
Fecha mayor(Fecha,Fecha);
void mostrarFechaMayor(Fecha);

int main(){
	pedirDatos();
	Fecha x = mayor(f1,f2);
	mostrarFechaMayor(x);	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite la Fecha1: "<<endl;
	cout<<"Dia: "; cin>>f1.dia;
	cout<<"Mes: "; cin>>f1.mes;
	cout<<"Anio: "; cin>>f1.anio;
	
	cout<<"\n\nDigite la Fecha2: "<<endl;
	cout<<"Dia: "; cin>>f2.dia;
	cout<<"Mes: "; cin>>f2.mes;
	cout<<"Anio: "; cin>>f2.anio;
}

Fecha mayor(Fecha f1,Fecha f2){
	Fecha mayorFecha;
	
	//Primero comprobamos los años
	if(f1.anio == f2.anio){
		//Ahora, comprobamos los meses
		if(f1.mes ==f2.mes){
			//Por ultimo comprobamos los dias
			if(f1.dia == f2.dia){
				cout<<"\nAmbas fechas son iguales";
			}
			else if(f1.dia > f2.dia){
				mayorFecha = f1;
			}
			else{
				mayorFecha = f2;
			}
		}
		else if(f1.mes > f2.mes){
			mayorFecha = f1;
		}
		else{
			mayorFecha = f2;
		}
	}
	else if(f1.anio > f2.anio){
		mayorFecha = f1;
	}
	else{
		mayorFecha = f2;
	}
	
	
	return mayorFecha;
}

void mostrarFechaMayor(Fecha x){
	cout<<"\nMostrando fecha mayor: "<<x.dia<<"/"<<x.mes<<"/"<<x.anio<<endl;
}
