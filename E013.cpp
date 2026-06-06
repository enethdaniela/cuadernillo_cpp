/*E013 | switch — nombre del mes
Lee un número de mes (1-12) e imprime su nombre.
Si está fuera de rango, imprime "Mes invalido".

Entrada: 7
Salida esperada:
  Mes 7: Julio*/

#include <iostream>

int main() {
  int mes;

  std::cin >> mes;

  switch (mes){
  case 1:
    std::cout << "Mes " << mes << ": Enero";
    break;
  case 2:
    std::cout << "Mes " << mes << ": Febrero";
    break;
  case 3:
    std::cout << "Mes " << mes << ": Marzo";
    break;
  case 4:
    std::cout << "Mes " << mes << ": Abril";
    break;
  case 5:
    std::cout << "Mes " << mes << ": Mayo";
    break;
  case 6:
    std::cout << "Mes " << mes << ": Junio";
    break;
  case 7:
    std::cout << "Mes " << mes << ": Julio";
    break;
  case 8:
    std::cout << "Mes " << mes << ": Agosto";
    break;
  case 9:
    std::cout << "Mes " << mes << ": Septiembre";
    break;
  case 10:
    std::cout << "Mes " << mes << ": Octubre";
    break;
  case 11:
    std::cout << "Mes " << mes << ": Noviembre";
    break;
  case 12:
    std::cout << "Mes " << mes << ": Diciembre";
    break;

  default:
    std::cout << "Mes invalido";
    break;
  }

  return 0;
}