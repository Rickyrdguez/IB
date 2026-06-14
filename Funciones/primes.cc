/**
 * Desarrolle en C++ un programa que reciba como entrada un número entero
 * positivo y muestre por pantalla sus factores primos. Para ello, tenga en
 * cuenta que:
 *
 * Se considera que el menor número primo es 2.
 * Cada factor puede repetirse varias veces en la descomposición.
 * Si se extraen los factores en orden ascendente, no es necesario comprobar si
 * son primos. Si se extraen los factores en orden ascendente, no puede existir
 * un factor mayor que la raíz cuadrada del valor a descomponer. Si ya no quedan
 * más factores posibles pero el valor a descomponer es mayor que 1, dicho valor
 * es el último factor primo de la descomposición. 
 */

#include <iostream>

/**
 * @brief Funcion que calcula la descomposicion en números primos
 *
 * @param numero_a_descomponer Numero a descomponen
 */
void DescomposionNumerosPrimos(int numero_a_descomponer) {
  for (int i{2}; i <= numero_a_descomponer; ++i) {
      while (numero_a_descomponer % i == 0) {
        numero_a_descomponer = numero_a_descomponer / i;

        std::cout << i << " ";
      }
    }
  std::cout << std::endl;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "ERROR el programa " << argv[0]
              << " usa <numero_a_descomponer>>" << std::endl;
  }

  DescomposionNumerosPrimos(atoi(argv[1]));

  return 0;
}