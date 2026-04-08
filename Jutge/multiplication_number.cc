/**
 * programa que recibe un número y muestra por pantalla la tabla de multiplicar
 * de ese numero ademas del resultado
 */

 #include <iostream>

 /**
  * @brief Calcular la tabla de pantalla
  * 
  * @param numero a calcular la tabla de multiplicar
  */
 void TablaDeMultiplicar(int numero) {
  int producto;

  for(int i{1}; i <= 10; ++i) {
    producto = numero * i;

    std::cout << numero << "*" << i << " = " << producto << std::endl;
  }
 }

 int main() {
  int numero;

  std::cin >> numero;

  TablaDeMultiplicar(numero);

  return 0;
 }