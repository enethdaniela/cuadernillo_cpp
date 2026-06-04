/*E003 | cin y cout
Lee dos números enteros desde el teclado e imprime su suma.

Entrada:
  12
  8
Salida esperada:
  La suma es: 20*/

#include <iostream>


int main(){
  int a, b;

    std::cout << "Numero entero: ";
    std::cin >> a;
    std::cout << "Numero entero: ";
    std::cin >> b;
    std::cout << "La suma es: " << a + b;
    return 0;

}