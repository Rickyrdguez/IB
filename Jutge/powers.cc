/**
 * Programa que reciba dos numeros, siendo primero la base y el segundo el
 * exponente, luego, imprime como salida el resultado de la potencia
 */

 #include <iostream>

 /**
  * @brief Funcion que calcula el valor de la potencia
  * 
  * @param base Numero que es la basse
  * @param exponente Numero que representa el exponente
  */
 void CalculoDePotencia(int base, int exponente) {
  int resultado{1};

  for(int i{0}; i < exponente; ++i) {
    resultado = resultado * base;
  }

  std::cout << resultado << std::endl;
 }

int main() {
  int base, exponente;

  while (std::cin >> base >> exponente) {

    if (exponente == 0) {
      std::cout << "1" << std::endl;
    } else if (base == 0) {
      std::cout << "0" << std::endl;
    } else {
      CalculoDePotencia(base, exponente);
    }
  }

  return 0;
}