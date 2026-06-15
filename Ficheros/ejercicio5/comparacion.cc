/**
 * Escriba un programa que tome por línea de comandos los nombres de dos
 * ficheros de texto e imprima en pantalla el número de la primera línea en la
 * cual el texto del primer fichero difiere del texto del segundo. Si ambos
 * ficheros son exactamente iguales, indíquelo con un mensaje por pantalla.
 */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "ERROR. El programa " << argv[0]
              << " usa <archivo1.txt> <archivo2.txt>" << std::endl;
    return -1;
  }

  std::ifstream archivo_1{argv[1]};
  std::ifstream archivo_2{argv[2]};

  std::string lineas_archivo_1{}, lineas_archivo_2{};

  bool diferencia{false};
  int contador_lineas{0};

  while (std::getline(archivo_1, lineas_archivo_1) &&
         std::getline(archivo_2, lineas_archivo_2)) {
    ++contador_lineas;
    if (lineas_archivo_1 != lineas_archivo_2) {
      diferencia = true;
      break;
    }
  }

  if (diferencia == true) {
    std::cout << "Dejo de ser igual en la linea: " << contador_lineas
              << std::endl;
  } else {
    std::cout << "Son iguales" << std::endl;
  }

  return 0;
}