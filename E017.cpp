/*E017 | for — factorial
Lee N (N >= 0) y calcula su factorial usando un bucle for.

  Recuerda: 0! = 1,  5! = 5*4*3*2*1 = 120

Entrada: 6
Salida esperada:
  6! = 720*/

#include <iostream>

int main() {
  int N;
  unsigned long long factorial = 1;

  std::cin >> N;

  if (N < 0) { 
    return 0;
  }
  for (int i = 2; i <= N; i++) {
    factorial *= i;
  }
  std::cout << N << "! = " << factorial << "\n";

  return 0;
}