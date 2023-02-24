/*7. Defina una estructura que indique el tiempo empleado por un ciclista en 
una etapa. La estructura debe tener tres campos: horas, minutos y segundos. 
Escriba un programa que dado n etapas calcule el tiempo total empleado en 
correr todas las etapas.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct tiempo_ciclista{
	int horas;
	int minutos;
	int segundos;
}etapa[10];

int main(){
	int n_etapas,horasT=0,minutosT=0,segundosT=0;
	
	cout<<"Digite el numero de etapas: ";
	cin>>n_etapas;
	
	cout<<"\nDigite el tiempo Obtenido:"<<endl;
	
	for(int i=0;i<n_etapas;i++){
		//Pedimos las horas en cada etapa
		cout<<i+1<<". Horas: "; cin>>etapa[i].horas;
		cout<<i+1<<". Minutos: "; cin>>etapa[i].minutos;
		cout<<i+1<<". Segundos: "; cin>>etapa[i].segundos;
		
		horasT = horasT+etapa[i].horas; //Sacamos las horas totales empleadas
		minutosT = minutosT+etapa[i].minutos;
		if(minutosT>=60){//Si los minutos son mayores a 60, significa que ha pasado
			minutosT-=60;//mas de 1 hora, entonces disminuimos en 60 los minutos
			horasT++;//y aumentamos las horas en 1
		}
		segundosT = segundosT+etapa[i].segundos;
		if(segundosT>=60){//y lo mismo hacemos con los segundos
			segundosT-=60;
			minutosT++;
		}
		cout<<"\n";
	}
	
	//Por ultimo mostramos los totales de tiempos en pantalla
	cout<<"\nEl tiempo total es: "<<endl;
	cout<<"Horas: "<<horasT<<endl;
	cout<<"Minutos: "<<minutosT<<endl;
	cout<<"Segundos: "<<segundosT<<endl;
	
	
	getch();
	return 0;
}
