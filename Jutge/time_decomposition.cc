#include <cassert>
#include <iostream>

/**
 * @brief Funcion que calcula las horas
 *
 * @param numero_segundos Recibe un numero de segundos
 */

void CalcularHoras(int numeros_segundos) {
  int horas, minutos;

  horas = numeros_segundos / 3600;
  minutos = (numeros_segundos % 3600) / 60;
  numeros_segundos = (numeros_segundos % 3600) % 60;

  std::cout << horas << " " << minutos << " " << numeros_segundos << std::endl;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "ERROR. El programa " << argv[0] << " usa <numero_segundos>"
              << std::endl;
    return -1;
  }

  CalcularHoras(atoi(argv[1]));

  return 0;
}