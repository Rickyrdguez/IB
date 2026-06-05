/**
 * Escriba un programa que obtenga un valor real base y un valor entero
 * exponente y calcule su potencia mediante un bucle, sin utilizar la función
 * std::pow.
 */

#include <iostream>

/**
 * @brief Función encargada de calcular la potencia
 *
 * @param base double que representa la base
 * @param exponente int que representa el exponente de la potencia
 */
double CalculoDePotencia(double base, int exponente) {
  double resultado{1.0};

  if (exponente == 0) {
    resultado;
  } else if (exponente > 0) {
    for (int i{1}; i <= exponente; ++i) {
      resultado *= base;
    }
  } else {
    for (int i{-1}; i >= exponente; --i) {
      resultado *= 1/base;
    }
  }
  return resultado;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "ERROR. El programa " << argv[0] << "usa <base> <exponente>"
              << std::endl;
    return -1;
  }

  std::cout << CalculoDePotencia(std::stod(argv[1]), atoi(argv[2]))
            << std::endl;

  return 0;
}
