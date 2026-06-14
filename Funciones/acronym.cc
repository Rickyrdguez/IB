/**
 * Escriba un programa que imprima por pantalla el acronimo de una frase (
 * mayusculas de las palabras)
 */

#include <cctype>
#include <iostream>
#include <string>

/**
 * @brief Funcion que escribe el acronimo 
 *
 * @param cadena Cadena a comprobar si es mayuscula
 */
void Acronym(std::string cadena) {
  for (char caracteres : cadena) {
    if (isupper(caracteres)) {
      std::cout << caracteres;
    }
  }
}

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "ERROR el programa " << argv[0] << " usa minimo una palabra"
              << std::endl;
    return -1;
  }

  for(int i{1}; i < argc; ++i) {
    Acronym(argv[i]);
  }

  std::cout << std::endl;

  return 0;
}