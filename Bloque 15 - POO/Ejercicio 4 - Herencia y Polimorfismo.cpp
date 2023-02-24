/*Ejercicio 4: Crear un programa en C++ que tenga la siguiente jerarquía de
clases: Animal(Clase Padre) -> Humano(Clase Hija) -> Perro(Clase Hija), 
y hacer polimorfismo con el metodo comer(). */

#include<iostream>
#include<stdlib.h>
using namespace std;

class Animal{
	private: 
		int edad;
	public:
		Animal(int);
		virtual void comer();
};

class Humano : public Animal{
	private: 
		string nombre;
	public:
		Humano(int,string);
		void comer();
};

class Perro : public Animal{
	private: 
		string nombre,raza;
	public: 
		Perro(int,string,string);
		void comer();
};

//Constructor de la clase Animal
Animal::Animal(int _edad){
	edad = _edad;
}

void Animal::comer(){
	cout<<"Yo como ";
}

//COnstructor de la clase Humano
Humano::Humano(int _edad,string _nombre) : Animal(_edad){
	nombre = _nombre;
}

void Humano::comer(){
	Animal::comer();
	cout<<"en la mesa, sentado en una silla"<<endl;
}

//Constructor de la clase Perro
Perro::Perro(int _edad,string _nombre,string _raza) : Animal(_edad){
	nombre = _nombre;
	raza = _raza;
}

void Perro::comer(){
	Animal::comer();
	cout<<"en un plato, en el suelo"<<endl;
}

int main(){
	Animal *animales[2];
	
	animales[0] = new Humano(21,"Luis");
	animales[1] = new Perro(4,"Boby","Pastor Aleman");
	
	animales[0]->comer();
	animales[1]->comer();	
	
	system("pause");
	return 0;
}
