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
int  res ;
int  x , y ;
int  dv , dr; 
float coc ;
using namespace std ;   //  para que sirve ?
//  declaracion de prototipos
int sumar( int a , int b );
void restar (int a, int b );
int multiplicar();
void dividir ();
void  factorial (int a , int *fac);
// Programa principal
int main()
{
// Area de declaracion de variables locales
	int opcion = 0, p , q , num, fc ;
	system ("color  B0");
	while (opcion != 6 )
	{	system("cls");
		cout<<"\n				MENU PRINCIPAL ";
		cout<<"\n\n\n";
		cout<<"			1. Sumar dos numeros\n";
		cout<<"			2. Restar dos numeros\n";
		cout<<"			3. Multiplicar dos numeros\n";
		cout<<"			4. Dividir dos numeros\n";
		cout<<"			5. Factorial de un numero\n";
		cout<<"			6. Salir\n\n";
		cout<<"\n			Digite la opcion que desee: ";
		cin>>opcion;

	switch (opcion)
	{

	case 1:  //Opcion 1  int sumar( int a , int b );
		system("cls");
		cout<<"\n Ingrese dos numeros enteros separados por espacios--> ";
		cin>>p>>q ;
		y = sumar ( p, q);
		cout<<"\n La suma es : "<<y <<endl ;
		//   cout<<"\n La suma es :"<<sumar ( p, q) <<endl ;
		system("pause");
		break;

	case 2: // Opcion 2 void restar (int a, int b );
		 system("cls");
		cout<<"\n Ingrese dos numeros enteros separados por espacios--> ";
		cin>>p>>q ;
		restar  ( p, q);
		cout<<"\n La resta es : "<<res <<endl ;
		system("pause");
		break;

	case 3:  //Opcion 3 int multiplicar();
		system("cls");
		cout<<"\n Ingrese dos numeros enteros separados por espacios--> ";
		cin>>x>>y ;
		y = multiplicar();
		cout<<"\n La multiplicación es : "<<y <<endl ;
		system("pause");
		break;
	
	case 4:	 // Opcion 4
		system("cls");
		cout<<"\nIngrese el dividendo y el divisor separados por espacios--> ";
		cin>>dv>>dr;
		if (dr==0)
		{
			cout<<"\nERROR NO SE PUEDE DIVIDIR POR CERO\n"; 
		}else{
		dividir ();
		cout<<"\n La division es : "<<coc<<endl ;
		}
		system("pause");
		break;

	case 5:	//	void  factorial (int a , int *fac);
		system("cls");
		cout<<"\nIngrese el numero ";
		cin>>num;
		if (num < 0)
		{
			cout<<"\nERROR NO EXISTE FACTORIAL DE NUMEROS NEGATIVOS \n"; 
		}
		else
		{
			if (num == 0)
			{
			cout<<"\nEl factorial es : 1\n";	
			}
			else
			{
			   factorial ( num, &fc);
				cout<<"\n El factorial es :"<< fc << endl;
			}
		 
		 
		}
		system("pause");
		break;

	case 6:  
		system("cls");
		printf("\n !!! Adios !!!\n");
		break;

	default:  // Opcion invalida
			printf("\n                        ==============================");
			printf("\n                        ! **** Opcion Invalida ***** !") ;
			printf("\n                        ============================== \n");
		system("pause");

	}  // fin del case
}	// fin del while
		system("pause");

} 
// fin del main

// declaracion de variables locales
int sumar( int a , int b )
{
int z ;
z = a+b ;
return (z);
}

void restar (int a, int b ){
	
	res=a-b;
}

int multiplicar(){
	int mul = x * y;
	return (mul);
}

void dividir (){
	coc = (dv * 1.0)/dr;  
}
void  factorial (int a , int *fac)
{
// variables locales
*fac = 1;
for (int i = 1; i <= a; i++)	
{
	*fac = *fac * i;
	
	
}
	
	
}




