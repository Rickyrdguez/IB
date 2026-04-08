/**
 * programa que lee un número e imprime número hexadecimal pero en orden inverso
 */

 #include <iostream>

 /**
  * @brief Funcion que calcula el número en hexadecimal
  * 
  * @param numero Numero a calcular el orden inverso
  */
 void CalcularNumeroHexadecimal(int numero) {
  int resto;
  char caracter;

  while (numero > 0) {
    resto = numero % 16;

    if(resto < 10) {
      std::cout << resto;
    } else {
      caracter = 'A' + (resto - 10);
      std::cout << caracter;
    }

    numero /= 16;
  }

  std::cout << std::endl;
 }

 int main() {
  int numero;

  std::cin >> numero;

  if (numero == 0) {
    std::cout << numero << std::endl;
  } else {
    CalcularNumeroHexadecimal(numero);
  }

  return 0;
 }