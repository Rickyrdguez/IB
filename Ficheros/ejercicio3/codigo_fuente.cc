/**
 * Escriba un programa que imprima en pantalla su propio código fuente.
 */

#include <fstream>
#include <iostream>
#include <string>

int main() {
 
  std::ifstream archivo{"codigo_fuente.cc"};

  if (!archivo.is_open()) {
    std::cerr << "Ha ocurrido un error al abrir el archivo, inténtelo de nuevo"
              << std::endl;
    return -1;
  }

  std::string linea_texto{};

  while(std::getline(archivo, linea_texto)){
    std::cout << linea_texto << std::endl;
  }

  std::cout << std::endl;

  return 0;
}