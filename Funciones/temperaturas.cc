/**
 * Desarrolle en C++ un programa que imprima una tabla de temperaturas en grados
 * Fahrenheit (ºF), Celsius (ºC) y Kelvin (K). Desarrolle funciones
 * FarenheitToCelsius() y FahrenheitToKelvin() para realizar las conversiones.
 * El programa tomará por línea de comandos tres números enteros que
 * corresponden con:
 *
 * La mínima temperatura (en Fahrenheit) que se imprimirá en la tabla
 * La máxima temperatura que se imprimirá
 * La diferencia entre temperaturas de la tabla
 */

#include <iomanip>
#include <iostream>

/**
 * @brief Funcion encargada de pasar de farenheit a celsius
 *
 * @param temperatura_farenheit Temperatura a pasar a celsius
 */
double FarenheitToCelsius(int temperatura_farenheit) {
  return (temperatura_farenheit - 32) / 1.8;
}

/**
 * @brief Funcion que llama a FarenheitToCelsius, guarda su salida y la usa para
 * pasar la temperatura a kelvin
 *
 * @param temperatura_farenheti Temperatura a pasar a kelvins
 */
double FahrenheitToKelvin(int tempereatura_farenheit) {
  double temp_celsius;

  temp_celsius = FarenheitToCelsius(tempereatura_farenheit);

  return temp_celsius + 273.15;
}

/**
 * @brief Funcion que se encarga de la salida del programa
 *
 * @param temperatura_minima
 * @param temperatura_maxima
 * @param diferencia_temperaturas
 */
void SalidaPrograma(int temperatura_minima, int temperatura_maxima,
                    int diferencia_temperaturas) {
  std::cout << std::setw(10) << "Farenheit" << std::setw(10) << "Celsius"
            << std::setw(10) << "Kelvin" << std::endl;

  for (int temp{temperatura_minima}; temp <= temperatura_maxima;
       temp += diferencia_temperaturas) {
    std::cout << std::fixed << std::setprecision(2);

    std::cout << std::setw(10) << temp << std::setw(10)
              << FarenheitToCelsius(temp) << std::setw(10)
              << FahrenheitToKelvin(temp) << std::endl;
  }
}

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cerr << "ERROR. El programa " << argv[0]
              << "usa <temp_min> <temp_maxima> <diferencia_de_temperatura>"
              << std::endl;
    return 1; 
  }

  SalidaPrograma(std::atoi(argv[1]), std::atoi(argv[2]), std::atoi(argv[3]));

  return 0;
}