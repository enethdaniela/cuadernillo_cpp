/*E023 | for — serie de Fibonacci
Lee N e imprime los primeros N términos de la serie.
  Serie: 0 1 1 2 3 5 8 13 21 ...
  Cada término = suma de los dos anteriores.

Entrada: 8
Salida esperada:
  0 1 1 2 3 5 8 13*/

#include <iostream>

int main() {
  int n;
  int t1 = 0;
  int t2 = 1;
  int t3 = 0;
  
  std::cin >> n;

  for (int i = 1; i <= n; i++) {
    if ( i == 1) {
      std::cout << t1 << ' ';
      continue;
    }
    if (i == 2) {
      std::cout << t2 << ' ';
      continue;
    }
    t3 = t1 + t2;
    t1 = t2;
    t2 = t3;

    std::cout << t3 << ' ';
  }
  return 0;
}