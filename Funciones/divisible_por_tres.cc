/**
 * Escriba un programa en C++ que contenga:
 *
 * Una función que reciba como parámetro un valor entero positivo y devuelva el
 * sumatorio de sus dígitos.
 * Una función booleana que reciba como parámetro un valor entero positivo y
 * compruebe si es divisible entre 3. Para ello, aplique repetidamente sobre él
 * la función anterior, igualándolo a la salida de la misma, hasta que el
 * resultado obtenido tenga una sola cifra (es decir, sea menor que 10).
 * Llegados a ese punto, la función devolverá verdadero si dicha cifra es 0, 3,
 * 6 ó 9 (y falso en caso contrario). Utilice un switch para realizar este
 * último paso.
 * La función main del programa deberá recibir un valor entero por
 * línea de comandos y mostrar por pantalla si éste es o no divisible entre 3,
 * en función de la salida de la función antes descrita.
 */
#include <iostream>

/**
 * @brief Función que devuelve a suma de los dígitos individuales de un número
 *
 * @param numero Entero a calcular la suma de los dígitos
 */
int CalcularSuma(int numero) {
  int resultado{0};

  while (numero > 0) {
    resultado += numero % 10;
    numero = numero / 10;
  }

  return resultado;
}

/**
 * @brief Función encargada de comprobar si el número es divisible por 3
 *
 * @param numero
 */
bool DivisiblePorTres(int numero) {
  while (numero >= 10) {
    numero = CalcularSuma(numero);
  }
  switch (numero) {
    case 0:
      return true;
      break;
    case 3:
      return true;
      break;
    case 6:
      return true;
      break;
    case 9:
      return true;
      break;
  }

  return false;
}

int main(int argc, char* argv[]) {
  if(argc != 2) {
    std::cerr << "ERROR El programa " << argv[0] << " usa <numero_entero>" << std::endl;
    return -1;
  }
  
  if(DivisiblePorTres(std::stoi(argv[1]))) {
    std::cout << "El numero si es divisible por 3 " << std::endl;
  } else {
    std::cout << "El numero no es divisible por 3 " << std::endl;
  }
  
  return 0;
}