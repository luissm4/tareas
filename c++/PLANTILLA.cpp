#include <iostream>
#include <vector>

using namespace std;

// Prototipo del subprograma para calcular la suma de múltiplos de 7 en el borde
void SumatoriaMultiplosSieteBorde(int matriz[][100], int N, int &suma);

// Prototipo del subprograma para generar el vector con números negativos sobre la diagonal secundaria
void GenerarVectorNegativos(int matriz[][100], int N);

int main() {
    int N;
    cout << "Ingrese el orden de la matriz (impar, máximo 100): ";
    cin >> N;

    int matriz[100][100];

    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }

    // Llamada al primer subprograma
    int suma = 0;
    SumatoriaMultiplosSieteBorde(matriz, N, suma);
    cout << "Sumatoria de múltiplos de 7 en el borde: " << suma << endl;

    // Llamada al segundo subprograma
    GenerarVectorNegativos(matriz, N);

    return 0;
}

// Implementación del subprograma para hallar la suma de múltiplos de 7 en el borde
void SumatoriaMultiplosSieteBorde(int matriz[][100], int N, int &suma) {
    suma = 0;

    // Recorrer la primera y última fila
    for (int j = 0; j < N; j++) {
        if (matriz[0][j] % 7 == 0) suma += matriz[0][j];
        if (matriz[N - 1][j] % 7 == 0) suma += matriz[N - 1][j];
    }

    // Recorrer la primera y última columna (sin contar esquinas ya sumadas)
    for (int i = 1; i < N - 1; i++) {
        if (matriz[i][0] % 7 == 0) suma += matriz[i][0];
        if (matriz[i][N - 1] % 7 == 0) suma += matriz[i][N - 1];
    }
}

// Implementación del subprograma para generar el vector con números negativos sobre la diagonal secundaria
void GenerarVectorNegativos(int matriz[][100], int N) {
    vector<int> vectorNegativos;

    // Recorrer la matriz por encima de la diagonal secundaria
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (matriz[i][j] < 0) {
                vectorNegativos.push_back(matriz[i][j]);
            }
        }
    }

    // Imprimir el vector resultante
    cout << "Números negativos por encima de la diagonal secundaria: ";
    if (vectorNegativos.empty()) {
        cout << "No hay números negativos." << endl;
    } else {
        for (int num : vectorNegativos) {
            cout << num << " ";
        }
        cout << endl;
    }
}




