/**
 * Escriba un programa que elimine de un fichero de texto todas las líneas en
 * blanco.
 */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "ERROR. El programa " << argv[0]
              << " usa <fichero_entrada.txt>" << std::endl;
    return -1;
  }

  std::ifstream entrada{argv[1]};

  if (!entrada.is_open()) {
    std::cerr << "Error al abrir el archivo " << argv[1]
              << " intentelo de nuevo" << std::endl;
    return -1;
  }

  std::ofstream salida{"archivo_de_salida.txt"};
  std::string cadena_a_eliminar{};
  std::string cadena_texto{};

  while(std::getline(entrada, cadena_texto)) {
    if(cadena_texto != cadena_a_eliminar) {
      salida << cadena_texto << std::endl;
    }
  }

  std::cout << "El proceso se ha llevado a cabo con exito" << std::endl;

  return 0;
}