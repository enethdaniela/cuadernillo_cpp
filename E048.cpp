/*E048 | Suma de filas y columnas
Lee una matriz 3x3 e imprime la suma de cada fila
y la suma de cada columna.

Entrada:
  1 2 3
  4 5 6
  7 8 9
Salida esperada:
  Suma fila 1: 6
  Suma fila 2: 15
  Suma fila 3: 24
  Suma columna 1: 12
  Suma columna 2: 15
  Suma columna 3: 18*/

#include <iostream>
#include <vector>

int main() {
    const int TAMANO = 3;
    std::vector<std::vector<int>> matriz(TAMANO, std::vector<int>(TAMANO));

    for(int i = 0; i < TAMANO; i++) {
        for(int j = 0; j < TAMANO; j++) {
            std::cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < TAMANO; i++) {
        int sumaFila = 0;
        for (int j = 0; j < TAMANO; j++) {
            sumaFila += matriz[i][j];
        }
        std::cout << "Suma fila " << (i + 1) << " : " << sumaFila << '\n';
    }

    for (int j = 0; j < TAMANO; j++) {
        int sumaColumna = 0;
        for (int i = 0; i < TAMANO; i++) {
            sumaColumna += matriz[i][j];
        }
        std::cout << "Suma columna " << (j + 1) << " : " << sumaColumna << '\n';
    }
    return 0;
}