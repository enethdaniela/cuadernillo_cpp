/*E050 | String — longitud y mayúsculas
Lee una oración con getline.
Imprime su longitud y la convierte a mayúsculas.

Entrada:
  hola mundo desde cpp
Salida esperada:
  Longitud: 20
  En mayusculas: HOLA MUNDO DESDE CPP*/

#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string oracion;
    std::getline(std::cin, oracion);

    for (char &letra : oracion) {
        letra = std::toupper(letra);
    }

    std::cout << "Longitud: " << oracion.length() << '\n';
    std::cout << "En mayusculas: " << oracion << '\n';

    return 0;
}