#include <iostream>

int main() {
  int numero1{0};
  int numero2{0};

  std::cin >> numero1;
  std::cin >> numero2;

  if (numero1 < numero2) {
    for (int i{numero2}; i >= numero1; --i) {
      std::cout << i << std::endl;
    }
  } else if (numero2 < numero1) {
    for (int i{numero1}; i >= numero2; --i) {
      std::cout << i << std::endl;
    }
  } else if (numero1 == numero2) {
    std::cout << numero1 << std::endl;
  }

  return 0;
}