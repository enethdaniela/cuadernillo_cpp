/*E045 | Arreglo de strings numerado
Lee N nombres e imprímelos numerados.

Entrada:
  3
  Ana Luis Carla
Salida esperada:
  1. Ana
  2. Luis
  3. Carla*/

#include <iostream>
#include <vector>

void nombresNumerados(std::vector<std::string>& arreglo) {
    for (int i = 0; i < arreglo.size(); i++) {
        std::cout << i + 1 << ". " << arreglo[i] << '\n';
    }
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> nombres(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nombres[i];
    }

    nombresNumerados(nombres);

    return 0;
}