/*8. Defina una estructura que sirva para representar a una persona. La estructura 
debe contener dos campos: el nombre de la persona y un valor de tipo lógico que indica
si la persona tiene algún tipo de discapacidad. Realice un programa que dado un vector
de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen
ninguna discapacidad y otro que contenga las personas con discapacidad.*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Persona_discapacidad{
	char nombre[30];
	bool discapacidad;
}personas[30],personasConD[30],personasSinD[30];
//personasConD = Persona con Discapacidad
//personasSinD = Persona sin Discapacidad

int main(){
	int n_personas,j=0,k=0;
	
	cout<<"Digite el numero de personas: ";
	cin>>n_personas;
	//Rellenar el arreglo de estructuras
	for(int i=0;i<n_personas;i++){
		fflush(stdin);
		cout<<"Nombre : "; cin.getline(personas[i].nombre,30,'\n');
		cout<<"Discapacidad (1/0)? :"; cin>>personas[i].discapacidad;
		
		//Almacenamos las personas con discapacidad
		if(personas[i].discapacidad == 1){
			strcpy(personasConD[j].nombre,personas[i].nombre);
			j++; //Es un nuevo arreglo por lo tanto debe iniciar en 0 y aumentar
		}
		//Almacenamos las personas sin Discapacidad
		else{
			strcpy(personasSinD[k].nombre,personas[i].nombre);
			k++; //Es un nuevo arreglo por lo tanto debe iniciar en 0 y aumentar
		}
		cout<<"\n";
	}
	
	//Mostrar las personas con Discapaciadad
	cout<<"\nPersonas con Discapacidad\n";
	for(int i=0;i<n_personas;i++){
		cout<<personasConD[i].nombre<<endl;
	}
	//Mostrar las personas sin Discapacidad
	cout<<"\nPersonas sin Discapacidad\n";
	for(int i=0;i<n_personas;i++){
		cout<<personasSinD[i].nombre<<endl;
	}
	getch();
	return 0;
}
