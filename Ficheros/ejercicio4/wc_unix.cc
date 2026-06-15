/**
 * Desarrolle un programa que se comporte como el comando wc de Unix: debe tomar
 * por línea de comandos el nombre de un fichero de texto e imprimir en pantalla
 * el número de líneas, palabras y caracteres (bytes) que contiene.
 */
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "ERROR; El programa " << argv[0] << " usa <fichero.txt>"
              << std::endl;
    return -1;
  }

  std::ifstream archivo1{argv[1]};

  if (!archivo1.is_open()) {
    std::cerr << "Ha ocurrido un error al abrir " << argv[1]
              << " intentelo de nuevo" << std::endl;
    return -1;
  }

  int contador_lineas{0}, contador_caracteres{0}, contador_palabras{0};
  std::string lineas_texto{};

  while (std::getline(archivo1, lineas_texto)) {
    ++contador_lineas;
    contador_caracteres = lineas_texto.size();
  }

  std::ifstream archivo2{argv[1]};

  while (archivo2 >> lineas_texto) {
    ++contador_palabras;
  }

  std::cout << "El numero de líneas es: " << contador_lineas << std::endl;
  std::cout << "El numero de palabras es: " << contador_palabras << std::endl;
  std::cout << "El numero de carácteres es: " << contador_caracteres
            << std::endl;
  return 0;
}