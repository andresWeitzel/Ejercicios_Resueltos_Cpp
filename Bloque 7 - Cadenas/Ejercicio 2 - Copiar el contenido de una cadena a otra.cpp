/*2. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo 
su contenido hacia otro arreglo de caracteres.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char frase[20],frase2[20];
	
	cout<<"Digite una cadena de caracteres: "; 
	cin.getline(frase,20,'\n');
	
	strcpy(frase2,frase);
	
	cout<<"Frase: "<<frase2<<endl;
	
	getch();
	return 0;
}
