/*E042 | Búsqueda lineal
Escribe int buscar(int arr[], int n, int valor) que retorne
el índice del valor, o -1 si no existe.

Entrada:
  6
  3 7 1 9 4 6
  9
Salida esperada:
  Valor 9 encontrado en indice 3.*/

#include <iostream>
#include <vector>

int buscar(int arr[], int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (valor == arr[i]) {
            return i;
        }
    }
    return -1;
}

int main () {
    int n, valor, indice;

    std::cin >> n;
    std::vector<int> lista(n);

    for (int i = 0; i < n; i++) {
        std::cin >> lista[i];
    }

    std::cin >> valor;

    indice = buscar(lista.data(), n, valor);
    if (indice != -1) {
        std::cout << "Valor " << valor << " encontrado en indice " << indice << ".\n";
    } else {
        std::cout << "Valor no encontrado.\n";
    }
    return 0;
}