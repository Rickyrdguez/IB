/**
 * Programa que cuenta el número de "a" de una entrada
 */

 #include <iostream>
 #include <string>

 /**
  * @brief Funcion que comprueba si es 'a'
  * 
  * @param letra Letra a comprobar
  */
 bool EsVocalA(char letra) {
  if(letra != 'a') {
    return false;
  }
  return true;
 }

 /**
  * @brief Funcion que cuenta el número de a
  * 
  * @param palabras Cadenas de texto a analizar
  */
void NumeroDeA(std::string palabras) {
  int contador{0};

  for(char letra : palabras) {
    if(EsVocalA(letra)) {
      ++contador;
    }
  }

  std::cout << contador << std::endl;
}

int main() {
  std::string palabras;

  if(std::getline(std::cin, palabras)) {
      NumeroDeA(palabras);
  }


  return 0;
}