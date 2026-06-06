/*E018 | while — contar positivos y negativos
Lee enteros uno por uno hasta que el usuario ingrese 0 (centinela).
Al final imprime cuántos positivos y negativos ingresó.
El 0 no cuenta como positivo ni negativo.

Entrada:
  5
  -3
  8
  -1
  4
  0
Salida esperada:
  Positivos: 3
  Negativos: 2*/

#include <iostream>

int main() {
  int n = 1;
  int positivos = 0;
  int negativos = 0;

  while (n != 0) {
    std::cin >> n;
    if (n > 0) {
      positivos++;
    }else if(n < 0) {
      negativos++;
    }
  }

  std::cout << "Postivos: " << positivos << '\n';
  std::cout << "Negativos: " << negativos << '\n';

  return 0;
}