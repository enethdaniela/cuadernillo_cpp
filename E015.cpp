/*E015 | for — suma acumulada
Lee N y luego N enteros. Imprime la suma total al final.

Entrada:
  4
  3 8 2 5
Salida esperada:
  Suma total: 18*/

#include <iostream>

int main() {
  int n, enteros;
  int suma = 0;

  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> enteros;
    suma += enteros;
  }
  std::cout << "Suma Total: " << suma;
  
  return 0;
}