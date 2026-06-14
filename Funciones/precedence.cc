/**
 * Escriba un programa que, dadas dos cadenas de caracteres, determine cuál de
 * ellas precede alfabéticamente a la otra - es decir, cuál aparecería antes en
 * un diccionario.
 */

#include <cctype>
#include <iostream>
#include <string>

/**
 * @brief Funcion que cambia la cadena completa a minuscula 
 *
 * @param palabra String a cambiar a minuscula
 */
std::string CambioAMinuscula(std::string palabra) {
  for (int i{0}; i < palabra.size(); ++i) {
    palabra[i] = tolower(palabra[i]);
  }
  return palabra;
}

/**
 * @brief Funcion que se encarga de pasar las cadenas a codigo ASCII y compara
 * el orden alfabetico
 *
 * @param palabra1 String con la primera palabra
 * @param palabra2 String con la segunda palabra
 */
void CualPrimero(std::string palabra1, std::string palabra2) {
  palabra1 = CambioAMinuscula(palabra1);
  palabra2 = CambioAMinuscula(palabra2);
  bool cambio = false;

  for (int i{0}; i < std::min(palabra1.size(), palabra2.size()); ++i) {
    if (static_cast<int>(palabra1[i]) < static_cast<int>(palabra2[i])) {
      cambio = true;
      std::cout << palabra1;
      break;
    } else if (static_cast<int>(palabra2[i]) < static_cast<int>(palabra1[i])) {
      cambio = true;
      std::cout << palabra2;
      break;
    }
  }

  if (cambio == false) {
    if (palabra1.size() < palabra2.size()) {
      std::cout << palabra1;
    } else {
      std::cout << palabra2;
    }
  }
  std::cout << std::endl;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "ERROR el programa " << argv[0] << " usa <palabra1> <palabra2>"
              << std::endl;
    return -1;
  }

  CualPrimero(argv[1], argv[2]);

  return 0;
}