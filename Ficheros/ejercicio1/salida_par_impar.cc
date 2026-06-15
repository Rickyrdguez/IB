/**
 * Escriba un programa que lea un fichero que contenga una secuencia de números
 * enteros separados por espacios. El programa debe transcribir la secuencia a
 * otros dos ficheros, de modo que uno contenga sólo los valores pares y el otro
 * sólo los valores impares.
 */
#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cerr << "ERROR. El programa " << argv[0]
              << " usa <fichero_entrada.txt> <fichero_salida1.txt> "
                 "<fichero_salida2.txt>"
              << std::endl;
    return -1;
  }

  std::ifstream entrada{argv[1]};
  std::ofstream salida_par{argv[2]};
  std::ofstream salida_impar{argv[3]};

  if(!entrada.is_open() || !salida_par.is_open() || !salida_impar.is_open()) {
    std::cerr << "ERROR al abrir los archivos" << std::endl;
    return -1;
  }

  int numero;

  while(entrada >> numero) {
    if(numero % 2 == 0) {
      salida_par << numero << std::endl;
    } else {
      salida_impar << numero << std::endl;
    }
  }

  std::cout << "Accion realizada con exito" << std::endl;

  return 0;
}