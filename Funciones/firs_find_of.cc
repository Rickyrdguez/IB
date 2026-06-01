/**
 * Escriba un programa que, dada una cadena y un carácter, determine la primera
 * posición de la cadena en la que se encuentra ese carácter, si éste existe. Si
 * el carácter no se encuentra, el programa imprimirá -1. Se considerará que la
 * primera posición de la cadena (el primer carácter) es la cero.
 */

#include <iostream>
#include <string>

/**
 * @brief Función que recibe una palabra y una letra, esa letra la busca y
 * devuelve la posición en la que la encontró
 *
 * @param palabra String de la palabra
 * @param letra Letra a buscar en la palabra
 */
int FirstFindOf(std::string palabra, char letra) {
  int posicion{-1};

  for (int i{0}; i < palabra.size(); ++i) {
    if (palabra[i] == letra) {
      posicion = i;
      break;
    }
  }

  return posicion;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "Error el programa " << argv[0] << "usa <palabra> <letra>"
              << std::endl;
    return -1;
  }

  char letra = argv[2][0];

  std::string palabra = argv[1];

  std::cout << FirstFindOf(palabra, letra) << std::endl;

  return 0;
}