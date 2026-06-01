/**
 * Escribe un programa que dado unos numeros calcule y tenga como salida el
 * número de veces que le toma a dicho numero introducido en llegar a ser igual
 * a 1 siguiendo la secuencia de Collatz
 */

#include <iostream>

/**
 * @brief Funcion que comprueba si el numero es par o impar
 *
 * @param numero Numero a comprobar
 */
bool EsPar(int numero) {
  if (numero % 2 != 0) {
    return false;
  }
  return true;
}

/**
 * @brief Funcion que aplica la secuencia de Collatz
 *
 * @param numero Número a aplicar la secuencia
 */
void SecuenciaCollatz(int numero) {
  int contador{0};

  while (numero != 1) {
    if (EsPar(numero)) {
      numero = numero / 2;
      contador += 1;
    } else if (!EsPar(numero)) {
      numero = (numero * 3) + 1;
      contador += 1;
    }
  }

  std::cout << contador << std::endl;
}

int main() {
  int numero;

  while (std::cin >> numero) {
    SecuenciaCollatz(numero);
  }
  return 0;
}