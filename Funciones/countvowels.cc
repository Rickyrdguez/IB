/**
 * Escriba una función CountVowels que reciba como parámetro una cadena de
 * caracteres y devuelva el número de vocales que ésta contiene. Use la función
 * en un programa y compruebe su correcto funcionamiento con varias cadenas
 */

#include <iostream>
#include <string>

/**
 * @brief Comprobar si es vocal
 * @param caracter Caracter a comprobar
 * @return true si es verdadero
 */
bool IsVowel(char caracter) {
  return caracter == 'A' || caracter == 'E' || caracter == 'I' ||
         caracter == 'O' || caracter == 'U' || caracter == 'a' ||
         caracter == 'e' || caracter == 'i' || caracter == 'o' ||
         caracter == 'u';
}

/**
 * @brief Cuenta el número de carácteres en una cadena
 *
 * @param palabra Palabra a contar las letras
 */
int CountVowels(std::string palabra) {
  int contador{0};

  for (char& caracter : palabra) {
   if(IsVowel(caracter)) {
    ++contador;
   }
  }
  return contador;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    return -1;
  }

  std::cout << CountVowels(argv[1]) << std::endl;

  return 0;
}