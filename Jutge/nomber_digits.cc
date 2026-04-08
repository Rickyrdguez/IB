/**
 * Programa que que lee un número y dice la cantidad de numeros que hay en el
 */

#include <iostream>
#include <string>

/**
 * @brief Programa que dado número n cuenta todos los números que hay dentro de
 * él
 *
 * @param numero Cadena de número a contar
 */

void ContarNumeros(std::string numero) {
  int contador{0};

  for (char caracter : numero) {
    ++contador;
  }

  std::cout << "The number of digits of " << numero << " is " << contador << "."
            << std::endl;
}

int main() {
  std::string numero;

  std::cin >> numero;

  ContarNumeros(numero);

  return 0;
}