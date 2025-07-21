// este programa es modular y manipula matrices  
//   1 : leer una matriz de numeros enteros y el tamaño de la matriz (main)
//   2 : si - si    funcion que suma los elementos de la diagonal principal  
//   3 : si-no      procedimiento que retorna la cantidad de numeros
//       pares presentes encima de la diagonal principal
//       (parametros por referencia )
//  4 : si-no  calcular el promedio de los numeros hallados en la
//       diagonal secundaria  ( variables globales)- imprimir main
//   5 : si- si imprimir en main el menor numero ubicado por debajo
//       de la diagonal secundaria 
//   4 : Salir
//   
//    Se insertan las librerias necesarias
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
// declaracion de variables globaLes
 
using namespace std ;   //  para que sirve ?
//  declaracion de prototipos
int suma_principal( int mat[][10] , int tam  );
void contar (  int mat[][10] , int tam,int *cont );
void imprimir_matriz ( int mat[][10] , int tam);
// Programa principal
int main()
{
// Area de declaracion de variables locales
int opcion = 0, M[10][10] , size, i ,j ,y, conta;
system ("color  F1");
while (opcion != 5)
{ system("cls");
cout<<"\n MENU PRINCIPAL ";
cout<<"\n\n\n";
cout<<" 1. Leer el tamaño y la matriz\n";
cout<<" 2. Suma la diagonal principal\n";
cout<<" 3. Cuenta los pares por encima de la diagonal \n";
cout<<" 4. Imprimir la matriz \n";
cout<<" 5. Salir\n";
cout<<"\n Digite la opcion que desee: ";
cin>>opcion;

switch (opcion)
{

case 1:  //Opcion 1   
cout<<"\n Ingrese el tamaño de la matriz--> ";
cin>>size ;
for ( i = 1 ; i <= size ;i++)
{
for ( j =1 ; j<= size ; j++)
{
cout<<"\n Ingrese el numero de la celda "<<"["<<i<<"]"<<"["<<j<<"]"<<"...";
cin>>M[i][j];
}
}
system("pause");
break;

case 2: //  int suma_principal( int mat[][10] , int tam  );
 system("cls");
 y = suma_principal ( M ,size);
cout<<"\n La suma de la diagonal es : "<<y <<endl ;
system("pause");
break;

case 3:  // void contar (  int mat[][10] , int tam,int *cont );
system("cls");
contar(M,  size, &conta);
cout<<"\n Cantidad de numeros pares por encima de la diagonal : "<<conta <<endl ;
system("pause");
break;
case 4:  // void contar (  int mat[][10] , int tam,int *cont );
system("cls");
 
cout<<"\n La matriz ingresada es : "<<endl ;
imprimir_matriz (M, size);
system("pause");
break;
case 5:  
system("cls");
printf("\n !!! Adios !!!\n");
break;

default:  // Opcion invalida
printf("\n                        ==============================");
printf("\n                        ! **** Opcion Invalida ***** !") ;
printf("\n                        ============================== \n");
system("pause");

}  // fin del case
} // fin del while
system("pause");

}  // fin del main
int suma_principal( int mat[][10] , int tam  )
{
// declaracion de variables locales
int suma, i ;
suma= 0 ;
for ( i = 1; i<= tam; i++)
{
suma = suma + mat[i][i];
}
return (suma);
}
void contar (  int mat[][10] , int tam,int *cont )
{
int conta, i,j;
conta = 0 ;
for ( i = 1 ;i<= tam ; i++)
{
for ( j= 1 ; j<= tam ; j++)
{
if (i < j)
{
if (mat[i][j] % 2 == 0  )
{
conta++ ;
}
}
}
}
*cont = conta ;
}
void imprimir_matriz ( int mat[][10] , int tam)
{
int i,j;
for ( i = 1 ; i <= tam ;i++)
{
for ( j =1 ; j<= tam ; j++)
{
cout<<mat[i][j]<<"  ";
}
cout<<endl;
}
}

