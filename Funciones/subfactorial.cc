/**
 * Resumen del enunciado
 * ¿Qué es el subfactorial !n?
 *
 * Es el número de desarreglos de un conjunto de n elementos: permutaciones en
 * las que **ningún elemento queda en su posición original. Ejemplo con n=4: de
 * las 24 permutaciones posibles, solo 9 son desarreglos válidos (ningún dígito
 * en su sitio original).
 */
#include <cmath>
#include <iostream>

/**
 * @brief funcion que calcula el factorial de un número
 *
 * @param numero Entero a calcular el factorial
 */
double CalcularElFactorial(const int numero) {
  if (numero == 0) {
    return 1.0;
  }
  return numero * CalcularElFactorial(numero - 1);
}

/**
 * @brief Funcion que calcula el valor de -1^i
 *
 * @param exponente Entero que representa el exponente
 */
int ComprobarElevadoMenosUno(const int exponente) {
  if (exponente % 2 == 0) {
    return 1;
  }
  return -1;
}

/**
 * @brief Funcion que calcula el subfactorial haciendo uso de
 * CalcularELFactorail y ComprobarElevadoAMenosUno
 *
 * @param numero Entero a calcular el subfactorial
 */
double CalcularSubfactorial(const int numero) {
  double resultado{0};

  for (int i{0}; i <= numero; ++i) {
    resultado += (ComprobarElevadoMenosUno(i) * CalcularElFactorial(numero) /
                  CalcularElFactorial(i));
  }

  return resultado;
}

/**
 * @brief Función que calcula el valor aproximado usando la formula n!/e
 *
 * @param numero Entero para comprobar el resultado
 */
void ComprobarSubfactorial(const int numero) {
  constexpr double numero_e{2.71828182846};

  std::cout << "El valor aproximado con n!/e = "
            << std::round((CalcularElFactorial(numero) / numero_e))
            << std::endl;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "ERROR. El programa " << argv[0] << " usa <numero_entero>"
              << std::endl;
    return -1;
  }

  int numero = std::stoi(argv[1]);

  std::cout << "El cálculo del subfactorial es: " << CalcularSubfactorial(numero) << std::endl;
  ComprobarSubfactorial(numero);

  return 0;
}