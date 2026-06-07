/*E035 | Funciones coordinadas — pares
Escribe:
  bool esPar(int n) → true si n es par
  void imprimirPares(int inicio, int fin)
    → imprime todos los pares en el rango

Entrada:
  1
  20
Salida esperada:
  Pares entre 1 y 20:
  2 4 6 8 10 12 14 16 18 20*/

#include <iostream>

bool esPar(int n) {
    return n % 2 == 0;
}

void imprimirPares(int inicio, int fin) {
    std::cout << "Pares entre " << inicio << " y " << fin << ":\n";
    for(int i = inicio; i <= fin; i++) {
        if(esPar(i)) {
            std::cout << i << ' ';
        }
    }
    std::cout << '\n';
}

int main() {
    int inicio, fin;

    std::cin >> inicio >> fin;

    imprimirPares(inicio, fin);

    return 0;
}