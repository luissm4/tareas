// Taller Funciones #5: Paso de matrices como parámetros, No retorno de valores, variables locales
#include<iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std ;

void suma_diagonal_principal(int mat[4][4]);
void main()
{	int M[4][4], i, j ;
// Lectura de la matriz
for (i=1; i<=3; i++)
	for (j=1 ; j <= 3 ; j++ )
	{
	cout<<"de el valor M ["<< i << "," << j << "]: ";
	cin>>M[i][j];
	};
/* Impresión de la matriz */
printf("\n--------------------------------------------------------------");
printf("\n LA MATRIZ LEIDA ES : \n\n");
for (i=1; i<= 3; i++)
	{
		for (j=1; j<=3 ; j++)
		{ 
		printf("%d  ", M[i][j]);
		}
	printf("\n");
	}
printf("\n--------------------------------------------------------------");
suma_diagonal_principal(M);
/* Impresión de la matriz transformada */
printf("\n--------------------------------------------------------------");
printf("\n LA MATRIZ TRANSFORMADA ES : \n\n");
for (i=1; i<= 3; i++)
	{
		for (j=1; j<=3 ; j++)
		{ 
		printf("%d  ", M[i][j]);
		}
	printf("\n");
	}
printf("\n--------------------------------------------------------------\n");
system("pause");
}
void suma_diagonal_principal(int mat[4][4])
{
	int k, l, suma;
	suma=0;
	printf("\nLa suma de los elementos de la diagonal principal es :");
	for (k=1 ; k <= 3; k++)
		for (l=1 ; l<=3 ; l++)
			if (k==l)
			{
				suma=suma+mat[k][l];
				mat[k][l]=0;
			};
	printf("%d \n", suma);
}


