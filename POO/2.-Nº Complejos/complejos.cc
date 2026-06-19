#include "complejos.h"

#include <cmath>
#include <iostream>

/**
 * @brief Funcion encargada de hacer la suma de números complejos
 *
 * @param otro_complejo Un segundo complejo
 */
Complejo Complejo::Suma(const Complejo& otro_complejo) const {
  return Complejo{parte_real_ + otro_complejo.GetParteReal(),
                  parte_imaginaria_ + otro_complejo.GetParteImaginaria()};
}

/**
 * @brief Funcion encargada de hacer la resta de números complejos
 *
 * @param otro_complejo Un segundo complejo
 */
Complejo Complejo::Resta(const Complejo& otro_complejo) const {
  return Complejo{parte_real_ - otro_complejo.GetParteReal(),
                  parte_imaginaria_ - otro_complejo.GetParteImaginaria()};
}

/**
 * @brief Funcion encargada de hacer la multiplicación de números complejos
 *
 * @param otro_complejo Un segundo complejo
 */
Complejo Complejo::Multiplicacion(const Complejo& otro_complejo) const {
  return Complejo{parte_real_ * otro_complejo.GetParteReal() -
                      parte_imaginaria_ * otro_complejo.GetParteImaginaria(),
                  parte_real_ * otro_complejo.GetParteImaginaria() +
                      parte_imaginaria_ * otro_complejo.GetParteReal()};
}

/**
 * @brief Funcion encargada de hacer la división de números complejos
 *
 * @param otro_complejo Un segundo complejo
 */
Complejo Complejo::Division(const Complejo& otro_complejo) const {
  double denominador = std::pow(otro_complejo.GetParteReal(), 2) +
                       std::pow(otro_complejo.GetParteImaginaria(), 2);
  return Complejo{((parte_real_ * otro_complejo.GetParteReal() +
                    parte_imaginaria_ * otro_complejo.GetParteImaginaria()) /
                   (denominador)),
                  ((parte_imaginaria_ * otro_complejo.GetParteReal() -
                    parte_real_ * otro_complejo.GetParteImaginaria()) /
                   (denominador))};
}

/**
 * @brief Funcion encargada de mostrar un número complejo
 */
void Complejo::MostrarPorPantalla() const {
  std::cout << "(" << parte_real_ << ", " << parte_imaginaria_ << ")";
}