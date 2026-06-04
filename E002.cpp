/*E002 | Variables enteras y operadores
Declara dos variables enteras: a = 15 y b = 7.
Calcula e imprime su suma, resta, producto y cociente entero.

Entrada: (ninguna)
Salida esperada:
  Suma: 22
  Resta: 8
  Producto: 105
  Cociente: 2*/

#include <iostream>

int main(){
    int a = 15;
    int b = 7;
    //suma
    std::cout << "Suma: " << a + b << std::endl;
    std::cout << "Resta: " << a - b << std::endl;
    std::cout << "Producto: " << a * b << std::endl;
    std::cout << "Cociente: " << a / b << std::endl;

    return 0;

}