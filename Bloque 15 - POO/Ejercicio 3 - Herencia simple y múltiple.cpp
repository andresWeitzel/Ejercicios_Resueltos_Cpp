/*Ejercicio 3: Realice un programa en C++, de tal manera que se construya una
solución para la jerarquía(herencia) de clases mostrada en la siguiente figura
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private: //Atributos
		string nombre;
		int edad;
	public: //Metodos
		Persona(string,int); //Constructor Persona
		void mostrarPersona();
};

class Empleado : public Persona{
	private: //Atributos
		float sueldo;
	public: //Metodos
		Empleado(string,int,float); //Constructor Empleado
		void mostrarEmpleado();
};

class Estudiante : public Persona{
	private: //Atributos
		float notaFinal;
	public: //Metodos
		Estudiante(string,int,float);
		void mostrarEstudiante();
};

class Universitario : public Estudiante{
	private: //Atributos
		string carrera;
	public: 
		Universitario(string,int,float,string); //Constructor Universitario
		void mostrarUniversitario();
};

//Constructor de la clase Persona(Clase Padre)
Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

//Constructor de la clase Empleado (Clase Hija)
Empleado::Empleado(string _nombre,int _edad,float _sueldo) : Persona(_nombre,_edad){
	sueldo = _sueldo;
}

void Empleado::mostrarEmpleado(){
	mostrarPersona();
	cout<<"Sueldo: "<<sueldo<<endl;
}

//Constructor de la clase Estudiante
Estudiante::Estudiante(string _nombre,int _edad,float _notaFinal) : Persona(_nombre,_edad){
	notaFinal = _notaFinal;
}

void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout<<"Nota Final: "<<notaFinal<<endl;
}

//Constructor de la clase Universitario(Clase Hija)
Universitario::Universitario(string _nombre,int _edad,float _notaFinal,string _carrera) : Estudiante(_nombre,_edad,_notaFinal){
	carrera = _carrera;
}

void Universitario::mostrarUniversitario(){
	mostrarEstudiante();
	cout<<"Carrera: "<<carrera<<endl;
}

int main(){
	Empleado empleado1("Juan",35,1300);
	cout<<"-Empleado-"<<endl;
	empleado1.mostrarEmpleado();
	cout<<"\n";
	
	Estudiante estudiante1("Maria",21,16.7);
	cout<<"-Estudiante-"<<endl;
	estudiante1.mostrarEstudiante();
	cout<<"\n";
	
	Universitario universitario1("Alejandro",20,15.6,"Informatica");
	cout<<"-Universitario-"<<endl;
	universitario1.mostrarUniversitario();
	cout<<"\n";
	
	system("pause");
	return 0;
}
