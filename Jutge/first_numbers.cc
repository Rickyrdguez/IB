#include <iostream>

int main() {
  int numero;

  std::cin >>  numero;

  for(int i{0}; i <= numero; ++i){
    std::cout << i << std::endl;
  }

  return 0;
}