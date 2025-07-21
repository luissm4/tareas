#include <iostream>
#include <vector>
#include <cstdlib> 

using namespace std;

// Variables globales
bool datosIngresados = 0;
bool mismaEstatura = 0;
float mayorEstatura = 0; 
vector<float> estaturas;

// Declaración de funciones y procedimientos
float calcularPromedio(); 
void imprimirVector(); 
bool verificarMismaEstatura(); 
void encontrarMayorEstatura(); 
void validarEstaturas(); 

int main() {
    int opcion;
    system("color B0");
    while (opcion != 6 )
	{
        system("cls");
        cout<<"\n		        MENU PRINCIPAL ";
		cout<<"\n____________________________________________________________________";
		cout<<"\n";
		cout<<"	1. Ingresar estaturas       \n";
		cout<<"	2. Imprimir estaturas       \n";
		cout<<"	3. Calcular promedio de estaturas \n";
		cout<<"	4. Encontrar la mayor estatura    \n";
		cout<<"	5. Verificar si todos los atletas tienen la misma estatura   \n";
		cout<<"	6. Salir                    \n";
		cout<<"_____________________________________________________________________\n";
		cout<<"\n         Digite la opcion que desee: ";
		cin >> opcion;

        switch (opcion) {
            case 1:
                int n;
                cout << "Ingrese la cantidad de atletas: ";
                cin >> n;
                if (n <= 0) {
                    cout << "La cantidad de atletas debe ser mayor a 0." << endl;
                    system("pause");
                    break;
                }
                estaturas.resize(n);
                cout << "Ingrese las estaturas en metros:\n";
                for (int i = 0; i < n; i++) {
                    cin >> estaturas[i];
                }
                datosIngresados = true;
                break;
            case 2:
                if (datosIngresados) imprimirVector();
                else cout << "Primero ingrese las estaturas." << endl;
                system("pause");
                break;
            case 3:
                if (datosIngresados) cout << "Promedio de estaturas: " << calcularPromedio() << " metros" << endl;
                else cout << "Primero ingrese las estaturas." << endl;
                system("pause");
                break;
            case 4:
                if (datosIngresados) {
                    encontrarMayorEstatura();
                    cout << "Mayor estatura encontrada: " << mayorEstatura << " metros" << endl;
                } else {
                    cout << "Primero ingrese las estaturas." << endl;
                }
                system("pause");
                break;
            case 5:
                if (datosIngresados) {
                    mismaEstatura = verificarMismaEstatura();
                    if (mismaEstatura) cout << "Todos los atletas tienen la misma estatura." << endl;
                    else cout << "Los atletas tienen diferentes estaturas." << endl;
                } else {
                    cout << "Primero ingrese las estaturas." << endl;
                }
                system("pause");
                break;
            case 6:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
                system("pause");
        }
    } 
}

// Implementación de funciones y procedimientos
float calcularPromedio() 
{
    if (estaturas.empty()) return 0;
    float suma = 0;
    for (size_t i = 0; i < estaturas.size(); i++) 
	{
        suma += estaturas[i];
    }
    return suma / estaturas.size();
}

void imprimirVector() 
{
    if (estaturas.empty()) 
	{
        cout << "No hay estaturas ingresadas." << endl;
        return;
    }
    cout << "Estaturas ingresadas: ";
    for (size_t i = 0; i < estaturas.size(); i++) 
	{
        cout << estaturas[i] << " ";
    }
    cout << endl;
}

bool verificarMismaEstatura() 
{
    if (estaturas.empty()) return false;
    for (size_t i = 1; i < estaturas.size(); i++) 
	{
        if (estaturas[i] != estaturas[0]) 
		{
            return false;
        }
    }
    return true;
}

void encontrarMayorEstatura() 
{
    if (estaturas.empty()) 
	{
        cout << "No hay estaturas ingresadas." << endl;
        return;
    }
    mayorEstatura = estaturas[0];
    for (size_t i = 1; i < estaturas.size(); i++) 
	{
        if (estaturas[i] > mayorEstatura) 
		{
            mayorEstatura = estaturas[i];
        }
    }
}

