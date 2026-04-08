/**
 * Escriba un programa que reciba una cadena de caracteres y devuelva el número
 * de caracteres que hay en dicha cadena
 */

 #include <iostream>
 #include <string>

 /**
  * @brief Cuenta el número de caracteres
  * @param palabra Palabra a contar el número de caracteres
  * @return el número de caracteres
  */
int CountLetters(std::string palabra) {
  int contador{0};

  for(char caracter : palabra) {
    ++contador;
  }
  return contador;
}

int main(int argc, char* argv[]) {
  if(argc != 2) {
    return -1;
  }

  std::cout << CountLetters(argv[1]) << std::endl;

  return 0;
}