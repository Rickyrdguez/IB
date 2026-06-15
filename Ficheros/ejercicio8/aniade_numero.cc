/**
 * Desarrolle un programa que tome por línea de comandos los nombres de dos
 * ficheros de texto. El programa escribirá en el segundo fichero todas las
 * líneas del primero, pero añadiendo al principio de cada una de ellas el
 * número de la línea.
 */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "ERROR EL programa " << argv[0]
              << " usa <fichero_entrada.txt> fichero_salida.txt" << std::endl;
    return -1;
  }

  std::ifstream entrada{argv[1]};
  if (!entrada.is_open()) {
    std::cerr << "Error al abrir el archivo " << argv[1]
              << " intentelo de nuevo" << std::endl;
    return -1;
  }

  std::ofstream salida{argv[2]};
  std::string cadena_de_texto{};
  int indice{1};

  while(std::getline(entrada, cadena_de_texto)) {
    salida << indice << " " << cadena_de_texto << std::endl;
    indice += 1;
  }

  std::cout << "Proceso llevado a cabo con exito" << std::endl;

  return 0;
}