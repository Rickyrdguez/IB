/**
 * Escribe un programa que lea una letra y que indique si es una letra mayúscula
 * o minúscula, y que también indique si es una vocal o una consonante. Aquí,
 * asume que las vocales son 'a', 'e', 'i', 'o' y 'u', y sus correspondientes
 * letras mayúsculas.
 *
 * Entrada
 * La entrada consiste en una letra.
 *
 * Salida
 * Indica si la letra es mayúscula o minúscula, y también si es una vocal o una
 * consonante. Sigue el formato de los ejemplos.
 */

#include <iostream>

/**
 * @brief Comprueba si es vocal
 *
 * @param caracter Caracter a comprobar
 */
bool EsVocal(char caracter) {
  return caracter == 'a' || caracter == 'e' || caracter == 'i' ||
         caracter == 'o' || caracter == 'u' || caracter == 'A' ||
         caracter == 'E' || caracter == 'I' || caracter == 'O' ||
         caracter == 'U';
}

/**
 * @brief Comprueba si es mayúscula o mínuscula
 *
 * @param caracter Caracter a comprobar
 */
bool EsMinuscula(char caracter) {
  int letra{static_cast<int>(caracter)};

  return (letra >= 97 && letra <= 122);
}

int main() {
  char caracter;

  std::cin >> caracter;

  if (!EsMinuscula(caracter)) {
    std::cout << "uppercase" << std::endl;
  } else {
    std::cout << "lowercase" << std::endl;
  }

  if (!EsVocal(caracter)) {
    std::cout << "consonant" << std::endl;
  } else {
    std::cout << "vowel" << std::endl;
  }

  return 0;
}
