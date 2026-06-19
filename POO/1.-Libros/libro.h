#ifndef LIBRO_H_
#define LIBRO_H_

#include <string>

class Libro {
 public:
  // Constructor
  Libro(const std::string& nombre, int anio, double precio)
      : nombre_{nombre}, anio_{anio}, precio_(precio) {}

  // Destructor
  ~Libro() {}

  // Métodos
  double CalcularPrecioConImpuestos(double impuestos) const;
  void MostrarInformacion();

 private:
  int anio_;
  std::string nombre_;
  double precio_;
};

#endif  // LIBRO_H_