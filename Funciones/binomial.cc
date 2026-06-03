/**
 * Desarrolle en C++ un programa que reciba como entrada dos valores enteros n≥0
 * y k>0 y calcule el coeficiente binomial de los mismos, según la fórmula
 */

#include <iostream>

/**
 * @brief Comprueba que el numero_n y el numero_k sean mayores que 0
 *
 * @param numero_n
 * @param numero_k
 */
bool ComprobarNumeros(int numero_n, int numero_k) {
  if (numero_n < 0 || numero_k <= 0) {
    return false;
  }
  return true;
}

/**
 * @brief Funcion que intercambia valores
 *
 * @param numero_n
 * @param numero_k
 */
void IntercambioNumeros(int& numero_n, int& numero_k) {
  int aux = numero_n;

  numero_n = numero_k;
  numero_k = aux;
}

/**
 * @brief Funcion que comprueba que el primer numero introducido sea mayor que
 * el segundo
 *
 * @param numero_n
 * @param numero_k
 */
bool CualMayor(int numero_n, int numero_k) {
  if (numero_n < numero_k) {
    return false;
  }
  return true;
}

/**
 * @brief Funcion que calcula el factorail de un numero
 *
 * @param numero Numero a calcular el factorial
 */
int Factorial(int numero) {
  if (numero == 0) {
    return 1;
  }
  return numero * Factorial(numero - 1);
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "ERROR el programa usa <numero_n> <numero_k>" << std::endl;
    return -1;
  }

  int numero_n = atoi(argv[1]);
  int numero_k = atoi(argv[2]);

  if (!ComprobarNumeros(numero_n, numero_k)) {
    std::cout << "Error, el numero_n debe de ser >= 0 y el k > 0" << std::endl;
    return -1;
  }

  if (!CualMayor(numero_n, numero_k)) {
    IntercambioNumeros(numero_n, numero_k);
  }

  int coeficiente_binomial =
      Factorial(numero_n) /
      (Factorial(numero_k) * (Factorial(numero_n - numero_k)));

  std::cout << coeficiente_binomial << std::endl;

  return 0;
}