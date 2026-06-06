/*E025 | do-while — validación de entrada
Pide una nota entre 0 y 100.
Si está fuera de rango, vuelve a pedir.
Cuando sea válida, imprime "Nota aceptada: X".

Entrada: -5  110  85
Salida esperada:
  Ingrese nota (0-100): Valor invalido. Intente de nuevo.
  Ingrese nota (0-100): Valor invalido. Intente de nuevo.
  Ingrese nota (0-100): Nota aceptada: 85*/

#include <iostream>

int main() {
  double nota;
  bool esInvalida;

  do {
    std::cout << "Ingrese nota (0-100): ";
    std::cin >> nota;
    
    esInvalida = (nota > 100 || nota < 0);

    if (esInvalida) {
      std::cout << "Valor invalido. Intente de nuevo.\n";
    }

  } while (esInvalida);
  
  std::cout << "Nota aceptada : " << nota << '\n';

  return 0;
}