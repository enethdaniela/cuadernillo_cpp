/*E026 | Función void sin retorno
Escribe void saludar(string nombre) que imprima:
"Hola, [nombre]! Bienvenido al sistema."
Llámala con el nombre leído del teclado.

Entrada: Carla
Salida esperada:
  Hola, Carla! Bienvenido al sistema.*/

#include <iostream>

void saludar(std::string nombre) {
    std::cout << "Hola, " << nombre << "! Bienvenido al sistema.\n";
}

int main() {
    std::string nombre;
    std::cin >> nombre;
    saludar(nombre);

    return 0;
}