/**
 * Considera un tablero de ajedrez de dimensión cuadrada. En cada casilla caben
 * monedas del 0 al 9.
 *
 * Calcula la suma de los numeros de las diagonales principales
 */
#include <iostream>

/**
 * @brief Calcula la suma de los elementos de la diagonal por ambos lados
 *
 * @param numero_dimension Numero que significa la dimensión del tablero de
 * ajedrez
 */
void SumaDiagonalIzqDer(int numero_dimension) {
  int total_suma{0};
  char monedas;

  for (int i{0}; i < numero_dimension; ++i) {
    for (int j{0}; j < numero_dimension; ++j) {
      std::cin >> monedas;

      if (i == j) {
        total_suma += (monedas - '0');
      } else if(i + j == numero_dimension - 1){
        total_suma += (monedas - '0');
      }
    }
  }
  std::cout << total_suma << std::endl;
}

int main() {
  int numero_dimension;

  std::cin >> numero_dimension;

  SumaDiagonalIzqDer(numero_dimension);
  
  return 0;
}