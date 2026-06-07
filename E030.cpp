/*E030 | Parámetros por referencia — intercambio
Escribe void intercambiar(int &a, int &b).
Lee dos enteros, intercámbialos e imprime antes y después.

Entrada:
  5
  12
Salida esperada:
  Antes:  a=5, b=12
  Despues: a=12, b=5*/

#include <iostream>

void intercambiar(int &a, int &b) {
    int copia = a;

    std::cout << "Antes: a= " << a << " b=" << b << '\n';

    a = b;    
    b = copia;

    std::cout << "Despues: a= " << a << " b=" << b << '\n';
}

int main() {
    int a, b;

    std::cin >> a;
    std::cin >> b;

    intercambiar(a, b);

    return 0;
}