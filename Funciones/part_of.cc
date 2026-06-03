/**
 * Escriba un programa que, dadas dos cadenas, determine si la segunda de ellas
 * es una subcadena de la primera (es decir, forma parte de ella)
 */

#include <iostream>
#include <string>

/**
 * @brief Funcion que comprueba que la cadenaB sea menor que la cadenaA
 *
 * @param cadena_a Primera cadena recibida
 * @param cadena_b Segunda cadena recibida
 */
bool ComprobarTamanios(std::string cadena_a, std::string cadena_b) {
  if (cadena_a.size() < cadena_b.size()) {
    return false;
  }
  return true;
}

/**
 * @brief Funcion encargada de comprobar que la cadenaB pertenezca a candenaA
 *
 * @param cadena_a Primera cadena recibida
 * @param cadena_b Segunda cadena recibida
 */
void ComprobarSubcadena(std::string cadena_a, std::string cadena_b) {
  bool subcadena = false;

  for (int i{0}; i < cadena_a.size(); ++i) {
    bool encontrado = true;
    for (int j{0}; j < cadena_b.size(); ++j) {
      if (cadena_a[i + j] != cadena_b[j]) {
        encontrado = false;
        break;
      } else {
      }
    }
    if(encontrado == true) {
      std::cout << "Yes" << std::endl;
      return;
    }
  }
  std::cout << "No" << std::endl;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "ERROR el programa " << argv[0] << " usa <cadena_a> <cadena_b>"
              << std::endl;
    return -1;
  }

  ComprobarSubcadena(argv[1], argv[2]);

  return 0;
}