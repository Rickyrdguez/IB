/**
 * Escriba un programa que contenga una función que calcule y devuelva el área
 * de un triángulo equilátero dada la longitud L de uno de sus lados, usando la
 * fórmula L^2×sin(π/3)/2 . Utilice la función std::sin de la librería cmath.
 */
#include <cmath>
#include <iostream>

constexpr double kPi{3.1415926536};

/**
 * @brief Funcion que calcula un área de un triangulo rectangulo dado el seno pi/3
 * 
 * @param longitud Longitud de uno de sus lados
 */
double AreaDelTriangulo(double longitud) {
  return ((longitud * longitud) * std::sin(kPi / 3) / 2);
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "ERROR: El programa " << argv[0] << " usa <longitud>" << std::endl;
    return -1;
  }

  std::cout << AreaDelTriangulo(std::stod(argv[1])) << std::endl;

  return 0;
}