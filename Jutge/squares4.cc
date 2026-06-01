/**
 * Dado un número escribe un programa que cree un cuadrado de dimension n * n, y
 * lo rellene con números del 0 al 9, manteniendo el contador para la salida del
 * programa con distintos cuadrados
 */
#include <iostream>

/**
 * @brief Funcion que crea un cuadrado
 *
 * @param numero Numero que indica la dimension
 * @param contador Puntero que apunta a contador
 */
void HacerCuadrado(int numero) {
  int contador_numeros{0};

  // Numero de cuadrados
  for (int i{1}; i <= numero; ++i) {
    // Numero de filas
    for (int j{0}; j < numero; ++j) {
      // Coloca los numeros que van en las columnas
      for (int k{0}; k < numero; ++k) {
        std::cout << contador_numeros;

        contador_numeros = (contador_numeros + 1) % 10;
      }
      std::cout << std::endl;
    }

    contador_numeros = 0;

    if (i != numero) {
      std::cout << std::endl;
    }
  }
}

int main() {
  int numero;

  std::cin >> numero;

  HacerCuadrado(numero);

  return 0;
}