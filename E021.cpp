/*E021 | for + string — contar vocales
Lee una palabra (sin espacios) y cuenta sus vocales
(a, e, i, o, u — mayúsculas y minúsculas).

  Traza antes de codificar: en "Electrodomestico" identifica
  cada vocal manualmente para verificar tu solución.
  E-l-e-c-t-r-o-d-o-m-e-s-t-i-c-o → E,e,o,o,e,i,o = 7 vocales

Entrada: Electrodomestico
Salida esperada:
  Vocales en "Electrodomestico": 7*/

#include <iostream>
#include <cctype>
#include <string>

int main() {
  std::string palabra;
  char letra;
  int cantidadVocales = 0; 

  std::cin >> palabra;

  for (int i = 0; i < palabra.length(); i++) {
    letra = tolower(palabra[i]);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
      cantidadVocales++;
    }
  }
  std::cout << "Vocales en " << palabra << ": " << cantidadVocales;

  return 0;
}