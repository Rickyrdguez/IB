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
void HacerCuadrado(int numero, int& contador) {
  for (int i{1}; i <= numero; ++i) {
    for (int j{0}; j < numero; ++j) {
      std::cout << contador;

      contador = (contador + 1) % 10;
    }
    std::cout << std::endl;
  }
}

int main() {
  int numero;
  int contador;

  if (std::cin >> numero) {
    HacerCuadrado(numero, contador);
  }

  while (std::cin >> numero) {
    std::cout << std::endl;

    HacerCuadrado(numero, contador);
  }

  return 0;
}