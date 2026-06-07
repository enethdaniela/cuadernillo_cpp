/*E032 | Conversión de temperaturas con funciones
Escribe:
  double celsiusAFahrenheit(double c)
  double fahrenheitACelsius(double f)
  void mostrarConversion(double valor, char tipo)
    si tipo == 'C' convierte a F e imprime
    si tipo == 'F' convierte a C e imprime

Entrada:
  100.0
  C
Salida esperada:
  100.0 C equivale a 212.0 F*/

#include <iostream>
#include <iomanip>
#include <cctype>

double celsiusAFahrenheit(double c) {
    return (c * (9/5)) + 32; 
}

double fahrenheitACelsius(double f) {
    return (f - 32) * (5/9);
}

void mostrarConversion(double valor, char tipo) {
    std::cout << std::fixed << std::setprecision(1);
    if (tipo == 'C') {
        std::cout << valor << " C equivale a " << celsiusAFahrenheit(valor) << " F\n";
    }else if (tipo == 'F') {
        std::cout << valor << " F equivale a " << fahrenheitACelsius(valor) << " C\n";
    }else {
        std::cout << "Invalido.\n";
    }
}

int main() {
    double valor;
    char tipoProvisional, tipo;

    std::cin >> valor;
    std::cin >> tipoProvisional;

    tipo = std::toupper(tipoProvisional);

    mostrarConversion(valor, tipo);

    return 0;
}
