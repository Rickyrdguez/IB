/**
 * Write a program that, given a number n, prints a “triangle of size n.
 *
 * Input
 * Input consists of a natural number n.
 *
 *
 * Output
 *Print n lines, in such a way that the i-th line contains i asterisks
 */

#include <iostream>

/**
 * @brief Funcion que hace el triangulo
 * 
 * @param numero Numero de veces que se va a imprimir el *
 */

 void HacerTriangulo(int numero) {
  for (int i{1}; i <= numero; ++i) {
    for (int j{1}; j <= i; ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
 }

 int main(int argc, char* argv[]) {
  if(argc != 2) {
    return -1;
  }

  HacerTriangulo(atoi(argv[1]));

  return 0;
 }