/*E028 | Función con múltiples parámetros
Escribe double calcularIMC(double peso, double altura)
que retorne IMC = peso / (altura * altura).
Lee peso y altura e imprime el IMC con 2 decimales.

Entrada:
  70.0
  1.75
Salida esperada:
  IMC: 22.86
--------------*/

#include <iostream>
#include <iomanip>

double calcularIMC(double peso, double altura) {
    return peso / (altura * altura);
}

int main() {
    double peso, altura;

    std::cin >> peso;
    std::cin >> altura;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "IMC: " << calcularIMC(peso, altura) << '\n';

    return 0;
}