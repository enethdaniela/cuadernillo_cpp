/*E031 | Función con múltiples salidas por referencia
Escribe:
  void calcularCirculo(double radio, double &area, double &per)
que calcule y asigne área y perímetro. PI = 3.14159.
En main lee el radio y muestra los resultados.

Entrada: 7.0
Salida esperada:
  Radio: 7.00
  Area: 153.94
  Perimetro: 43.98*/

#include <iostream>
#include <iomanip>

void calcularCirculo(double radio, double &area, double &per) {
    double PI = 3.141559;
    
    area = PI * radio * radio;
    per = 2 * PI * radio;
}

int main() {
    double radio, area, per;
   
    std::cin >> radio;

    calcularCirculo(radio, area, per);

    std::cout << std::fixed << std::setprecision(2);    
    std::cout << "Radio: " << radio << '\n';
    std::cout << "Area: " << area << '\n';
    std::cout << "Perimetro: " << per << '\n';

    return 0;
}