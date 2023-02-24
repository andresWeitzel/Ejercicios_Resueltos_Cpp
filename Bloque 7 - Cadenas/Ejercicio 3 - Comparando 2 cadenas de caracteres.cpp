/*3. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas
son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[20],palabra2[20];
	
	cout<<"Digite una palabra: ";
	cin.getline(palabra1,20,'\n');
	cout<<"Digite otra palabra: ";
	cin.getline(palabra2,20,'\n');
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"Ambas cadenas son iguales";
	}
	else if(strcmp(palabra1,palabra2)>0){
		cout<<palabra1<<" es mayor alfabeticamente";
	}
	else{
		cout<<palabra2<<" es mayor alfabeticamente";
	}
	
	getch();
	return 0;
} 
