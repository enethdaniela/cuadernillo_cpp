/*E039 | Menú con funciones separadas
Crea un menú con 4 opciones usando funciones distintas:
  1. Área de rectángulo
  2. Área de triángulo
  3. Área de círculo
  4. Salir

Entrada:
  1
  5.0 3.0
  4
Salida esperada:
  === Calculadora de areas ===
  1. Rectangulo
  2. Triangulo
  3. Circulo
  4. Salir
  Opcion: Base: 5.00  Altura: 3.00 -> Area: 15.00
  === Calculadora de areas ===
  1. Rectangulo
  2. Triangulo
  3. Circulo
  4. Salir
  Opcion: Hasta pronto.*/

#include <iostream>
#include <cmath>
#include <iomanip>

void areaRectangulo() {
    double base, altura;
    std::cin >> base >> altura;
    std::cout << "Base: " << base << " Altura: " << altura << " -> Area: " << base * altura << '\n';
}

void areaTriangulo() {
    double base, altura;
    std::cin >> base >> altura;
    std::cout << "Base: " << base << " Altura: " << altura << " -> Area: " << (base * altura) / 2 << '\n';
}


void areaCirculo() {
    double radio;
    std::cin >> radio;
    std::cout << "Radio: " << radio << " -> Area: " << M_PI * (radio * radio) << '\n';
}

void salir(){
    std::cout << "Hasta pronto\n";
}

int main() {
    int opcion;

    do {
        std::cout << " === Calculadora de areas ===\n";
        std::cout << "1. Rectangulo\n";
        std::cout << "2. Triangulo\n";
        std::cout << "3. Circulo\n";
        std::cout << "4. Salir\n";

        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
            areaRectangulo();
         break;
        case 2:
            areaTriangulo();
            break;
        case 3:
            areaCirculo();
            break;
        case 4:
            salir();
            break;
        default:
            std::cout << "Opcion invalida\n"; 
            break;
        }
    } while (opcion != 4);
    return 0;
}