/**
 * Programa que recibe n números y calcula la media de estos
 */

#include <iostream>
#include <iomanip>

int main() {
  double numero;
  double suma{0};
  int contador{0};

  while (std::cin >> numero) {
    suma += numero;
    ++contador;
  }

  if (contador > 0) {
    double media = suma / contador;
    std::cout << std::fixed << std::setprecision(2) << media << std::endl;
  }

  return 0;
}