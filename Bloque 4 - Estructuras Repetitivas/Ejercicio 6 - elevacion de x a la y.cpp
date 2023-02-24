/*6. Escriba un programa que calcule x^y, donde tanto x como y son enteros 
positivos, sin utilizar la función pow.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x,y,elevacion=1;
	
	cout<<"Digite el valor de x: ";cin>>x;
	cout<<"Digite el valor de y: ";cin>>y;
	
	for(int i=1;i<=y;i++){
		elevacion *= x;
	}
	
	cout<<"\nEl resultado de la elevacion es: "<<elevacion;
	
	getch();
	return 0;
}
