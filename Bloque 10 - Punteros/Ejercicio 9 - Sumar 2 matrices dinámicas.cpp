/*Ejercicio 9: Realice un programa que calcule la suma de dos matrices dinámicas.*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void sumarMatrices(int **,int **,int,int);
void mostrarMatrizSuma(int **,int,int);

int **puntero_matriz1,**puntero_matriz2,nFilas,nCol;

int main(){
	pedirDatos();
	sumarMatrices(puntero_matriz1,puntero_matriz2,nFilas,nCol);
	mostrarMatrizSuma(puntero_matriz1,nFilas,nCol);
	
	//Liberar la memoria utiliza en matriz2
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz2[i];
	}
	delete[] puntero_matriz2;
	
	//Liberar la memoria utiliza en matriz1
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz1[i];
	}
	delete[] puntero_matriz1;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>nFilas;
	cout<<"Digite el numero de columnas: ";
	cin>>nCol;
	
	//Reservar memoria para la primera matriz
	puntero_matriz1 = new int*[nFilas]; //Reservar memoria para las filas
	for(int i=0;i<nFilas;i++){
		puntero_matriz1[i] = new int[nCol]; //Reservar memoria para las columnas
	}
	
	cout<<"\nDigitando los elementos de la primera matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz1+i)+j); //puntero_matriz1[i][j]
		}
	}
	
	//Reservar memoria para la segunda matriz
	puntero_matriz2 = new int*[nFilas]; //Reservar memoria para las filas
	for(int i=0;i<nFilas;i++){
		puntero_matriz2[i] = new int[nCol]; //Reservar memoria para las columnas
	}
	
	cout<<"\nDigitando los elementos de la segunda matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz2+i)+j); //puntero_matriz1[i][j]
		}
	}
}

void sumarMatrices(int **puntero_matriz1,int **puntero_matriz2,int nFilas,int nCol){
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			*(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j);  
		}//puntero_matriz[i][j] = puntero_matriz[i][j]+puntero_matriz2[i][j];
	}
}

void mostrarMatrizSuma(int **putero_matriz1,int nFilas,int nCol){
	cout<<"\nLa suma de ambas matrices es: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz1+i)+j)<<" ";
		}
		cout<<"\n";
	}
}
