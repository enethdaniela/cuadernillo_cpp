/*E044 | Ordenamiento burbuja
TRAZA A MANO PRIMERO:
Para el arreglo {64, 34, 25, 12, 22}, dibuja cada pasada
del bubble sort en papel mostrando cómo cambia el arreglo.

Luego implementa el algoritmo en C++.

Entrada:
  5
  64 34 25 12 22
Salida esperada:
  Arreglo original: 64 34 25 12 22
  Arreglo ordenado: 12 22 25 34 64*/

#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arreglo) {
    int n = arreglo.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                std::swap(arreglo[j], arreglo[j + 1]);
            }
        }
    }
}

void imprimirArreglo(std::vector<int>& arreglo) {
    for (int num : arreglo) {
        std::cout << num << ' ';
    }
    std::cout << '\n';
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> lista(n);
    for(int i = 0; i < n; i++) {
        std::cin >> lista[i];
    }

    std::cout << "Arreglo original: ";
    imprimirArreglo(lista);

    bubbleSort(lista);
    std::cout << "Arreglo ordenado: ";
    imprimirArreglo(lista);

    return 0;
}
