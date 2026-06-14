/**
 * Escriba una función que reciba dos valores enteros mayores que cero, numero y
 * base, y convierta el primero a la base numérica dada. El algoritmo para
 * realizar esta operación es realizar la división entera entre el número y la
 * base hasta llegar a cero, recolectando los restos de las divisiones a cada
 * paso. El resultado será dicha secuencia en orden inverso, que la función
 * deberá devolver como un vector de enteros.
 */
#include <iostream>
#include <vector>

/**
 * @brief Funcion que dado un número y una base, pasa el número a dicha base
 *
 * @param numero Numero a pasar
 * @param base Base a pasar
 */
std::vector<int> NumerosEnLaBase(int numero, int base) {
  int resto{};
  std::vector<int> numero_en_base{};

  while (numero > 0) {
    resto = numero % base;
    numero = numero / base;

    numero_en_base.push_back(resto);
  }

  return numero_en_base;
}

/**
 * @brief Funcion encargada de mostrar los elementos del vector 
 *
 * @param numero Numero a pasar
 * @param base Base a la que pasar el número
 */
void MostrarVector(int numero, int base) {
  std::vector<int> vector_de_numeros{};

  vector_de_numeros = NumerosEnLaBase(numero, base);
  int tamanio = vector_de_numeros.size();

  for (int i{tamanio - 1}; i >= 0; --i) {
    std::cout << vector_de_numeros[i] << " ";
  }

  std::cout << std::endl;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "ERROR El programa " << argv[0] << " utiliza <numero> <base>"
              << std::endl;
    return -1;
  }

  MostrarVector(std::stoi(argv[1]), std::stoi(argv[2]));

  return 0;
}