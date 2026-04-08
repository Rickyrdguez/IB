#include <iostream>
#include <string>

/**
 * @brief Función que cuenta el número de letras
 *
 * @param nombre Nombre introducido
 * @return numero de letras
 */
int ContarLetras(const std::string& nombre) {
  int contador{0};

  for (char caracter : nombre) {
    ++contador;
  }

  return contador;
}

int main() {
  std::string nombre1;
  std::string nombre2;

  std::cin >> nombre1;
  std::cin >> nombre2;

  if (nombre1 > nombre2) {
    std::cout << nombre1 << " > " << nombre2 << std::endl;
  } else if (nombre1 < nombre2) {
  std::cout << nombre1 << " < " << nombre2 << std::endl;
} else {
  std::cout << nombre1 << " = " << nombre2 << std::endl;
}

return 0;
}