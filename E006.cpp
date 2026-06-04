/*E006 | string y saludo
Lee el nombre del usuario (una sola palabra) y salúdalo.

Entrada:
  Ana
Salida esperada:
  Hola, Ana! Bienvenido/a al sistema.*/

#include <iostream>


int main() {
    std::string nombre;
    std::cout << "Nombre: ";
    std::cin >> nombre;
    std::cout << "Hola " << nombre << "! Bienvenido/a al sistema.";
    return 0;

}