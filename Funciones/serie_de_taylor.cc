/**
 * Este programa implementa la aproximacion de las funciones seno y coseno
 * mediante las series de Taylor.
 */

#include <cmath>
#include <iostream>

/**
 * @brief Devuelve el reciproco del factorial de un numero.
 *
 * @param numero Numero entero no negativo del que calcular 1/n!
 * @return El valor de 1/(numero!)
 */
double FactorialReciproco(int numero) {
  double factorial{1};

  for (int i{1}; i <= numero; ++i) {
    factorial *= i;
  }
  return 1.0 / factorial;
}

/**
 * @brief Devuelve 1 si el numero es par y -1 si es impar.
 *
 * @param numero Numero entero a comprobar
 * @return 1 si numero es par, -1 si es impar
 */
int Signo(int numero) {
  if (numero % 2 == 0) {
    return 1;
  } else {
    return -1;
  }
}

/**
 * @brief Calcula la potencia de una base entera elevada a un exponente entero.
 *
 * @param base    Base de la potencia
 * @param exponente Exponente no negativo
 * @return base elevada a exponente
 */
double Potencia(double base, int exponente) {
  double resultado{1.0};

  for (int i{0}; i < exponente; ++i) {
    resultado *= base;
  }
  return resultado;
}

/**
 * @brief Aproxima el seno de x usando los primeros m terminos de su serie
 *        de Taylor: sin(x) = x - x^3/3! + x^5/5! - ...
 *
 * @param x Punto en el que evaluar el seno
 * @param m Numero de terminos a usar en la aproximacion
 * @return Aproximacion de sin(x)
 */
double SenoAprox(double x, int m) {
  double suma_aproximada{0.0};

  for (int i{0}; i < m; ++i) {
    int exponente = 2 * i + 1;
    double termino = Signo(i) * Potencia(x, exponente) *
                     FactorialReciproco(exponente);
    suma_aproximada += termino;
  }
  return suma_aproximada;
}

/**
 * @brief Aproxima el coseno de x usando los primeros m terminos de su serie
 *        de Taylor: cos(x) = 1 - x^2/2! + x^4/4! - ...
 *
 * @param x Punto en el que evaluar el coseno 
 * @param m Numero de terminos a usar en la aproximacion
 * @return Aproximacion de cos(x)
 */
double CosenoAprox(double x, int m) {
  double suma_aproximada{0.0};

  for (int i{0}; i < m; ++i) {
    int exponente = 2 * i;
    double termino = Signo(i) * Potencia(x, exponente) *
                     FactorialReciproco(exponente);
    suma_aproximada += termino;
  }
  return suma_aproximada;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cout << "ERROR. El programa " << argv[0]
              << " usa <x> <m>" << std::endl;
    return 1;
  }

  double x = std::stod(argv[1]);
  int m = std::stoi(argv[2]);

  std::cout << "El seno usando serie de Taylor es: "
            << SenoAprox(x, m) << std::endl;
  std::cout << "El seno usando la funcion seno de cmath es: "
            << std::sin(x) << std::endl;
  std::cout << "La diferencia absoluta es: "
            << std::abs(std::sin(x) - SenoAprox(x, m)) << std::endl;

  std::cout << "El coseno usando serie de Taylor es: "
            << CosenoAprox(x, m) << std::endl;
  std::cout << "El coseno usando la funcion coseno de cmath es: "
            << std::cos(x) << std::endl;
  std::cout << "La diferencia absoluta es: "
            << std::abs(std::cos(x) - CosenoAprox(x, m)) << std::endl;

  return 0;
}