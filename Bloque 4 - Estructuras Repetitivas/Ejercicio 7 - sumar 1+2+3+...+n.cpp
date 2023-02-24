//7. Escriba un programa que calcule el valor de: 1+2+3+...+n

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,suma=0;
	
	cout<<"Digite el total de numeros a sumar: "; 
	cin>>n;
	
	for(int i=1;i<=n;i++){ 
		suma += i;
	}	
	
	cout<<"\nLa suma es: "<<suma<<endl;
	
	system("pause");	
	return 0;
}
