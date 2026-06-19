#include <iostream>
#include <string>

#include "libro.h"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "ERROR. El programa " << argv[0] << " usa <impuestos>"
              << std::endl;
    return -1;
  }

  Libro quijote{"El quijote de la Mancha", 1605, 21.00};
  Libro lazarillo{"El lazarillo de Tormes", 1554, 18.00};
  Libro pilares{"Los pilares de la Tierra", 1989, 27.00};

  quijote.MostrarInformacion();
  std::cout << ", " << quijote.CalcularPrecioConImpuestos(std::stoi(argv[1]))
            << std::endl;

  lazarillo.MostrarInformacion();
  std::cout << ", " << lazarillo.CalcularPrecioConImpuestos(std::stoi(argv[1]))
            << std::endl;

  pilares.MostrarInformacion();
  std::cout << ", " << pilares.CalcularPrecioConImpuestos(std::stoi(argv[1]))
            << std::endl;

  return 0;
}