/*E040 | Integración nivel 2 — calculadora de múltiples usos
Crea un programa que use SOLO funciones (sin arreglos).
Implementa:
  double calcularPromedio3(double a, double b, double c)
  double calcularAreaRectangulo(double base, double altura)
  bool esMayorDeEdad(int edad)
  string clasificarEdad(int edad)
    → "Niño" (<12), "Adolescente" (12-17), "Adulto" (18+)

En main lee los datos y llama a cada función mostrando resultados.

Entrada:
  80.0 90.0 85.0
  6.0 4.0
  20
Salida esperada:
  Promedio de notas: 85.00
  Area del rectangulo: 24.00
  Edad 20: Adulto (mayor de edad)*/

#include <iostream>
#include <iomanip>

double calcularPromedio3(double a, double b, double c) {
    return (a + b + c) / 3;
}

double calcularAreaRectangulo(double base, double altura) {
    return base * altura;
}

bool esMayorDeEdad(int edad) {
    return edad >= 18;
}

std::string clasificarEdad(int edad) {
    if(esMayorDeEdad) {
        return "Adulto (mayor de edad)\n";
    } else if (edad >= 12) {
        return "Adolescente\n";
    } else if (edad >= 0) {
        return "Nino\n";
    }else {
        return "Edad invalida\n";
    }
}

int main() {
    double a, b, c;
    double base, altura;
    int edad;

    std::cin >> a >> b >> c;
    std::cin >> base >> altura;
    std::cin >> edad;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Promedio de notas: " << calcularPromedio3(a, b, c) << '\n';
    std::cout << "Area del rectangulo " << calcularAreaRectangulo(base, altura) << '\n';
    std::cout << "Edad: " << clasificarEdad(edad) << '\n';

    return 0;
}



