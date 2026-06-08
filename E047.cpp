/*E047 | Matriz — leer e imprimir
Lee una matriz de N filas y M columnas e imprímela.

Entrada:
  2 3
  1 2 3
  4 5 6
Salida esperada:
  1  2  3
  4  5  6*/

#include <iostream>
#include <vector>

int main() {
    int filas, columnas;

    std::cin >> filas >> columnas;

    //un vector dentro de un vector. Vector principal tamaño filas, y cada fila llena de un vector de tamaño columnas
    std::vector<std::vector<int>> matriz(filas, std::vector<int>(columnas));

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << matriz[i][j];

            if(j < columnas - 1) {
                std::cout << "  ";
            }
        }
        std::cout << '\n';
    }
    return 0;
}