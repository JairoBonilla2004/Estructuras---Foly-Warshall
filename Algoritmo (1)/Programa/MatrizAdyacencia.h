#ifndef MATRIZADYACENCIA_H
#define MATRIZADYACENCIA_H

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class MatrizAdyacencia {
private:
    vector<vector<int> > matriz;
public:
    // Constructor para inicializar el grafo con una matriz de adyacencia
    MatrizAdyacencia(const vector<vector<int> >& m) : matriz(m) {}

    // Obtener el número de vértices en el grafo
    int obtenerNumeroDeVertices() const { return matriz.size(); }

    // Obtener el valor en la posición (i, j) de la matriz de adyacencia
    int obtenerValor(int i, int j) const {
        return matriz[i][j];
    }
};
#endif