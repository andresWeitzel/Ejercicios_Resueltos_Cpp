/*16. Realice un programa que calcule la descomposición en factores primos de 
un número entero.

Por ejemplo: 20 = 2*2*5.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: "; 
	cin>>numero;
	
	cout<<"\nDescomponiendo en factores primos: ";
	for(int i=2;numero>1;i++){
		while(numero%i==0){
			cout<<i<<" ";
			numero /= i;
		}
	}
	
	cout<<"\n";
	system("pause");
	return 0;
}
