/*E033 | Sobrecarga — mayor de 2 y de 3 valores
Sobrecarga la función:
  double mayor(double a, double b)
  double mayor(double a, double b, double c)

Entrada:
  4.5 9.2
  3.1 7.8 5.5
Salida esperada:
  Mayor de 2: 9.20
  Mayor de 3: 7.80*/

#include <iostream>
#include <iomanip>

double mayor(double a, double b) {
    return a > b ? a : b;
}

double mayor(double a, double b, double c) {
    return mayor(mayor(a, b), c);
}

int main() {
    double a2, b2, a3, b3, c3;

    std::cin >> a2 >> b2;
    std::cin >> a3 >> b3 >> c3;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Mayor de 2: " << mayor(a2, b2) << '\n';
    std::cout << "Mayor de 3: " << mayor(a3, b3, c3) << '\n';

    return 0;
}