#include <iostream>

#include "libro.h"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "ERROR. El programa " << argv[0]
              << " usa <porcentaje_impuesto>" << std::endl;
    return -1;
  }

  Libro quijote{"El Quijote de la Mancha", 1605, 21.00};
  Libro lazarillo{"El Lazarillo de Tormes", 1554, 18.00};
  Libro pilares{"Los pilares de la Tierra", 1989, 27.00};

  quijote.MostrarInformacion("El Quijote de la Mancha", 1605, 21.00);
  std::cout << quijote.CalcularPrecioConImpuestos(atoi(argv[1])) <<std::endl;

  lazarillo.MostrarInformacion("El Lazarillo de Tormes", 1554, 18.00);
  std::cout << lazarillo.CalcularPrecioConImpuestos(atoi(argv[1])) << std::endl;

  pilares.MostrarInformacion("Los pilares de la Tierra", 1989, 27.00);
  std::cout <<  pilares.CalcularPrecioConImpuestos(atoi(argv[1])) << std::endl;

  return 0;
}