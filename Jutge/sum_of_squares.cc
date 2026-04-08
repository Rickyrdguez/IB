/**
 * Programa que calcula la suma de n números al cuadrados
 */

 #include <iostream>

 /**
  * @brief Calcula la suma de los números
  * 
  * @param numero Numero a calcular la suma de
  */
 void CalcularElCuadrado(int numero) {
  int producto{0};

  for (int i{1}; i <= numero; ++i) {
    producto = producto + i * i;
  }
  std::cout << producto << std::endl;
 }

 int main() {
  int numero;

  std::cin >> numero;

  if (numero == 0) {
    std::cout << numero << std::endl;
  } else {
    CalcularElCuadrado(numero);
  }

  return 0;
 }