/**
 * "Considera un tablero de ajedrez con r filas y c columnas, donde cada casilla
 * contiene entre 0 y 9 monedas. Supón que la casilla superior izquierda (la
 * primera) es blanca. Por ejemplo, un tablero vacío de 4 filas y 5 columnas se
 * vería así [ejemplo visual del tablero].
 *
 * Escribe un programa que, dado un
 * tablero, calcule el número total de monedas que hay solo en sus casillas
 * blancas.
 */

#include <iostream>

/**
 * @brief Funcion que calcula el número de monedas en las casillas blancas
 *
 * @param numero_filas Numero de filas
 * @param numero_columnas Numero de columnas
 */
void SumaMonedasCasillasBlancas(int numero_filas, int numero_columnas) {
  int total_monedas{0};
  char monedas;

  for (int i{0}; i < numero_filas; ++i) {
    for (int j{0}; j < numero_columnas; ++j) {
      std::cin >> monedas;

      if (((i + j) % 2) == 0) {
        total_monedas += (monedas - '0');
      }
      
    }
  }
  std::cout << total_monedas << std::endl;
}

int main() {
  int numero_filas;
  int numero_columnas;

  while (std::cin >> numero_filas >> numero_columnas) {
    SumaMonedasCasillasBlancas(numero_filas, numero_columnas);
  }

  return 0;
}