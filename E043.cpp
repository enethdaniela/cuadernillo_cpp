/*E043 | Máximo, mínimo y promedio
Lee N enteros. Con funciones separadas calcula e imprime
máximo, mínimo y promedio del arreglo.

Entrada:
  6
  12 5 8 19 3 14
Salida esperada:
  Maximo: 19
  Minimo: 3
  Promedio: 10.17*/

#include <iostream>
#include <vector>
#include <iomanip>

int maximo(const std::vector<int>& arreglo) {
    int mayor = arreglo[0];
    for (int i = 1; i < arreglo.size(); i++) {
        if (arreglo[i] > mayor) {
            mayor = arreglo[i];
        }
    }
    return mayor;
}

int minimo(const std::vector<int>& arreglo) {
    int min = arreglo[0];
    for (int i = 1; i < arreglo.size(); i++) {
        if (arreglo[i] < min) {
            min = arreglo[i];
        }
    }
    return min;
}

double promedio(const std::vector<int>& arreglo) {
    double suma;
    for (int i = 0; i < arreglo.size(); i++) {
        suma += arreglo[i];
    }
    return suma / arreglo.size();
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> lista(n);
    for (int i = 0; i < n; i++) {
        std::cin >> lista[i];
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Maximo: " << maximo(lista) << '\n';
    std::cout << "Minimo: " << minimo(lista) << '\n';
    std::cout << "Promedio: " << promedio(lista) << '\n';

    return 0;
}