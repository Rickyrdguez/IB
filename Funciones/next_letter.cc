/**
 * Escriba un programa que cambie cada una de las letras presentes en una
 * cadena de texto por la letra siguiente del alfabeto.
 */

#include <iostream>
#include <string>

/**
 * @brief Cambia una letra de una cadena por la siguiente en el abecedario
 * 
 * @param Palabra Palabra a cambiar los carácteres
 */
std::string CambioCaracteres(std::string palabra) {
  
  for (char& caracter : palabra) {
   caracter = static_cast<char>(static_cast<int>(caracter) +1);
  }

  return palabra;
}

int main(int argc, char* argv[]) {
  if(argc != 2) {
    std::cerr << "ERROR. El programa " << argv[0] << " usa <palabra>" << std::endl;
    return -1;
   }

   std::cout << CambioCaracteres(argv[1]) << std::endl;
   return 0;
}