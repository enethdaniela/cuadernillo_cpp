/*E012 | if/else anidado — calificación por letra
Lee la nota de un estudiante (0-100) e imprime su letra:
  90-100 → A    80-89 → B    70-79 → C
  60-69  → D    0-59  → F

Entrada: 85
Salida esperada:
  Nota: 85 -> Calificacion: B*/

#include <iostream>

int main() {
    int calificacion;

    std::cin >> calificacion;
    std::cout << "Nota: " << calificacion << "-> Calificacion: ";

    if(calificacion >= 90) {
        std::cout << "A";
    }else if (calificacion >= 80) {
        std::cout << "B";
    }else if (calificacion >= 70) {
        std::cout << "C";
    }else if (calificacion >= 60) {
        std::cout << "D";
    }else {
        std::cout << "F";
    }

    return 0;
}