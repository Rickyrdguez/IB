#include <iostream>
#include <string>

/**
 * @brief Función booleana que dado tres parámetros comprueba si el primero está
 * en el intervalo formado por el seugndo y el tercero
 *
 * @param caracter_1
 * @param caracter_2
 * @param caracter_3
 */
bool PerteneceAlIntervalo(char caracter_1, char caracter_2 = ' ',
                          char caracter_3 = '~') {
  if (caracter_2 <= caracter_1 && caracter_1 <= caracter_3) {
    return true;
  }
  return false;
}

/**
 * @brief Funcion encargada de comprobar a que tipo pertence el caracter
 * introducido
 *
 * @param caracter
 */
std::string QueTipoDeCaracter(char caracter) {
  std::string resultado{};

  if ('a' <= caracter && caracter <= 'z') {
    resultado += "una letra minuscula";
  } else if ('A' <= caracter && caracter <= 'Z') {
    resultado += "una letra mayuscula";
  } else if ('0' <= caracter && caracter <= '9') {
    resultado += "es un digito";
  } else if (PerteneceAlIntervalo(caracter)) {
    resultado += "es un simbolo";
  } else {
    resultado += "un caracter de control";
  }

  return resultado;
}

int main() {
  const std::string& cadena_a_comprobar{"3r$\nJ"};

  for (char caracter : cadena_a_comprobar) {
    std::cout << "El caracter " << static_cast<int>(caracter)
              <<  " es " << QueTipoDeCaracter(caracter) << std::endl;
  }

  return 0;
}