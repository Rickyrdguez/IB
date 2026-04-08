#include <cassert>
#include <iostream>

int main() {
  int numero1{0};
  int numero2{0};

  while (std::cin >> numero1 >> numero2) {
    if (numero1 < numero2) {
      for (int i{numero1}; i <= numero2; ++i) {
        std::cout << i << std::endl;
        if(i < numero2) {
          std::cout << ",";
        }
      }
    } else if (numero1 == numero2) {
      std::cout << numero1 << std::endl;
    }
  }

  return 0;
}