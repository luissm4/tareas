#include <iostream>
using namespace std;

struct Nodo {
    int edad;
    Nodo* sig;
}

void verificarmenor(nodo* cab);

void verificamenor(nodo* cab)
{
	nodo* actual=cab;
	bool encontrado= false;
	
	while (actual != NULL)
	{
		if (actual->edad<18)
		{
			encontrado=true;
			break;
		}
		actual =actual->sig;
	}
	if(encontrado)
	{
		cout << "Se encontr menor de edad." << endl;
	}
	else 
	{
		cout << "No hay menor de edad en la lista." << endl;
	}
}
