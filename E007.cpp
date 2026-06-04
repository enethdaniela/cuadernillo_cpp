/*E007 | Conversión de temperatura
Lee una temperatura en Celsius (double).
Conviértela a Fahrenheit: F = C * 9.0/5.0 + 32
Muestra el resultado con 1 decimal.

Entrada:
  100.0
Salida esperada:
  100.0 C = 212.0 F*/

#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision(1);
    double tempC;
    std::cout << "Temperatura: ";
    std::cin >> tempC;
    double tempF = tempC * 9.0/5.0 + 32;
    std::cout << tempC << " C = " << tempF << " F";
    return 0;
}