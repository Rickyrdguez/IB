/**
 * Implementacion de los métodos de la clase libro.h
 */
#include "libro.h"

#include <iostream>
#include <string>

double Libro::CalcularPrecioConImpuestos(double impuestos) const {
  return precio_ + ((impuestos / 100) * precio_);
}

void Libro::MostrarInformacion() {
  std::cout << nombre_ << ", " << anio_ << ", " << precio_;
}