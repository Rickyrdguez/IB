/**
 * Escribe un programa que reciba un número y devuelva el binario pero en orden
 * inverso
 */

#include <iostream>
#include <vector>

/**
 * @brief Funcion que calcule el número binario
 *
 * @param numero Numero a transformar
 */
void NumeroBinario(int numero) {
  while (numero > 0) {
    std::cout << numero % 2;

    numero = numero / 2;
  }

  std::cout << std::endl;
}

int main() {
  int numero;

  std::cin >> numero;

  if(numero == 0) {
    std::cout << numero << std::endl;
  } else {
    NumeroBinario(numero);
  }

  return 0;
}