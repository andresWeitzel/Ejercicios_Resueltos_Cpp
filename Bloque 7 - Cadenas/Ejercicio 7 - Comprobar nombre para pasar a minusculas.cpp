/*7. Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por la letra A, 
convertir su nombre a minusculas, caso contrario no convertirlo.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[20];
	
	cout<<"Digite su nombre en MAYUSCULA: ";
	cin.getline(nombre,20,'\n');
	
	if(strncmp(nombre,"A",1)==0){//strncmp compara solo los digitos que le indiques
		strlwr(nombre);
		cout<<nombre<<endl;
	}
	else{
		cout<<"Su nombre no comienza por A";
	}
	
	getch();
	return 0;
}
