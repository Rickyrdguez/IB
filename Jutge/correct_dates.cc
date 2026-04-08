/**
 * Escribe un programa que dadas unas fechas compruebe que son correctas o  no
 */

 #include <iostream>

   /**
    * @brief funcion que comprueba si el año es bisiesto
    * 
    * @param anio Numero que representa el año
    */
   bool EsBisiesto (int anio) {
    if (anio % 400 == 0) return true;
    if (anio % 100 == 0) return false;
    return anio % 4 == 0;
   }

   /**
    * @brief Comprueba que la fecha es correcta
    * 
    * @param dia numero que representa el dia
    * @param mes numero que representa el mes
    * @param anio numero que representa el anio
    */
   bool FechaCorrecta(int dia, int mes, int anio) {
    if (mes < 1 || mes > 12) return false;

    int dia_mes;
    if (mes  == 2) {
      if (!EsBisiesto(anio)) {
        dia_mes = 28;
      } else {
        dia_mes = 29;
      } 
    } else if(mes == 4 || mes == 6 || mes == 9 || mes == 11) {
      dia_mes = 30;
    } else {
      dia_mes = 31;
    }

    if (dia < 1 || dia > dia_mes) return false;

    if (anio < 1800 || anio > 9999) return false;

    return true;
    }

    int main() {
      int dia;
      int mes;
      int anio;

      while(std::cin >> dia >> mes >> anio) {
        if(FechaCorrecta(dia, mes, anio)) {
          std::cout << "Correct Date" << std::endl;
        } else {
          std::cout << "Incorrect Date" << std::endl;
        }
      }

      return 0;
    }
   