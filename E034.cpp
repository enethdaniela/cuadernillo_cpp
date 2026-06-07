/*E034 | Valor por defecto
Escribe void imprimirLinea(int n = 20, char c = '-')
que imprima n repeticiones del caracter c.
Llámala de 3 formas: sin args, con n=10, con n=5 y c='*'.

Entrada: (ninguna)
Salida esperada:
  --------------------
  ----------
  ******/

#include <iostream>

void imprimirLinea(int n = 20, char c = '-') {
    for (int i = 0; i < n; i++) {
        std::cout << c;
    }
    std::cout << std::endl;
}

int main() {
    imprimirLinea();
    imprimirLinea(10);
    imprimirLinea(5, '*');

    return 0;
}