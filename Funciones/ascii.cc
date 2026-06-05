/**
 * Desarrolle un programa que tome por línea de comandos una cadena de
 * caracteres e imprima en pantalla:
 *
 * La secuencia de códigos numéricos ASCII correspondientes a cada carácter de
 * la cadena
 * El resultado de sustituir cada carácter de la cadena por el siguiente
 * carácter de la tabla ASCII El resultado de sustituir cada carácter de la
 * cadena por el carácter anterior de la tabla ASCII Recuerde que todo dato de
 * tipo char ya está codificado internamente como su código ASCII, que puede
 * recuperarse son un simple static_cast<int>. De igual modo, todo valor
 * compatible con el cósigo ASCII puede convertirse a su carácter
 * correspondiente con static_cast<char>.
 */
#include <iostream>
#include <string>

/**
 * @brief Funcion encargada de pasar de caracter a numero usando la tabla ASCII
 *
 * @param palabra Palabra a pasar a codigo ASCII
 */
void PalabraANumero(const std::string& palabra) {
  for (char caracteres : palabra) {
    std::cout << static_cast<int>(caracteres) << " ";
  }
  std::cout << std::endl;
}

/**
 * @brief Funcion que devuelve el caracter siguiente de la tabla ASCII.
 *
 * @param palabra String que hay que pasar a codigo ASCII
 */
void CaracterSiguiente(const std::string& palabra) {
  for (char caracteres : palabra) {
    int caracter_siguiente = caracteres + 1;

    std::cout << static_cast<char>(caracter_siguiente);
  }
  std::cout << std::endl;
}

/**
 * @brief Funcion que devuelve el caracter anterior de la tabla ASCII.
 *
 * @param palabra String que hay que pasar a codigo ASCII
 */
void CaracterAnterior(const std::string& palabra) {
  for (char caracteres : palabra) {
    int caracter_siguiente = caracteres - 1;

    std::cout << static_cast<char>(caracter_siguiente);
  }
  std::cout << std::endl;
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "ERROR El programa " << argv[0] << " usa <palabra>"
              << std::endl;
    return -1;
  }

  PalabraANumero(argv[1]);
  CaracterSiguiente(argv[1]);
  CaracterAnterior(argv[1]);

  return 0;
}