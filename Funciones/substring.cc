/**
 * Escriba una función que tome como parámetros una cadena de caracteres string
 * y dos números enteros positivos position y length, y devuelva la subcadena de
 * string que comienza en la posición position (sabiendo que el primer carácter
 * está en la posición 0) y contiene length caracteres. Si position es igual o
 * mayor que la longitud de la cadena, la función devolverá la cadena vacía
 * ("").
 */

#include <iostream>
#include <string>

/**
 * @brief Función que recorre y muestra los caracteres
 *
 * @param palabra String a recorrer
 * @param posicion Posición en la que empezamos
 * @param longitud el tamaño del string
 */
std::string SubString(const std::string& palabra, int posicion, int longitud) {
  if (posicion >= static_cast<int>(palabra.length())) {
    return "";
  }

  return palabra.substr(posicion, longitud);
}

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cerr << "ERROR el programa " << argv[0]
              << " usa <palabra> <posicion> <longitud_substring>" << std::endl;
    return -1; 
  }

  std::string palabra = argv[1];
  int posicion = atoi(argv[2]);
  int longitud = atoi(argv[3]);

  std::cout << SubString(palabra, posicion, longitud) << std::endl;

  return 0;
}