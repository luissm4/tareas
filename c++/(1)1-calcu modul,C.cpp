// Prototipo de Presentacion de Menus

// Se insertan las librerias necesarias
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std ;
// declaracion de variables globales

//declaracion de prototipos
int suma (int p, int q)


// Programa principal
int main()
{
// Area de declaracion de variables locales
	system("color B0");
	int opcion = 0 , A, B, num, fact;
	while (opcion != 6 )
	{	system("cls");
		cout<<"\n		        MENU PRINCIPAL ";
		cout<<"\n____________________________________________________";
		cout<<"\n";
		cout<<"			1. sumar                    |\n";
		cout<<"			2. restar                   |\n";
		cout<<"			3. multiplicar              |\n";
		cout<<"			4. dividir                  |\n";
		cout<<"			5. factorial de un numero   |\n";
		cout<<"			6. Salir                    |\n";
		cout<<"____________________________________________________|\n";
		cout<<"\n			Digite la opcion que desee: ";
		cin>>opcion;

	switch (opcion)
	{

	case 1:  //Opcion 1
		system("cls");
		cout<<"ingrese dos numeros enteros separados por espacios: ";
		cin>>A>>B;
		cout<<"el resultado de la suma es: "<<<< endl;
		system("pause");
		break;

	case 2: // Opcion 2
		system("cls");
		cout<<"ingrese dos numeros enteros separados por espacios: ";
		
		system("pause");
		break;

	case 3:  //Opcion 3
		system("cls");
		cout<<"ingrese dos numeros enteros separados por espacios: ";
		system("pause");
		break;
	case 4:	 // Opcion 4
		system("cls");
		cout<<"ingrese dos numeros enteros separados por espacios: ";
		cin>>A>>B;
		system("pause");
		break;

	case 5:		
		system("cls");
		printf("\n ingrese un numero: \n");
		system("pause");
		break;
	case 6:  
		system("cls");
		printf("\n !!! Adios !!!\n");
		break;

	default:  // Opcion invalida
			printf("\n                        =============================  ");
			printf("\n                        ! *** Como se te ocurre *** ! ") ;
			printf("\n                        =============================  ");
		system("pause");

	}  // fin del case
}	// fin del while
		
		
}  // fin del main

//declaracion de 
int suma()
