#include <iostream>
using namespace std;

const int MAX = 100;
int matriz[MAX][MAX], n;
double promedioDiagonalSecundaria;

void leerMatriz();
int sumaDiagonalPrincipal();
void contarParesEncimaDiagonalPrincipal(int &contador);
void calcularPromedioDiagonalSecundaria();
int hallarMenorDebajoDiagonalSecundaria();

int main() 
{
    int opcion;
    system ("color  B0");
    while (opcion != 6)
	{
        cout << "\nMENU";
        cout << "\n1. Leer Matriz";
        cout << "\n2. Sumar elementos de la diagonal principal";
        cout << "\n3. Contar pares encima de la diagonal principal";
        cout << "\n4. Calcular promedio de la diagonal secundaria";
        cout << "\n5. Hallar menor debajo de la diagonal secundaria";
        cout << "\n6. Salir";
        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                leerMatriz();
                break;
            case 2:
                cout << "Suma de la diagonal principal: " << sumaDiagonalPrincipal() <<endl;
                break;
            case 3: {
                int cantidadPares = 0;
                contarParesEncimaDiagonalPrincipal(cantidadPares);
                cout << "Cantidad de números pares encima de la diagonal principal: " << cantidadPares <<endl;
                break;
            }
            case 4:
                calcularPromedioDiagonalSecundaria();
                cout << "Promedio de la diagonal secundaria: " << promedioDiagonalSecundaria <<endl;
                break;
            case 5:
                cout << "Menor número debajo de la diagonal secundaria: " << hallarMenorDebajoDiagonalSecundaria() <<endl;
                break;
            case 6:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    } 
}

void leerMatriz() {
    cout << "Ingrese el tamaño de la matriz (n x n): ";
    cin >> n;
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }
}

int sumaDiagonalPrincipal() {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += matriz[i][i];
    }
    return suma;
}

void contarParesEncimaDiagonalPrincipal(int &contador) {
    contador = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matriz[i][j] % 2 == 0) {
                contador++;
            }
        }
    }
}

void calcularPromedioDiagonalSecundaria() {
    int suma = 0, elementos = 0;
    for (int i = 0; i < n; i++) {
        suma += matriz[i][n - 1 - i];
        elementos++;
    }
    promedioDiagonalSecundaria = (double)suma / elementos;
}

int hallarMenorDebajoDiagonalSecundaria() {
    int menor = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
    return menor;
}

