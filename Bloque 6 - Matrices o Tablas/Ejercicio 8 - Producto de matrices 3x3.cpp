//8. Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int A[3][3]={{1,2,0},{2,-1,-1},{3,2,3}};
	int B[3][3]={{2,1,1},{-1,1,3},{1,2,4}};
	int C[3][3];
	
	//Multiplicando las matrices
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			C[i][j]=0;
			for(int k=0;k<3;k++){
				C[i][j] = C[i][j] + A[i][k]*B[k][j];
			}
		}
	}
	
	//Resultado de la multiplicacion
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<C[i][j]<<"  ";
		}
		cout<<"\n";
	}	
	
	getch();
	return 0;
}

