/*E027 | Función con retorno entero
Escribe int cuadrado(int n) que retorne n*n.
Lee N e imprime su cuadrado.

Entrada: 9
Salida esperada:
  El cuadrado de 9 es 81.*/

#include <iostream>

int cuadrado(int n) {
    return n * n;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << "El cuadrado de " << n << " es " << cuadrado(n) << ".\n";

    return 0;
}