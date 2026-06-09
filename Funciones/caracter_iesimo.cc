/**
 * Escriba un programa que incluya una función que tome como entrada un vector
 * de enteros entre 0 y 35, ambos incluidos, y devuelva una cadena de
 * caracteres, aplicando para cada valor la transformación indicada en la
 * siguiente tabla.
 *
 *
 * i-ésimo entero:	0	1	2	...	7	8	9
 * 10	11	12	...	33	34	35 i-ésimo carácter:	'0'
 * '1'	'2'	...	'7'	'8'	'9'	'A'	'B'	'C'	...
 * 'X'	'Y'	'Z'
 */
#include <iostream>
#include <string>
#include <vector>

/**
 * @brief Función que recibe un entero y lo devuelve como carácter
 *
 * @param numero Numero a transformar en caracter
 */
char PasarACaracter(int numero) {
  if (numero < 10) {
    numero = '0' + numero;
  } else {
    numero = 'A' + (numero - 10);
  }
  return numero;
}
/**
 * @brief Funcion que recibe un vector de enteros y devuelve un string con los
 * caracteres que corresponde
 *
 * @param vector_enteros Vector formado por números enteros
 */
std::string TransformarVector(const std::vector<int>& vector_enteros) {
  std::string resultado{};

  for (int i{0}; i < vector_enteros.size(); ++i) {
    resultado += PasarACaracter(vector_enteros[i]);
  }
  return resultado;
}

/**
 * @brief Funcion que comprueba que el número introducido no sobrepasa el tamaño
 * del vector
 *
 * @param vector_numeros Vector formado por números
 */
bool ValoresEnRango(const std::vector<int>& vector_numeros) {
  for (int i{0}; i < vector_numeros.size(); ++i) {
    if (vector_numeros[i] < 0 || vector_numeros[i] > 35) {
      return false;
    }
  }
  return true;
}

/**
 * @brief Funcion encargada de mostrar un vector de enteros
 *
 * @param vector_numeros Vector formado por números enteros
 */
void MostrarVectorNumeros(const std::vector<int>& vector_numeros) {
  for (int i{0}; i < vector_numeros.size(); ++i) {
    std::cout << vector_numeros[i] << " ";
  }
}

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "ERROR el programa " << argv[0]
              << "usa <vector_numeros_enteros>" << std::endl;
    return -1;
  }

  std::vector<int> vector_numeros;

  for (int i{1}; i < argc; ++i) {
    vector_numeros.push_back(std::stoi(argv[i]));
  }

  if (!ValoresEnRango(vector_numeros)) {
    std::cerr << "El programa usa números comprendidos entre el 0 y el 35 "
                 "ambos incluidos"
              << std::endl;
    return -1;
  }

  std::cout << "El i-esimo es: ";
  MostrarVectorNumeros(vector_numeros);
  std::cout << std::endl;

  std::cout << "El i-esimo caracter: " << TransformarVector(vector_numeros)
            << std::endl;
}