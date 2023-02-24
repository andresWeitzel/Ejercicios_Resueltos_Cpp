/*1. Escribe un programa que lea de la entrada estándar dos números y muestre 
en la salida estándar su suma, resta, multiplicación y división.*/

/*#include<iostream>

using namespace std;

int main(){
	int n1,n2, suma = 0, resta = 0, multiplicacion=0,division=0;
	
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
	cout<<"La division es: "<<division<<endl;
		
	return 0;
}
*/

//Cambio de c++ a c

#include<stdio.h>

int n1,n2,sum=0,rest=0,div=0,mult=0;


int main(void){
	
		
	scanf("Digite un numero:",&n1);//Utilizamos para preguntar alguna question
	scanf("Digite un segundo numero",&n2);	
	
	//if(n1==int and n2==int){
		sum=n1+n2;
		rest=n1-n2;
		div=n1/n2;
		mult=n1*n2;	
	//}else{
		//printf("No ha colocado los parametros correctos, coloque solamente enteros o revea lo indicado");
		
	//}

	printf("La suma es:%i",sum);
	
	return 0;
}
