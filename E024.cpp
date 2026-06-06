/*E024 | do-while — menú interactivo
Muestra un menú repetidamente hasta que el usuario elija salir.
  1. Saludar   → imprime "Hola!"
  2. Despedirse → imprime "Hasta luego!"
  3. Salir     → termina

Entrada: 1  2  3
Salida esperada:
  === Menu ===
  1. Saludar
  2. Despedirse
  3. Salir
  Opcion: Hola!
  === Menu ===
  1. Saludar
  2. Despedirse
  3. Salir
  Opcion: Hasta luego!
  === Menu ===
  1. Saludar
  2. Despedirse
  3. Salir
  Opcion: Programa terminado.*/

#include <iostream>

int main() {
  int respuesta;

  do {
    std::cout << "=== Menu ===\n";
    std::cout << "1. Saludar\n";
    std::cout << "2. Despedirse\n";
    std::cout << "3. Salir\n";
    std::cout << "Opcion : ";
    std::cin >> respuesta;

    switch (respuesta)
    {
    case 1:
      std::cout << "Hola\n";
      break;
    case 2:
      std::cout << "Hasta luego\n";
      break;
    case 3:
      std::cout << "Programa terminado\n";
      break;
    
    default:
      std::cout << "Opcion inavlida\n";
      break;
    }
    
    
  } while (respuesta != 3);
  
  return 0; 
}