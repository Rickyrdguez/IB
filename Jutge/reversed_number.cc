/**
 * programa que recibe un número y lo imprime pero al revés
 */

#include <iostream>
#include <string>

/**
 * @brief Funcion que recibe un numero y muestra ese mismo número pero al revés
 * 
 * @param texto Cadena de números a darle la vuelta 
 */

 void NumeroAlReves(std::string texto) {
  int ultima_posicion = texto.length() - 1;

  for (int i = ultima_posicion; i >= 0; --i) {
    std::cout << texto[i];  
  }

  std::cout << std::endl;
 }

 int main() {
  std::string texto;

  std::cin >> texto;

  NumeroAlReves(texto);
  
  return 0;
 }