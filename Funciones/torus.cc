/**
 * Escriba un programa que contenga:
 *
 * Una función que calcule y devuelva la longitud de una circunferencia (2πr),
 * dado su radio r como un número real.
 *
 * Una función que calcule y devuelva área de un círculo (πr2), dado su radio r
 * como número real.
 *
 * Una función que use las funciones anteriores para calcular y devolver el
 * volumen de un toroide, dados su radio mayor y su radio menor como sendos
 * números reales. El volumen de un toroide se calcula multiplicando la longitud
 * circunferencia del radio mayor por el área del círculo del radio menor.
 *
 * El programa debe recibir dos números reales y mostrar el volumen del toroide
 * correspondiente, asumiendo que el mayor valor corresponde al radio mayor. Se
 * acepta que ambos valores sean iguales.
 */

#include <iostream>

constexpr double kPi{3.1415926536};

/**
 * @brief Funcion encargada de calcular la longitud de una circunferencia
 *
 * @param radio Entero que representa el radio de la circunferencia
 */
double LongitudDeCircunferencia(const double radio) { return 2 * kPi * radio; }

/**
 * @brief Funcion encargada de calcular el area de un círculo
 *
 * @param radio Entero que representa el radio del círculo
 */
double AreaDeUnCirculo(const double radio) { return kPi * radio * radio; }

/**
 * @brief Funcion que haciendo uso de LongitudDeCircunferencia y AreaDeUnCirculo
 * calcula el volumen de un toroide
 *
 * @param radio_menor
 * @param radio_mayor
 */
double CalcularVolumenToroide(const double radio_menor, const double radio_mayor) {
  return LongitudDeCircunferencia(radio_mayor) * AreaDeUnCirculo(radio_menor);
}

/**
 * @brief Funcion encargada de cambiar los valores de las variables
 * 
 * @param radio_menor
 * @param radio_mayor
 */
void CambioDeValores(double& radio_menor, double& radio_mayor) {
  double variable_auxiliar = radio_mayor;
  radio_mayor = radio_menor;
  radio_menor = variable_auxiliar;
}

/**
 * @brief Funcion encargada de comprobar cual es el valor mayor
 * 
 * @param radio_menor
 * @param radio_mayor
 */
bool CualEsMayor(const double radio_menor, const double radio_mayor) {
  if(radio_mayor < radio_menor) {
    return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "ERROR. EL programa " << argv[0] << " usa <radio_menor> <radio_mayor>" << std::endl;
    return -1;
  }

  double radio_menor = std::stod(argv[1]);
  double radio_mayor = std::stod(argv[2]);

  if(!CualEsMayor(radio_menor, radio_mayor)) {
    CambioDeValores(radio_menor, radio_mayor);
  }

  std::cout << CalcularVolumenToroide(radio_menor, radio_mayor) << std::endl;

  return 0;
}