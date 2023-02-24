/*10. Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! 
(suma de factoriales).*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,suma=0,factorial=1;
	
	cout<<"Digite el total de elementos a sumar: "; 
	cin>>n;
	
	for(int i=1;i<=n;i++){
		factorial *= i; //primero sacamos los factoriales
		suma +=factorial; //luego los sumamos
	}
	
	cout<<"\nLa suma de factoriales es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
