/*Ejercicio 12: Defina una estructura que indique el tiempo empleado por un ciclista en 
recorrer una etapa. La estructura debe tener tres campos: horas, minutos y segundos. 
Escriba un programa que dado 3 etapas calcule el tiempo total empleado en correr todas
las etapas.
NOTA: Usar punteros.
*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Etapa{
	int horas,min,seg;
}etapa[3], *puntero_etapa = etapa;

//Prototipos de Funcion
void pedirDatos();
void calcularTiempo(Etapa *);

int main(){
	pedirDatos();
	calcularTiempo(puntero_etapa);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite los tiempos empleados: \n";	
	for(int i=0;i<3;i++){
		cout<<"Horas: "; cin>>(puntero_etapa+i)->horas;
		cout<<"Minutos: "; cin>>(puntero_etapa+i)->min;
		cout<<"Segundos: "; cin>>(puntero_etapa+i)->seg;
		cout<<"\n";
	}
}

void calcularTiempo(Etapa *puntero_etapa){
	int horasT=0,minutosT=0,segundosT=0;
	
	for(int i=0;i<3;i++){
		horasT += (puntero_etapa+i)->horas; //horasT = horasT + puntero_etapa[i].horas
		minutosT += (puntero_etapa+i)->min;
		if(minutosT >= 60){//Si los minutos son mayores a 60, significa que ha pasado
			minutosT -= 60;//mas de 1 hora, entonces disminuimos en 60 los minutos
			horasT++;//y aumentamos las horas en 1
		}
		segundosT += (puntero_etapa+i)->seg;
		if(segundosT >= 60){//y lo mismo con los segundos
			segundosT -= 60;
			minutosT++; 
		}
	}
	
	//Por ultimo mostramos los totales de tiempos en pantalla
	cout<<"\nEl tiempo total es: "<<endl;
	cout<<"Horas: "<<horasT<<endl;
	cout<<"Minutos: "<<minutosT<<endl;
	cout<<"Segundos: "<<segundosT<<endl;
}
