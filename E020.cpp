/*E020 | while — máximo y mínimo
Lee N enteros e imprime el mayor y el menor.

Entrada:
  5
  3 9 1 7 4
Salida esperada:
  Mayor: 9
  Menor: 1*/

#include <iostream>

int main() {
  int n;
  int numero;
  int i = 1;
  int mayor;
  int menor;

  std::cin >> n;
  std::cin >> numero;
  
  mayor = numero;
  menor = numero;

  while (i < n) {
    std::cin >> numero;
    if (numero > mayor) {
      mayor = numero;
    }
    if (numero < menor) {
      menor = numero;
    }
    i++;
  }
  std::cout << "Mayor: " << mayor << '\n';
  std::cout << "Menor: " << menor;
  return 0;
}