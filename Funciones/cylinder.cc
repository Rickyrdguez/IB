/**
 * Escriba un programa que contenga:
 *
 * Una función que calcule y devuelva el área de un círculo (πr2), dado su radio
 * r como un número real.
 * Una función que use la anterior para calcular el volumen de un cilindro,
 * dados el radio de su base y su altura como sendos números reales. El volumen
 * del cilindro se calcula como el área de su base multiplicada por su altura
 *
 * El programa debe recibir dos números reales (primero radio, luego altura) y
 * mostrar el volumen del cilindro correspondiente.
 */

#include <iostream>

constexpr double kPi{3.1415926};

/**
 * @brief Funcion encargada de calcular el área de un círculo
 *
 * @param radio Entero que representa el radio del cilindro
 */
double AreaDelCirculo(const int& radio) { return kPi * radio * radio; }

/**
 * @brief Función encargada de calcular el volumen de un cilindro
 *
 * @param radio Entero que representa el radio del círculo de la base
 * @param altura Entero que representa la altura del cilíndro
 */
double VolumenDelCilindro(const int& radio, const int& altura) {
  return AreaDelCirculo(radio) * altura;
}

/**
 * @brief Funcion que comprueba que los parámetros introducidos son correctos
 *
 * @param radio
 * @param altura
 */
bool ParametrosCorrectos(const int& radio, const int& altura) {
  if (radio < 0 || altura < 0) {
    return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "ERROR. El programa " << argv[0]
              << " trabaja con <radio> <altura>" << std::endl;
    return -1;
  }

  if (!ParametrosCorrectos(std::stoi(argv[1]), std::stoi(argv[2]))) {
    std::cerr << "El programa trabaja con números mayores iguales a 0"
              << std::endl;
    return -1;
  }

  std::cout << VolumenDelCilindro(std::stoi(argv[1]), std::stoi(argv[2]))
            << std::endl;

  return 0;
}