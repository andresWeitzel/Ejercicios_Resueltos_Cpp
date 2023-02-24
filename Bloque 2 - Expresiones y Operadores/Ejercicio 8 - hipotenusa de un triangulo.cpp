/*8. Escriba un programa que lea de la entrada estándar los dos catetos de un 
triángulo rectángulo y escriba en la salida estándar su hipotenusa.*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float cateto1,cateto2,hipotenusa;
	
	cout<<"Digite el cateto 1: "; cin>>cateto1;
	cout<<"Digite el cateto 2: "; cin>>cateto2;
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	cout<<"\nEl resultado de la hipotenusa es: "<<hipotenusa;
	
	return 0;
}
