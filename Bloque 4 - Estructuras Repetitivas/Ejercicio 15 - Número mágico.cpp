/*15. Realice un programa que solicite al usuario que piense un número entero 
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo
rango[1-100],e indicarle al usuario si el numero que digito es menor o mayor 
al numero aleatorio, así hasta que lo adivine. y por ultimo mostrarle el numero
de intentos que le llevo.

variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int numero,dato,contador=0;
	
	srand(time(NULL)); //generar un numero aleatorio entre 1-100
	dato = 1 + rand()%(101-1);
	
	do{
		cout<<"Digite un numero: "; cin>>numero;
		if(numero>dato){
			cout<<"Es un numero menor\n";
		}
		else if(numero<dato){
			cout<<"Es un numero mayor\n";
		}
		contador++;
	}while(numero != dato);
	
	cout<<"\n¡FELICIDADES ADIVINO EL NUMERO!"<<endl;
	cout<<"Numero de intentos: "<<contador<<endl;
	
	
	system("pause");
	return 0;
}
