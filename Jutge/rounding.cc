/**
 * programa que recibe un double y tiene como salida, ese numero, entero,
 * truncado hacia abajo, hacia arriba y redondeado
 */
#include <iostream>
#include <cassert>  

/**
 * @brief Funcion que trunca el numero hacia arriba
 *
 * @param numero Numero a truncar
 * @return int redondeado
 */
int TruncarArriba(const double numero) {
  int truncado_arriba;

  truncado_arriba = static_cast<int>(numero);

  if(numero > truncado_arriba) {
    return truncado_arriba + 1;
  }

  return truncado_arriba;
}

/**
 * @brief Funcion que trunca el numero hacia abajo
 *
 * @param numero Numero a truncar
 * @return int redondeado
 */
int TruncarAbajo(const double numero) {
  int truncado_abajo;

  truncado_abajo = static_cast<int>(numero);

  return truncado_abajo;
}

/**
 * @brief Funcion reondear
 *
 * @param numero Numero a redondear
 * @return int numero redondeado
 */
int Redondeo(double numero) {
  return static_cast<int> (numero + 0.5);
}

int main() {
  double numero;

  std::cin >> numero;

  assert(numero < 0.00);

  std::cout << TruncarAbajo(numero) << " " << TruncarArriba(numero) << " "
            << Redondeo(numero) << std::endl;

  return 0;
}