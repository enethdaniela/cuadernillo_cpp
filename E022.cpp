/*E022 | for — número primo
Lee un entero positivo e indica si es primo.
Un número primo solo es divisible entre 1 y él mismo.

Entrada: 17
Salida esperada:
  17 es primo.

Entrada alternativa: 12
Salida esperada:
  12 no es primo.*/

#include <iostream>
#include <cmath>

bool esPrimo(int n) {
    if (n <= 1){
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int numero;

    std::cout << "Ingresa un numero: ";
    std::cin >> numero;

    if (esPrimo(numero)) {
        std::cout << numero << " es primo.\n";
    } else {
        std::cout << numero << " no es primo.\n";
    }
    
    return 0;
}

  