#include <iostream>

/**
 * @brief Funcion que recibe un número y devuelve ese mismo número pero
 * habiendole restado el último digito
 *
 * @param numero Entero recibidio
 */
int NumeroMenosUltimoDigito(int numero) {
  int resultado{0};
  int resto{numero % 10};

  numero = numero / 10;

  resultado = numero - resto;

  return resultado;
}

/**
 * @brief Funcion que comprueba que un número sea divisible por 11
 *
 * @param numero Entero recibido
 */
bool EsDivisiblePorOnce(int numero) {
  while (numero >= 10) {
    numero = NumeroMenosUltimoDigito(numero);
  }
  if (numero == 0) {
    return true;
  }
  return false;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "ERROR, el programa " << argv[0] << " usa <numero>"
              << std::endl;
    return -1;
  }

  if(EsDivisiblePorOnce(std::stoi(argv[1]))) {
    std::cout << "Es divisible por 11" << std::endl;
  } else {
    std::cout << "No es divisible por 11" << std::endl;
  }

  return 0;
}