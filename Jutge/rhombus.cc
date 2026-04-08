/**
 * Este programa recibe un numero y hace un rombo formado por *, siendo las
 * lineas totales del rommbo iguales a n
 */

#include <iostream>

/**
 * @brief Función hacer los espacios
 *
 * @param numero Numero a hacer los espacios por fila
 */
void HacerEspacios(int numero) {
  int contador_espacio{0};

  for (int i{0}; i < numero; ++i) {
    std::cout << " ";
  }
}

/**
 * @brief Funcion escribir los asteriscos por fila
 *
 * @param numero Numero a escribir los asteriscos por fila
 */
void HacerAsteriscos(int numero) {
  int contador_asterisco{0};

  for (int i{0}; i < numero; ++i) {
        std::cout << "*";
  }
  std::cout << std::endl;
}

/**
 * @brief Funcion que hace el rombo superior
 *
 * @param numero Numero a hacer el rombo
 */
void HacerRomboSuperior(int numero) {
  
  for (int i{1}; i <= numero; ++i) {
    HacerEspacios(numero - i);
    HacerAsteriscos( (2 * i) - 1);
  }
}

/**
 * @brief Funcion que hace el rombo inferior
 * 
 * @param numero Numero a hacer el rombo
 */
void HacerRomboInferior(int numero) {

  for(int i{numero - 1}; i >= 1; --i) {
    HacerEspacios(numero - i);
    HacerAsteriscos( (2 * i) - 1);
  }
}


int main() {
  int numero;

  std::cin >> numero;

  HacerRomboSuperior(numero);
  HacerRomboInferior(numero);

  return 0;
}