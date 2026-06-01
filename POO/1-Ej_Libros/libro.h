#ifndef LIBRO_H_
#define LIBRO_H_

#include <iostream>
#include <string>

class Libro {
 public:
  // Constructor
  Libro(const std::string& nombre, int fecha, double precio)
      : nombre_{nombre}, fecha_{fecha}, precio_{precio} {}

  // Destructor
  ~Libro() {}

  // Métodos
  double CalcularPrecioConImpuestos(double impuestos);
  void MostrarInformacion(const std::string&, int fecha, double precio);

 private:
  std::string nombre_;
  int fecha_;
  double precio_;
};

#endif  // LIBRO_H_