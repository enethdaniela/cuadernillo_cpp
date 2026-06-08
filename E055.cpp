/*E055 | Integración — ranking de estudiantes
Lee N estudiantes con nombre y 3 notas cada uno.
Calcula el promedio de cada uno.
Imprime el ranking ordenado de mayor a menor promedio.

Entrada:
  3
  Ana 80 90 85
  Luis 70 75 80
  Carla 95 88 92
Salida esperada:
  === Ranking de estudiantes ===
  1. Carla  - Promedio: 91.67
  2. Ana    - Promedio: 85.00
  3. Luis   - Promedio: 75.00*/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>

struct Estudiante {
    std::string nombre;
    double nota1, nota2, nota3;
    double promedio;
};

bool compararPorPromedio(const Estudiante& a, const Estudiante& b) {
    return a.promedio > b.promedio;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<Estudiante> lista(n);

    for (int i = 0; i < n; i++) {
        std::cin >> lista[i].nombre >> lista[i].nota1 >> lista[i].nota2 >> lista[i].nota3;
        lista[i].promedio = (lista[i].nota1 + lista[i].nota2 + lista[i].nota3) / 3;
    }

    std::sort(lista.begin(), lista.end(), compararPorPromedio);

    std::cout << "=== Ranking de estudiantes ===\n";
    std::cout << std::fixed << std::setprecision(2);

    for (int i = 0; i < n; i++) {
        std::cout << (i + 1) << ". " << lista[i].nombre << "  - Promedio: " << lista[i].promedio << '\n';
    }

    return 0;
}



