/**
 * Escrfibe un programa que dado dos numeros, calcule la diferencia de sus
 * armonicos
 */
#include <iostream>
#include <iomanip>


/**
 * @brief Funcion que cambia las variables
 * 
 * @param numero_n Primer numero
 * @param numero_m Segundo numero
 */
void CambioVariable(double& numero_n, double& numero_m) {
  double variable_temp = numero_n;

    variable_temp = numero_n;
    numero_n = numero_m;
    numero_m = variable_temp;
}

/**
 * @brief Funcion que calcula la diferencia de harmonico
 * 
 * @param numero_n Primer numero
 * @param numero_m Segundo numero
 */
void CalcularDiferenciaHarmonico(double numero_n, double numero_m) {
  double resultado{0.0};

  if (numero_m > numero_n) {
    CambioVariable(numero_n, numero_m);
  }
  for(double i{numero_m + 1}; i <= numero_n; ++i) {
    resultado += 1.0/i;
  }

  std::cout << std::fixed << std::setprecision(10) << resultado << std::endl;
}

int main() {
  double numero_n;
  double numero_m;

  while(std::cin >> numero_n >> numero_m) {
    CalcularDiferenciaHarmonico(numero_n, numero_m);
  }

  return 0;
}