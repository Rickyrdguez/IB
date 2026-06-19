#include <cmath>
#include <iomanip>
#include <iostream>

#include "complejos.h"

int main() {
  Complejo complejo1{68.04, 0.00};
  Complejo complejo2{56.62, -21.12};

  Complejo resultado_suma{complejo1.Suma(complejo2)};
  Complejo resultado_resta{complejo1.Resta(complejo2)};
  Complejo resultado_multiplicacion{complejo1.Multiplicacion(complejo2)};
  Complejo resultado_division{complejo1.Division(complejo2)};

  std::cout << "Numeros: ";
  complejo1.MostrarPorPantalla();
  std::cout << " ";
  complejo2.MostrarPorPantalla();
  std::cout << std::endl;

  std::cout << "Suma : " << std::fixed << std::setprecision(2);
  resultado_suma.MostrarPorPantalla();
  std::cout << std::endl;

  std::cout << "Resta: " << std::fixed << std::setprecision(2);
  resultado_resta.MostrarPorPantalla();
  std::cout << std::endl;

  std::cout << "Multiplicacion: " << std::fixed << std::setprecision(2);
  resultado_multiplicacion.MostrarPorPantalla();
  std::cout << std::endl;

  std::cout << "Division: " << std::fixed << std::setprecision(2);
  resultado_division.MostrarPorPantalla();
  std::cout << std::endl;

  return 0;
}