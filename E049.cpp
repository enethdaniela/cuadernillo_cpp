/*E049 | Diagonal principal
Lee una matriz cuadrada NxN e imprime los elementos
de su diagonal principal y su suma.

  La diagonal principal son los elementos donde fila == columna:
  posiciones (0,0), (1,1), (2,2)...

Entrada:
  3
  1 2 3
  4 5 6
  7 8 9
Salida esperada:
  Diagonal principal: 1 5 9
  Suma: 15*/

#include <iostream>
#include <vector>

int main() {
    int n;
    int suma = 0;
    std::cin >> n;

    std::vector<std::vector<int>> matriz(n, std::vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matriz[i][j];
        }
    }

    std::cout << "Diagonal principal: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           
            if (i == j) {
                suma += matriz[i][j];
                std::cout << matriz[i][j] << ' ';
                
            }
        }
    }
    std::cout << "\nSuma: " << suma << '\n';

    return 0;
}