/*E005 | Módulo y paridad
Lee un número entero. Calcula su módulo con 2 e imprime
si es par o impar. Usa if para el mensaje.

Entrada:
  14
Salida esperada:
  14 % 2 = 0
  El numero es par.

Entrada alternativa:
  7
Salida esperada:
  7 % 2 = 1
  El numero es impar.*/

#include <iostream>

int main(){
    int n;
    std::cout << "Numero: "; 
    std::cin >> n;

    std::cout << n << " % " << "2 = " << n % 2 << std::endl;
    if (n % 2 == 0) {
        
        std::cout << "El numero es par.";
    } else{
        
         std::cout << "El numero es impar.";
    }
        
    return 0;
}