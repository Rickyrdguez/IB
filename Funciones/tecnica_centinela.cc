/**
 * Escriba un programa que contenga:
 *
 * Una función booleana que reciba un std::string e indique si sus caracteres
 * están ordenados alfabéticamente (es decir, de menor a mayor código ASCII)
 * una función que reciba dos std::string que cumplan la anterior condición y
 * las combine de forma que el resultado siga estando ordenado alfabéticamente.
 * Para ello, se propone usar la técnica del centinela:
 *
 * Sean A y B las cadenas a combinar. Cree un nuevo std::string C cuya longitud
 * sea la suma de las longitudes de A y B
 * .
 * Añada (creando copias de las cadenas si es necesario) el carácter '~' al
 * final de A y de B. Sean los índices enteros i,j,k inicializados a 0. Para
 * cada posición i de la cadena C, escoja el que sea menor de los caracteres Aj
 * y Bk y asígneselo al carácter Ci. Si escogió el primero, incremente j en 1;
 * en caso contrario, incremente k.
 *
 * De esta forma, no es necesario comprobar a cada paso las longitudes de las
 * cadenas a combinar, ya que el carácter '~' es el último de la tabla ASCII
 * básica. Puesto que no puede haber ningún carácter de mayor valor, '~' actuará
 * de límite natural e impedirá que se acaben los caracteres a consumir. Vea por
 * ejemplo la secuencia que combina las cadenas A="ar" y B="mo":
 */

#include <iostream>
#include <string>

/**
 * @brief Funcion que pasa a minúscula una cadena de texto
 *
 * @param cadena_texto String a pasar a minúscula
 */
std::string PasarAMinuscula(std::string cadena_texto) {
  std::string resultado{};

  for (int i{0}; i < cadena_texto.size(); ++i) {
    resultado += std::tolower(cadena_texto[i]);
  }
  return resultado;
}

/**
 * @brief Función que booleana que recibe un string y comprueba que esté en
 * orden alfabetico
 *
 * @param cadena_texto String a comprobar
 */
bool ComprobarOrden(std::string cadena_texto) {
  cadena_texto = PasarAMinuscula(cadena_texto);

  for (int i{0}; i < cadena_texto.size() - 1; ++i) {
    if (cadena_texto[i] > cadena_texto[i + 1]) {
      return false;
      break;
    }
  }

  return true;
}

/**
 * @brief Funcion que dado dos strings en orden alfabetico devuelve la
 * combinación de ambos dado el método centinela
 *
 * @param cadena_texto_A
 * @param cadena_texto_B
 */
std::string MetodoCentinela(std::string cadena_texto_A,
                            std::string cadena_texto_B) {
  std::string cadena_texto_C(cadena_texto_A.size() + cadena_texto_B.size(), ' ');

  cadena_texto_A += "~";
  cadena_texto_B += "~";

  int indice_j{0}, indice_k{0};

  for (int i{0}; i < cadena_texto_C.size(); ++i) {
    if (cadena_texto_A[indice_j] < cadena_texto_B[indice_k]) {
      cadena_texto_C[i] = cadena_texto_A[indice_j];
      indice_j += 1;
    } else if (cadena_texto_B[indice_k] < cadena_texto_A[indice_j]) {
      cadena_texto_C[i] = cadena_texto_B[indice_k];
      indice_k += 1;
    } else {
      cadena_texto_C[i] = cadena_texto_A[indice_j];
      indice_j += 1;
    }
  }
  return cadena_texto_C;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "ERROR. El programa " << argv[0]
              << " usa <cadena_texto_A> <cadena_texto_B>" << std::endl;
    return -1;
  }
  std::string cadena_texto_A{argv[1]};
  std::string cadena_texto_B{argv[2]};

  if (!ComprobarOrden(cadena_texto_A) || !ComprobarOrden(cadena_texto_B)) {
    std::cerr << "Error, las cadenas no están en orden alfabetico" << std::endl;
    return -1;
  }
  std::cout << MetodoCentinela(cadena_texto_A, cadena_texto_B) << " esta ordenada" <<  std::endl;

  return 0;
}