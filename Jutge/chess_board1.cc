/**
 * Imagina un tablero de ajedrez con r filas y c columnas, donde cada casilla
 * contiene entre 0 y 9 monedas. Escribe un programa que, dado un tablero,
 * calcule el número total de monedas que hay en él
 */

#include <iostream>


/**
 * @brief Función que recorre el número de filas y columnas, sumando los números
 * que hay en ellas
 * 
 * @param numero_filas Numero de filas
 * @param numero_columnas Numero de columnas
 */
void ContarLosNumeros(int numero_filas, int numero_columnas) {
  int total_monedas{0};
  char monedas;

  for(int i{0}; i < numero_filas; ++i) {
    for(int j{0}; j < numero_columnas; ++j) {
      std::cin >> monedas;

      total_monedas += (monedas - '0');
    }
  }

  std::cout << total_monedas << std::endl;
}

int main() {
  int numero_filas;
  int numero_columnas;

  while(std::cin >> numero_filas >> numero_columnas) {
    ContarLosNumeros(numero_filas, numero_columnas);
  }

  return 0;
}