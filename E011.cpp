/*E011 | if/else — positivo, negativo o cero
Lee un número entero e indica si es positivo, negativo o cero.

Entrada: -8
Salida esperada:
  El numero -8 es negativo.*/


#include <iostream>


int main(){
    int n;

    std::cin >> n;
    std::cout << "El numero " << n;

    if(n > 0) {
        std::cout << " es positivo.";
    }else if(n < 0) {
        std::cout << " es negativo.";
    }else{
        std::cout << " es cero";
    }
    
    return 0 ;
}