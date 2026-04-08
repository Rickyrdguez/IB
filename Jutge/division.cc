/**
 * Escribe un programa que lea un número entero 𝑎 y un número natural 𝑏, con 𝑏 >
 * 0, e imprima la división entera 𝑑 y el resto 𝑟 de 𝑎 dividido por 𝑏. Recuerda
 * que, por definición, 𝑑 y 𝑟 deben ser los únicos números enteros tales que 0 ≤
 * 𝑟 < 𝑏 y 𝑑 · 𝑏 + 𝑟 = 𝑎.
 *
 * Entrada
 * La entrada consiste en 𝑎 y 𝑏, con 𝑏 > 0.
 *
 * Salida
 * Imprime una línea con la división entera y el resto de 𝑎 dividido por 𝑏,
 * separados por un espacio.
 */

 #include <iostream>
 #include <cassert>

 int main() {
  long long numero_a, numero_b;

  std::cin >> numero_a;
  std::cin >> numero_b;

  assert(numero_b > 0);

  long long division = numero_a / numero_b;
  long long resto = numero_a - division * numero_b;

  if (numero_a < 0 && resto != 0) {
    --division;
  }

  std::cout << division << " " << resto << std::endl;

  return 0;
 }