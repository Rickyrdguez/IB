/**
 * Escriba un programa que, dada una cadena y un carácter, determine la primera
 * posición de la cadena en la que se encuentra ese carácter, si éste existe. Si
 * el carácter no se encuentra, el programa imprimirá -1. Se considerará que la
 * primera posición de la cadena (el primer carácter) es la cero
 */

#include <iostream>
#include <string>

/**
 * @brief Verificar en que parte de la palabra se encuentra un caracter otorgado
 * por el usuario
 * @param palabra Palabra a comprobar
 * @param letra Caracter a buscar
 * @return posicion en la que s e encuentra
 */
int Posicion(std::string palabra, char letra) {

  for(int i{0}; i < palabra.size(); i++) {
    if(palabra[i] == letra) {
      return i;
    }
  }
  return -1;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    return -1;
  }

  
  std::cout << Posicion(argv[1], argv[2][0]) << std::endl;

  return 0;
}