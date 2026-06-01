/**
 * La función std::stoi convierte una cadena de caracteres en formato
 * std::string al valor entero que representa. Escriba un programa que
 * implemente su propia versión de esta función, asumiendo que la entrada sólo
 * contendrá dígitos numéricos y mostrando un mensaje de error si no es así.
 */

#include <iostream>
#include <string>

/**
 * @brief Asiganmos que es un número
 */
bool EsNumero() {
  return '0' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9';
}

/**
 * @brief Comprobar que la cadena solo contiene números
 *
 * @param cadena Cadena de carácteres
 */
bool SoloNumeros(std::string cadena) {
  for (char caracteres : cadena) {
    if (caracteres != EsNumero()) {
      std::cerr << "ERROR, el programa solo usa cadenas de números"
                << std::endl;
      return false;
    }
  }
  return true;
}

/**
 * @brief Funcion que pasa de un string de números a su valor real
 *
 * @param cadena Cadena de números
 */
int Stoi(std::string cadena) {
  int resultado{0};

  for (char caracteres : cadena) {
    resultado = caracteres - '0';
  }

  return resultado;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Error el programa " << argv[0] << " usa <string_de_numeros>"
              << std::endl;
    return -1;
  }

  if (!SoloNumeros) {
    exit(EXIT_FAILURE);
  }

  std::cout << Stoi(argv[1]) << std::endl;

  return 0;
}
