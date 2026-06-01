/**
 * Dado un número escribe un programa que cree un cuadrado de dimension n * n, y
 * lo rellene con números del 0 al 9
 */
#include <iostream>

/**
 * @brief Funcion que crea un cuadrado
 *
 * @param numero Numero que indica la dimension
 */
void HacerCuadrado(int numero) {
  int contador{0};

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

  if (std::cin >> numero) {
    HacerCuadrado(numero);
  }

  while (std::cin >> numero) {
    std::cout << std::endl;
    
    HacerCuadrado(numero);
  }

  return 0;
}