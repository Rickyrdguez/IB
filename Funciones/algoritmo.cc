/**
 * Programa que actua como un logaritmo
 */

#include <cmath>
#include <iostream>

/**
 * @brief Funcion que actúa como un logaritmo
 *
 * @param base
 * @param argumento
 * @param precision
 */
double FuncionLogaritmo(double base, int argumento, double precision) {
  double resultado{0}, incremento{1};

  while (incremento > precision) {
    double potencia = std::pow(base, resultado + incremento);
    double resta = argumento - potencia;
    if (resta < 0) {
      incremento *= 0.5;
    } else {
      resultado += incremento;
    }
    if (resta < precision) {
      break;
    }
  }
  return resultado;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "ERROR. El programa: " << argv[0]
              << " usa <numero_base> <numero_argumento>" << std::endl;
    return -1;
  }

  constexpr double kPrecision{1e-9};

  std::cout << FuncionLogaritmo(std::stod(argv[1]), std::stod(argv[2]), kPrecision) << std::endl;

  return 0;
}