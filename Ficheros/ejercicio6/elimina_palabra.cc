/**
 * Desarrolle un programa que tome como parámetros por línea de comandos el
 * nombre de un fichero de texto y una palabra. El programa deberá modificar el
 * fichero de texto, borrando del mismo todas las apariciones de dicha palabra.
 */
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "ERROR. El programa " << argv[0]
              << " usa <fichero.txt> <palabra>" << std::endl;
    return -1;
  }

  std::ifstream entrada{argv[1]};

  if (!entrada.is_open()) {
    std::cerr << "Error al abrir el archivo " << argv[1]
              << " inténtelo de nuevo" << std::endl;
              return -1;
  }
  std::string palabra{argv[2]};
  std::string cadena_a_mostrar{};

  while (entrada >> cadena_a_mostrar) {
    if (cadena_a_mostrar != palabra) {
      std::cout << cadena_a_mostrar << " ";
    }
  }

  return 0;
}