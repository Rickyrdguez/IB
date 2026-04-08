/**
 * Write a program that reads several numbers and prints the sum of the digits
 * of each one.
 *
 * Input
 * Input consists of a sequence of natural numbers.
 *
 * Output
 * For every number, print the sum of its digits following the format of the
 * example.
 */

#include <iostream>
#include <string>

/**
 * @brief Funcion que calcula la suma de los digitos
 *
 * @param numeros String que representa los numeros
 */
void CalcularSuma(std::string numeros) {
  int resultado{0};
  int auxiliar;

  for (char caracters : numeros) {
    auxiliar = caracters - '0';

    resultado = resultado + auxiliar;
  }
  std::cout << "The sum of the digits of " << numeros << " is " << resultado
            << "." << std::endl;
}

int main() {
  std::string numeros;

  while(std::cin >> numeros) {
    CalcularSuma(numeros);
  }

  return 0;
}