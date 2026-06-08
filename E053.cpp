/*E053 | Arreglos paralelos — mejor estudiante
Lee N, luego N nombres (uno por línea) y N notas en arreglos
paralelos. Imprime el nombre y nota del mejor estudiante.

  Nota: lee cada nombre con cin >> nombre (separado por espacio
  o salto de línea — cin ignora ambos automáticamente).

Entrada:
  4
  Ana
  Luis
  Carla
  Pedro
  85 92 78 88
Salida esperada:
  Mejor estudiante: Luis con nota 92.00*/

#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n, IndiceMejorNota;
    double mejorNota = 0;
    std::cin >> n;
    std::vector<std::string> nombres(n);
    std::vector<double> notas(n);

    for (int i = 0; i < n; i++) {
        std::cin >> nombres[i];
    }

    for (int i = 0; i < n; i++) {
        std::cin >> notas[i];
        if (notas[i] > mejorNota) {
            mejorNota = notas[i];
            IndiceMejorNota = i;
        }
    }
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Mejor estudiante: " << nombres[IndiceMejorNota] << " con nota " << mejorNota << '\n';

    return 0;
}