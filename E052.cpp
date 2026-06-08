/*E052 | Palíndromo
Lee una palabra e indica si es palíndromo.
Un palíndromo se lee igual de izquierda a derecha que al revés.
Ignora diferencia entre mayúsculas y minúsculas.

  Ejemplos: "reconocer", "Ana", "kayak"

Entrada: reconocer
Salida esperada:
  "reconocer" es palindromo.

Entrada alternativa: hola
Salida esperada:
  "hola" no es palindromo.*/

#include<iostream>
#include<string>
#include<algorithm>

void esPalidromoMejorado(const std::string& palabra){
    bool esPali = true;
    int i = 0;
    int j = palabra.size()-1;

    while(i < j){
        if(palabra[i] != palabra[j]){
            esPali = false;
            break;
        }
        i++;
        j--; 
    }
    if (esPali) {
        std::cout << '"' << palabra << '"' << " es palidromo" << '\n';
    }else {std::cout << '"' << palabra << '"' << " no es palidromo" << '\n';}
}

int main(){    
    std::string palabra;
    std::cin >> palabra;
    esPalidromoMejorado(palabra);

    return 0;
}