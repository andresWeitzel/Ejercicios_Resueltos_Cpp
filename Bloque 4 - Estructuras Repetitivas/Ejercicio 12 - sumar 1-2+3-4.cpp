/*12. Hacer un programa que calcule el resultado de la siguiente expresion:
1-2+3-4+5-6...n*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,suma=0,par=0,impar=0,negativo=0;
	
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(i%2==0){//los numeros pares son negativos
			negativo = i * -1; //los cambiamos de signo
			par += negativo;			
		}
		else{ //los impares son positivos
			impar += i;
		}
	}
	
	suma = par + impar;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	system("pause");
	return 0;
}

