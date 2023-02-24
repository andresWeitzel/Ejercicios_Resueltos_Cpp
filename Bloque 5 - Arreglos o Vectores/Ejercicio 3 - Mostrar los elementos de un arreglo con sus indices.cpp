/*3. Escribe un programa que lea de la entrada estándar un vector de números y 
muestre en la salida estándar los números del vector con sus índices asociados.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100],n;
	
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";
		cin>>numeros[i]; //Guardamos los numeros en el arreglo
	}
	
	//Ahora, vamos a mostrar los numeros con sus indices asociados
	
	for(int i=0;i<n;i++){
		cout<<i<<" -> "<<numeros[i]<<endl; //Mostrando los numeros
	}
		
	getch();
	return 0;
}

