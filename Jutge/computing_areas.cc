/**
 * Programa que recibe una descripcion de un rectangulo y un circulo seguido de
 * dos numero enteros positivos y devuelve el area de cada uno con 6 decimales
 * de prercision
 */

#include <iomanip>
#include <iostream>
#include <string>

/**
 * @brief Programa que calcula el área de un circulo
 *
 * @param radio Radio del circulo
 */
void CalcularAreaCirculo(double radio) {
  constexpr double kPi{3.14159265358979323846};

  double area = kPi * radio * radio;

  std::cout << std::fixed << std::setprecision(6) << area << std::endl;
}

/**
 * @brief Programa que calcula el área de un rectangulo
 *
 * @param base Base del rectangulo
 * @param altura Altura del rectangulo
 */
void CalcularAreaRectangulo(double base, double altura) {
  double area = base * altura;

  std::cout << std::fixed << std::setprecision(6) << area << std::endl;
}

int main() {
  int numero_descripciones;

  if (!(std::cin >> numero_descripciones)) {
    return 0;
  }

  for (int i{0}; i < numero_descripciones; ++i) {
    std::string tipo_cuerpo;
    std::cin >> tipo_cuerpo;

    if (tipo_cuerpo == "rectangle") {
      double base, altura;
      std::cin >> base >> altura;

      CalcularAreaRectangulo(base, altura);
    } else if (tipo_cuerpo == "circle") {
      double radio;
      std::cin >> radio;

      CalcularAreaCirculo(radio);
    }
  }

  return 0;
}