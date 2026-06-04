/*E009 | Promedio de tres números
Lee tres enteros e imprime su promedio con 2 decimales.
Recuerda: para obtener decimal, usa (double) al dividir.

Entrada:
  10
  7
  15
Salida esperada:
  Promedio: 10.67*/

#include <iostream>
#include <iomanip>

int main(){
    double a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Promedio: " << (a + b + c) / 3;
    return 0;

}