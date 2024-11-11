   /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file time_descomposition.cc
  * @author Pablo Montes Marichal alu0101648262@ull.edu.es
  * @date Nov 11 2024
  * @brief The program descomposes a quantitiy of seconds introdeuced by the user in hous, minutes and seconds
  * @bug There are no known bugs
  */

  #include <iostream>
/** 
**
 * Gives the descomposition of a quantity of seconds given
 *
 * @param numero The seconds given
 * @return returns the time descomposition
 */
  void decompose (int numero, int& horas, int& minutos, int& segundos) {
    segundos = numero % 60;
    horas = numero / 3600;
    minutos = (numero / 60) % 60;
  }
   

  int main () {
 
    int numero, horas, minutos, segundos;
    std::cin >> numero;
    decompose(numero, horas, minutos, segundos);  
    std::cout << horas << " " << minutos << " " << segundos; 
    return 0;

  }
