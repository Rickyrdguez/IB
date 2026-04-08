/**
 * Programa que muestra por pantalla, el cálculo de n números al cubo,
 * separados por comas
 */

 #include <iostream>

 /**
  * @brief Funcion que calcula el cuadrado de cada número
  * 
  * @param numero Numero al que calcular el cubo
  */
 void CalcularElCuadrado(int numero) {
  long long producto;

  for(int i{0}; i <= numero; ++i) {
    producto = i * i * i;

    std::cout << producto;
    if(i != numero) {
      std::cout << ",";
    }
  }
 }

 int main() {
  int numero;

  std::cin >> numero;


  if (numero == 0) {
    std::cout << numero;
  } else {
    CalcularElCuadrado(numero);
  }

  std::cout << std::endl;
  
  return 0;
 }