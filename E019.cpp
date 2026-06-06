/*E019 | for anidado — triángulo de asteriscos
Lee N e imprime un triángulo de N filas con asteriscos.

Entrada: 4
Salida esperada:
  *
  **
  ***
  *****/

#include <iostream>

int main() {
  int n;

  std::cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}