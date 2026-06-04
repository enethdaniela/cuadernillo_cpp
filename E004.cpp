/*E004 | double y formato decimal
Lee el precio unitario de un producto y la cantidad comprada.
Imprime el total con 2 decimales.

Entrada:
  4.50
  3
Salida esperada:
  Total a pagar: $13.50*/

#include <iostream>
#include <iomanip>

int main(){
    double precioUnitario;
    int cantidad;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Precio: ";
    std::cin >> precioUnitario;
    std::cout << "Cantidad: ";
    std::cin >> cantidad;
    std::cout << "Total a pagar: $" << precioUnitario * cantidad;

    return 0;
}