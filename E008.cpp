/*E008 | Ficha personal
Lee el nombre (string), edad (int) y estatura en metros
(double) de una persona. Imprímelos con formato de ficha.

Entrada:
  Luis
  22
  1.75
Salida esperada:
  === Ficha Personal ===
  Nombre  : Luis
  Edad    : 22 años
  Estatura: 1.75 m*/

#include <iostream>
#include <iomanip>

int main() {
    std::string nombre;
    int edad;
    double estatura; 
    std::cin >> nombre;
    std::cin >> edad;
    std::cin >> estatura;
    std::cout << std::left;
    std::cout << "=== Ficha Personal ===" << std::endl;
    std::cout <<std::setw(10) << "Nombre" << std::setw(2) << ":" << nombre << std::endl;
    std::cout <<std::setw(10) << "Edad" << std::setw(2) << ":" << edad << std::endl;
    std::cout <<std::setw(10) << "Estatura" << std::setw(2) << ":" << estatura << "m" << std::endl;
    return 0;
}