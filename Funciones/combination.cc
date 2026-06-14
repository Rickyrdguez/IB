/**
 * Escriba un programa que contenga una función que reciba dos cadenas en
 * formato std::string y devuelva su combinación, tomando una letra de cada una
 * alternativamente. Si las dos cadenas no tienen la misma longitud, la función
 * debe ignorar las letras sobrantes de la cadena más larga. 
 */

#include <algorithm>
#include <iostream>
#include <string>

/**
 * @brief Función encargada de comparar el tamaño de dos strings y de escribir
 * los carácteres de una misma posición de forma alterna
 *
 * @param palabra1 Primer string
 * @param palabra2 Segundo string
 */
std::string EscribirInicialesAlternas(const std::string& palabra1,
                                      const std::string& palabra2) {
  std::string resultado{};
  for (int i{0}; i < std::min(palabra1.size(), palabra2.size()); ++i) {
    resultado += palabra1[i];
    resultado += palabra2[i];
  }
  return resultado;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "ERROR El programa " << argv[0] << " usa <palabra1> <palabra2>"
              << std::endl;
    return -1;
  }

  std::cout << EscribirInicialesAlternas(argv[1], argv[2]) << std::endl;

  return 0;
}