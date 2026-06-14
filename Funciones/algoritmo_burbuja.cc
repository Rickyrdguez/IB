/**
 * Una de las formas más sencillas (aunque no más eficientes) de ordenar un
 * vector es mediante el algoritmo de burbuja (BubbleSort), que consiste
 * simplemente en recorrer un vector comparando cada elemento con su vecino
 * siguiente y, si no están en el orden correcto, intercambiarlos. Este proceso
 * se repite hasta que no se detecte ningún par de valores desordenados.
 *
 * Apliquelo para un vector de numeros reales
 */

#include <iostream>
#include <vector>

/**
 * @brief Función que implementa el algoritmo de burbuja
 *
 * @param vector_numeros Vector de números reales
 */
std::vector<double> VectorOrdenado(std::vector<double> vector_numeros) {
  double variable_auxiliar{0.0};
  bool cambio{true};

  while (cambio == true) {
    cambio = false;

    for (int i{1}; i < vector_numeros.size(); ++i) {
      if (vector_numeros[i - 1] > vector_numeros[i]) {
        variable_auxiliar = vector_numeros[i];
        vector_numeros[i] = vector_numeros[i - 1];
        vector_numeros[i - 1] = variable_auxiliar;
        cambio = true;
      }
    }
  }

  return vector_numeros;
}

/**
 * @brief Funcion que sirve para mostrar el contenido de un vector
 * 
 * @param vector_numeros Vector de números reales
 */
void MostrarParametrosVector(const std::vector<double>& vector_numeros) {
  for(int i{0}; i < vector_numeros.size(); ++i) {
    std::cout << vector_numeros[i] << " ";
  }
  std::cout << std::endl;
}

int main(int argc, char* argv[]) {
  if (argc <= 1) {
    std::cerr << "ERROR. EL programa " << argv[0]
              << " usa uno o mas números reales" << std::endl;
    return -1;
  }

  std::vector<double> vector_numeros;

  for(int i{1}; i < argc; ++i) {
    vector_numeros.push_back(std::stod(argv[i]));
  }

  vector_numeros = VectorOrdenado(vector_numeros);

  MostrarParametrosVector(vector_numeros);

  return 0;
}