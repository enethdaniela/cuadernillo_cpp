/*E051 | Contar palabras en oración
Lee una oración con getline y cuenta las palabras
(separadas por espacios simples).

Entrada:
  el cielo es azul y bonito
Salida esperada:
  Palabras: 6*/

#include <iostream>
#include <string>

int main() {
    std::string oracion;
    int contador = 1;
    std::getline(std::cin, oracion);

    if(oracion.empty()) {
        std::cout << "Palabras: 0\n";
        return 0;
    }

    for (char letra : oracion) {
        if (letra == ' ') {
            contador++;
        }
    }

    std::cout << "Palabras: " << contador << '\n';

    return 0;
}
