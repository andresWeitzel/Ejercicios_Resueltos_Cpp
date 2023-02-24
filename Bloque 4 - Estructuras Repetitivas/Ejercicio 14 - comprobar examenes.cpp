/*14. En una clase de 5 alumnos se han realizado tres exámenes y se requiere 
determinar el número de: 
	a) Alumnos que aprobaron todos los exámenes.
	b) Alumnos que aprobaron al menos un examen.
	c) Alumnos que aprobaron únicamente el último examen.
	
Realice un programa que permita la lectura de los datos y el cálculo de las 
estadísticas.
*/

#include<iostream>

using namespace std;

int main(){
	int examen1,examen2,examen3;
	int aprobaron_todos_examenes=0,aprobaron_almenos_uno=0,aprobaron_ultimo=0;
	
	for(int i=1;i<=5;i++){
		cout<<i<<". Digite la nota del primer examen: "; cin>>examen1;
		cout<<i<<". Digite la nota del segundo examen: "; cin>>examen2;
		cout<<i<<". Digite la nota del tercer examen: "; cin>>examen3;
		cout<<"\n";
		
		//examinando la opcion a
		if((examen1>10.5)&&(examen2>10.5)&&(examen3>10.5)){
			aprobaron_todos_examenes++;
		}
		
		//examinando la opcion b
		if((examen1>10.5)||(examen2>10.5)||(examen3>10.5)){
			aprobaron_almenos_uno++;
		}
		
		//examinando la opcion c
		if((examen1<10.5)&&(examen2<10.5)&&(examen3>10.5)){
			aprobaron_ultimo++;
		}
	}
	
	cout<<"\na) Aprobaron todos los examenes: "<<aprobaron_todos_examenes;
	cout<<"\nb) Aprobaron almenos un examen: "<<aprobaron_almenos_uno;
	cout<<"\nc) Aprobaron unicamente el ultimo examen: "<<aprobaron_ultimo;
	
	
	return 0;
}
