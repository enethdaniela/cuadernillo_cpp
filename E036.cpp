/*E036 | Función con string — invertir
Escribe string invertir(string s) que retorne la cadena
al revés, recorriendo el string de atrás hacia adelante.

Entrada: hola
Salida esperada:
  Original: hola
  Invertida: aloh*/

#include <iostream>
#include <string>

std::string invertir(std::string s) {
    std::string invertida;
    for (int i = s.length()-1; i >= 0; i--) {
        invertida += s[i];
    }
    return invertida;
}

int main() {
    std::string palabra;

    std::cin >> palabra;

    std::cout << "Original: " << palabra << '\n';
    std::cout << "Invertida: " << invertir(palabra) << '\n';

    return 0;
}
