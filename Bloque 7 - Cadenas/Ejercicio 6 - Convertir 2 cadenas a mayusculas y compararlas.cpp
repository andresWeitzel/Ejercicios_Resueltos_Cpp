/*6. Convertir dos cadena de minusculas a MAYUSCULAS. Compararlas, y decir si son 
iguales o no.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[30],palabra2[30];
	
	cout<<"Digite una palabra: ";
	cin.getline(palabra1,30,'\n');
	cout<<"Digite una palabra: ";
	cin.getline(palabra2,30,'\n');
	
	strupr(palabra1);
	strupr(palabra2);
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"\nAmbas cadenas son iguales";
	}
	else{
		cout<<"Las cadenas no son iguales";
	}
	
	getch();
	return 0;
}
