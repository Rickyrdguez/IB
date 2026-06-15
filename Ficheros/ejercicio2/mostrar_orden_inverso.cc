/**
 * Escriba un programa que tome desde un fichero una secuencia de números
 * enteros, cuyo primer número indica la cantidad de números restantes a leer.
 * El programa deberá escribir por pantalla y separados por espacios los números
 * en orden inverso a como aparecen en el fichero. Por ejemplo
 */

#include <fstream>
#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "ERROR. El programa " << argv[0] << " usa <fichero_entrada.txt"
              << std::endl;
    return -1;
  }

  std::ifstream entrada(argv[1]);

  if (!entrada.is_open()) {
    std::cerr << "Error al abrir el archivo, inténtelo de nuevo" << std::endl;
    return -1;
  }

  int tamanio{0};

  entrada >> tamanio;

  std::vector<int> numeros(tamanio, 0);

  for(int i{0}; i < tamanio; ++i) {
    int numero;
    entrada >> numero;
    numeros[i] = numero;
  }

  std::cout << "El fichero: " << tamanio << " ";
  for(int i{0}; i < numeros.size(); ++i) {
    std::cout << numeros[i] << " ";
  }
  std::cout << "Producira la salida ";
  for(int i{static_cast<int>(numeros.size()) - 1}; i >= 0; --i) {
    std::cout << numeros[i] << " ";
  }
  std::cout<<std::endl;

  return 0;
}
