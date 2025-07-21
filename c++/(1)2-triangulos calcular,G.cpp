#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

// Variables globales
int productoLados;
int lado1, lado2, lado3;

// Prototipos de funciones
int calcularPerimetro(int a, int b, int c);
void calcularProductoLados();
int calcularHipotenusa(int a, int b, int c);
void encontrarLadoDiferente(int a, int b, int c, float *diferente);

int main() {
    int opcion = 0;
    system("color B0");
    
    while (opcion != 6) {
        system("cls");
        cout << "\n                      MENU PRINCIPAL";
        cout << "\n         __________________________________________";
        cout << "\n        |   1. Leer lados del triangulo            |";
        cout << "\n        |   2. Equilatero calcular perimetro       |";
        cout << "\n        |   3. Escaleno calcular producto de lados |";
        cout << "\n        |   4. Isosceles encontrar lado diferente  |";
        cout << "\n        |   5. Rectangulo calcular hipotenusa      |";
        cout << "\n        |   6. Salir                               |";
        cout << "\n        |__________________________________________|";
        cout << "\n                  Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese los lados del triangulo en cm:" << endl;
                cin >> lado1 >> lado2 >> lado3;
                break;
            case 2:
                if (lado1 == lado2 && lado2 == lado3) {
                    cout << "El perimetro del triangulo equilatero es: " << calcularPerimetro(lado1, lado2, lado3) << " cm." << endl;
                } else {
                    cout << "No es un triangulo equilatero." << endl;
                }
                system("pause");
                break;
            case 3:
                calcularProductoLados();
                if (productoLados != 0) {
                    cout << "El producto de los lados del triangulo escaleno es: " << productoLados << endl;
                } else {
                    cout << "No es un triangulo escaleno." << endl;
                }
                system("pause");
                break;
            case 4:
                float lado_diferente;
                encontrarLadoDiferente(lado1, lado2, lado3, &lado_diferente);
                system("pause");
                break;
            case 5:
                if (calcularHipotenusa(lado1, lado2, lado3) != 0) {
                    cout << "La hipotenusa del triangulo rectangulo es: " << calcularHipotenusa(lado1, lado2, lado3) << " cm." << endl;
                } else {
                    cout << "No es un triangulo rectangulo." << endl;
                }
                system("pause");
                break;
            case 6:
                system("cls");
                cout << "\n!!!SALIR !!!\n";
                return 0;
            default:
                cout << "Opcion no valida, intente nuevamente." << endl;
                system("pause");
        }
    }
}

int calcularPerimetro(int a, int b, int c) {
    return a + b + c;
}

void calcularProductoLados() {
    if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3) {
        productoLados = lado1 * lado2 * lado3;
    } else {
        productoLados = 0;
    }
}

void encontrarLadoDiferente(int a, int b, int c, float *diferente) {
    if ((a == b && a != c) || (a == c && a != b)) {
        *diferente = c;
    } else if (b == c && b != a) {
        *diferente = a;
    } else {
        cout << "No es un triangulo isosceles." << endl;
        return;
    }
    cout << "El lado diferente del triangulo isosceles es: " << *diferente << " cm." << endl;
}

int calcularHipotenusa(int a, int b, int c) {
    if ((a * a == b * b + c * c) ||
        (b * b == a * a + c * c) ||
        (c * c == a * a + b * b)) {
        return max(a, max(b, c));
    }
    return 0;
}

