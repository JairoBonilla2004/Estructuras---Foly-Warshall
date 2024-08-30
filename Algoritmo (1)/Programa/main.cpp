#include <iostream>
#include <vector>
#include <limits.h>
#include "Algoritmo.h"

using namespace std;

void printMatrix(int **matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int INF = INT_MAX;
    vector<vector<int> > grafo= {
        {0, INF, -2, INF},
        {4, 0, 3, INF},
        {INF, INF, 0, 2},
        {INF, -1, INF, 0}
    };

    MatrizAdyacencia grafoMatriz(grafo);
    AlgoritmoFloydWarshall algoritmo(grafoMatriz);
    algoritmo.calcularDistanciasMinimas();
    printMatrix(algoritmo.obtenerMatrizDistancia(), 4);
    algoritmo.imprimirCaminoMinimo(0, 3);

    return 0;
}
