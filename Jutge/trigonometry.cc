/**
 * Escribe un programa que reciba un angulo en grados, lo pase a radianes y
 * tenga como salida por pantalla el valor del seno y del coseno de ese angulo
 */

#include <iomanip>
#include <iostream>

constexpr double kPi = 3.14159265358979323846;

/**
 * @brief Función que cambia de grados a radianes
 *
 * @param grados Numero que representa el grado del angulo
 */
double NumeroEnRadianes(int grado) { return grado * (kPi / 180); }

/**
 * @brief Funcion que calcula el coseno
 *
 * @param grado Numero que representa el grado del angulo
 */
double FuncionCalcularCoseno(int grado) {
  double radianes{NumeroEnRadianes(grado)};
  double suma{1.0};
  double termino{1.0};

  for (int i{1}; i <= 15; ++i) {
    termino *= -1.0 * radianes * radianes / ((2 * i - 1) * (2 * i));
    suma += termino;
  }

  return suma;
}

/**
 * @brief Función que calcula el seno
 * 
 * @param grado Numero qeu representa el grado del angulo
 */