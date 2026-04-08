/**
 * Programa que recibe dos numeros positivos y calcula el máximo comun divisor
 * de entre ellos
 */

#include <iostream>

/**
 * @brief Funcion que intercambia valores
 *
 * @param numeroA Primer numero
 * @param numeroB Segundo Numero
 */
void CambiarValores(int& numeroA, int& numeroB) {
  int variable_auxiliar;

  variable_auxiliar = numeroA;
  numeroA = numeroB;
  numeroB = variable_auxiliar;
}

/**
 * @brief Funcion que calcula el MCD usando el algoritmo de euclides
 *
 * @param numeroA Primer numero
 * @param numeroB Segundo numero
 */
int CalcularElMCD(int& numeroA, int& numeroB) {
  if (numeroB > numeroA) {
    CambiarValores(numeroA, numeroB);
  }

  while (numeroB != 0) {
    int resto{0};

    resto = numeroA % numeroB;

    CambiarValores(numeroB, numeroA);
    numeroB = resto;
  }

  return numeroA;
}

int main() {
  int numeroA, numeroB;
  int mcd;

  std::cin >> numeroA;
  std::cin >> numeroB;

  std::cout << "The gcd of " << numeroA << " and " << numeroB << " is "
            << CalcularElMCD(numeroA, numeroB) << "." << std::endl;

  return 0;
}