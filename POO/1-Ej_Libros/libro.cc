#include "libro.h"

#include <iostream>

double Libro::CalcularPrecioConImpuestos(double impuestos) {
  return (precio_ * (impuestos / 100)) + precio_;
}

void Libro::MostrarInformacion(const std::string& libro, int fecha,
                               double precio) {
  std::cout << libro << ", " << fecha << ", " << precio << ", ";
}