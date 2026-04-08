#include <cassert>
#include <iostream>

/**
 * @brief Calcula el principio del intervalo
 *
 * @param a1 Primer numero
 * @param a2 Segundo numero
 * @return int Que representa el inicio del intervalo
 */
int InicioIntervalo(const int a1, const int a2) {
  int inicio_intervalo;
  if (a1 > a2) {
    inicio_intervalo = a1;
  } else if (a2 > a1) {
    inicio_intervalo = a2;
  } else {
    inicio_intervalo = a1;
  }
  return inicio_intervalo;
}

/**
 * @brief Calcula el final del intervalo
 *
 * @param b1 Primer numero
 * @param b2 Segundo numero
 * @return int Que representa el final del intervalo
 */
int FinalIntervalo(const int b1, const int b2) {
  int final_intervalo;
  if (b1 > b2) {
    final_intervalo = b2;
  } else if (b2 > b1) {
    final_intervalo = b1;
  } else {
    final_intervalo = b1;
  }
  return final_intervalo;
}

int main() {
  int a1, b1, a2, b2;

  std::cin >> a1;
  std::cin >> b1;
  std::cin >> a2;
  std::cin >> b2;

  if (InicioIntervalo(a1, a2) > FinalIntervalo(b1, b2)) {
    std::cout << "[]" << std::endl;
  } else {
    std::cout << "[" << InicioIntervalo(a1, a2) << "," << FinalIntervalo(b1, b2)
              << "]" << std::endl;
  }

  return 0;
}