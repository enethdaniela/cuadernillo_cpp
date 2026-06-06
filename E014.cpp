/*E014 | while — contar hasta N
Lee N e imprime los números del 1 al N separados por espacio.

Entrada: 5
Salida esperada:
  1 2 3 4 5*/

#include <iostream>

int main() {
  int n;
  int i = 1;
  
  std::cin >> n;

  while (i <= n) {
    std::cout << i << " ";
    i++;
  }

  return 0;
}