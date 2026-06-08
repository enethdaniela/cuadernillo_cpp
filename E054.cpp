/*E054 | Búsqueda binaria
TRAZA A MANO PRIMERO:
Para el arreglo ordenado {2, 5, 8, 12, 16, 23, 38},
dibuja paso a paso cómo la búsqueda binaria encuentra el 23:
  - izquierda=0, derecha=6, medio=3 → arr[3]=12 < 23 → buscar derecha
  - izquierda=4, derecha=6, medio=5 → arr[5]=23 == 23 → ENCONTRADO

Luego implementa el algoritmo en C++.

Entrada:
  7
  2 5 8 12 16 23 38
  23
Salida esperada:
  Valor 23 encontrado en indice 5 (busqueda binaria).*/

#include <iostream>
#include <vector>

int busquedaBinaria(const std::vector<int>& arreglo, int valor) {
    int izq = 0;
    int der = arreglo.size() - 1;

    while (izq <= der) {
        int medio = izq + (der - izq) / 2;

        if (arreglo[medio] == valor) {
            return medio;
        }
        if (arreglo[medio] < valor) {
            izq = medio + 1;
        } 
        else {
            der = medio - 1;
        }
        
    }
    return -1;
}

int main () {
    int n, valor, indiceResultado;
    std::cin >> n;
    
    std::vector<int> lista(n);
    for (int i = 0; i < n; i++) {
        std::cin >> lista[i];
    }

    std::cin >> valor;

    indiceResultado = busquedaBinaria(lista, valor);

    if (indiceResultado != -1) {
        std::cout << "Valor " << valor << " encontrado en indice " << indiceResultado << " (busqueda binaria). \n";
    } else {
        std::cout << "Valor " << valor << " no encontrado.\n";
    }

    return 0;
}