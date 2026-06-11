/**
 * Escriba un programa que contenga una función que calcule y devuelva el área
 * de un triángulo equilátero dada la longitud L de uno de sus lados, usando la
 * fórmula L^2×(√3/4) . Utilice la función std::sqrt de la librería cmath y
 * compruebe que los resultados son iguales a los del ejercicio anterior.
 * (equilateral.cc)
 */

#include <cmath>
#include <iostream>

constexpr double kPi{3.1415926536};

/**
 * @brief Funcion que calcula el area de un rectangulo dado el lado haciendo uso
 * de la raíz cuadrada
 *
 * @param longitud Double que representa la longitud de un lado
 */
double CalculoDelAreaRaiz(double longitud) {
  return ((longitud * longitud) * (std::sqrt(3) / 4));
}

/**
 * @brief Funcion que calcula un área de un triangulo rectangulo dado el seno
 * pi/3
 *
 * @param longitud Longitud de uno de sus lados
 */
double CalculoDelAreaSeno(double longitud) {
  return ((longitud * longitud) * std::sin(kPi / 3) / 2);
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "ERROR El programa " << argv[0] << " usa <logitud>"
              << std::endl;
    return -1;
  }

  std::cout << "Area con la formula de la raiz: "
            << CalculoDelAreaRaiz(std::stod(argv[1])) << std::endl;
  std::cout << "Area con la formula del seno: "
            << CalculoDelAreaSeno(std::stod(argv[1])) << std::endl;

  return 0;
}