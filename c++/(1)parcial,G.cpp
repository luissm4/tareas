#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

const int MAX = 10;
//  declaracion de prototipos
void promedioImparesCentro(int m[MAX][MAX], int n);
void generarVectorBorde(int m[MAX][MAX], int n);
void imprimirMatriz(int m[MAX][MAX], int n);

int main() 
{
    int n, m[MAX][MAX];
    cout << "Ingrese el orden impar de la matriz: ";
    cin >> n;
    if (n % 2 == 0 || n > MAX) 
	{
        cout << "Debe ser impar y menor o igual a " << MAX << ".\n";
        return 1;
    }
    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
    
    promedioImparesCentro(m, n);
    generarVectorBorde(m, n);
    imprimirMatriz(m, n);
    
    return 0;
}

void promedioImparesCentro(int m[MAX][MAX], int n) 
{
    int c = n / 2, suma = 0, cont = 0;
    for (int i = 0; i < n; i++) 
	{
        if (m[c][i] % 2) suma += m[c][i], cont++;
        if (i != c && m[i][c] % 2) suma += m[i][c], cont++;
    }
    cout << "Promedio impares centro: " << (cont ? (float)suma / cont : 0) << endl;
}

void generarVectorBorde(int m[MAX][MAX], int n) 
{
    cout << "Vector borde: ";
    for (int j = 0; j < n; j++) cout << m[0][j] << " ";
    for (int i = 1; i < n; i++) cout << m[i][n - 1] << " ";
    for (int j = n - 2; j >= 0; j--) cout << m[n - 1][j] << " ";
    for (int i = n - 2; i > 0; i--) cout << m[i][0] << " ";
    cout << endl;
}

void imprimirMatriz(int m[MAX][MAX], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            cout << m[i][j] << "  ";
        }
        cout << endl;
    }
}

