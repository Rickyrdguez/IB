/**
 * Programa que tiene de entrada 'n' 's' 'e' 'w' y tine como salida el
 * movimiento expresado en coordenadas, empezando en (0,0)
 */

#include <iostream>
#include <string>

int main() {
  char caracter;
  int coordenada_x{0};
  int coordenada_y{0};

  while(std::cin >> caracter) {
    if (caracter == 'e') {
      coordenada_x += 1;
    } else if (caracter == 'w') {
      coordenada_x -= 1;
    } else if (caracter == 's') {
      coordenada_y += 1;
    } else if (caracter == 'n') {
      coordenada_y -= 1;
    }
  }

  std::cout << "(" << coordenada_x << ", " << coordenada_y << ")" << std::endl;

  return 0;
}
