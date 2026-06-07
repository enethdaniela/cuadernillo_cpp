/*E029 | Función booleana
Escribe bool esPrimo(int n) que retorne true si n es primo.
Úsala en main para imprimir todos los primos entre 1 y 50.

Entrada: (ninguna)
Salida esperada:
  Primos entre 1 y 50:
  2 3 5 7 11 13 17 19 23 29 31 37 41 43 47*/

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
    std::cout << "Primos entre 1 y 50: \n";
    
    for (int i = 1; i <= 50; i++) {
        if (esPrimo(i)) {
            std::cout << i << ' ';
        }
    }
    return 0;
}