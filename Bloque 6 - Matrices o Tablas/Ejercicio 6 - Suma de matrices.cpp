//6. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz1[3][3] = {{2,0,1},{3,0,0},{5,1,1}};
	int matriz2[3][3] = {{1,0,1},{1,2,1},{1,1,0}};
	
	//Mostrando las 2 matrices
	cout<<"Matriz 1\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz 2\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	//Sumando matrices
	cout<<"\nSuma de matrices\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz1[i][j]+matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
		
	return 0;
}
