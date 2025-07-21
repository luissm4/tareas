// Taller Funciones #7: Paso de vectores como parametros, Retorno de valores, Variables locales
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std ;
#define tam 10
int promedio(int V[]);

void main()
{	
    int W[tam], i, t ;
// lectura del vector de edades
	for (i=0 ; i < tam; i++)
	{
		cout<<"\n Suministre la edad de la persona "<<i+1 <<":";
		cin>>W[i];
	};
/* Impresión del Vector de edades */
printf("\n--------------------------------------------------------------");
printf("\n EL VECTOR DE EDADES ES : \n\n");
for (i=0; i< tam; i++)
	{
		printf("%d  ", W[i]);
	};

	printf("\n==============================================================");
	t=promedio(W);
	printf("\nHay <%d> edades inferiores al promedio total \n", t);
/* Impresión del vector transformado */
printf("\n EL VECTOR DE EDADES TRANSFORMADO ES : \n\n");
for (i=0; i< tam; i++)
	{
		printf("%d  ", W[i]);
	};

printf("\n==============================================================\n");
system("pause");
}
int promedio (int V[])
{
	int i, t=0;
	float p=0;
// Se calcula el promedio de edades en el Vector V	
	for ( i =0 ; i < tam; i++)
		p=p+V[i];
		p=p/tam;
	printf("\nEl promedio de las edades es : %7.1f" , p);
// Se halla la cantidad de edades inferiores al promedio y se resetea el Vector V a cero.
	for (i=0 ; i < tam ; i++)
	{
		if ( V[i] < p)
			t++;
	        V[i]=0;
	}
return (t);
}


