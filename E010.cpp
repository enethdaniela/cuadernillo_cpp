/*E010 | Área y perímetro del círculo
Lee el radio de un círculo (double).
Usa PI = 3.14159.
Imprime área y perímetro con 2 decimales.

Fórmulas:
  Área     = PI * radio * radio
  Perímetro = 2 * PI * radio

Entrada:
  5.0
Salida esperada:
  Radio: 5.00
  Area: 78.54
  Perimetro: 31.42*/

#include <iostream>
#include <iomanip>

int main() {
    double radio;
    double pi = 3.14159;
    std::cin >> radio;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Radio: " << radio << std::endl;
    std::cout << "Area: " << pi * radio * radio << std::endl;
    std::cout << "Perimetro: " << 2 * pi * radio << std::endl;
    return 0;
}