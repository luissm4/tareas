// este programa es modular y simula una calculadora
//   1 : si - si   funcion
//   2 : si - no   procedimiento   ( global)  
//   3 : no - si   funcion   (global )
//   4 : no  -no   procedimiento (global)
//   5 : si  - no  procedimiento  ( parametro por referencia) 
//   system ( "color  xy");
//   Se insertan las librerias necesarias
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
// declaracion de variables globaLes

using namespace std ;   //  para que sirve ?
//  declaracion de prototipos
int calequilatero( int a , int b, int b ); 

// Programa principal
int main()
{
// Area de declaracion de variables locales
	int opcion = 0, l1, l2, l3, dif ;
	system ("color  F1");
	while (opcion != 6 )
	{	system("cls");
		cout<<"\n				MENU PRINCIPAL ";
		cout<<"\n\n\n";
		cout<<"			1. longitudes del triangulo\n";
		cout<<"			2. perimetro escaleno\n";
		cout<<"			3. produto de los lados escalenos\n";
		cout<<"			4. encontrar lado isoceles\n";
		cout<<"			5. calcula la hipotenusa del triangulo\n";
		cout<<"			6. Salir\n\n";
		cout<<"\n			Digite la opcion que desee: ";
		cin>>opcion;

	switch (opcion)
	{
		case 1: 
		cout << "\nIngrese las longitudes de los 3 lados: ";
		cout<<l1<<l2<<l3;
		if (Equilatero(l1, l2, l3)) {
                    cout << "\nEl perimetro es: " << calperimetro(l1, l2, l3) << endl;
                } else {
                    cout << "\nNo es un triangulo equilatero." << endl;
                }
                system("pause");
                break;
		
	}

int equilatero( int a , int b, int b ){
	int calperimetro
} 





