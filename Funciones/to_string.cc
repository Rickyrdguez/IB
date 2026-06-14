/**
 * Escriba un programa que contenga una función ToString que reciba como
 * parámetro un vector de enteros y devuelva la cadena de caracteres que lo
 * representa. Por ejemplo, la función aplicada sobre el vector ⟨1,3,5,7⟩
 * debería devolver la cadena "{1, 3, 5, 7}". Para convertir un valor entero o
 * real a su representación como cadena de caracteres, puede utilizar la función
 * std::to_string del módulo <string>.
 */

#include <iostream>
#include <string>
#include <vector>

/**
 * @brief Funcion que pasa de un vector de números a un string
 * 
 * @param vector_enteros Vector de enteros a pasar a string
 */
std::string ToString(const std::vector<int>& vector_enteros) {
  std::string resultado{"{"};

  for(int i{0}; i < vector_enteros.size(); ++i) {
    resultado += std::to_string(vector_enteros[i]);
    if(i == vector_enteros.size() - 1) {
      resultado += "}";
    } else {
      resultado += ", ";
    }
  }

  return resultado;
}

int main() {
  std::vector<int> vector1(3, 7), vector2{3, 7};
  std::cout << ToString(vector1) << std::endl
            << ToString(vector2) << std::endl
            << ToString({3, 7}) << std::endl;
  return 0;
}