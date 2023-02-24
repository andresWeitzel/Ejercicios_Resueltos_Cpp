/*5. Escriba un fragmento de programa que intercambie los valores de dos 
variables.*/

#include<iostream>

using namespace std;

int main(){
	int x,y, aux;
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nEl nuevo valor de x es: "<<x<<endl;
	cout<<"El nuevo valor de y es: "<<y<<endl;
	
	return 0;
}
