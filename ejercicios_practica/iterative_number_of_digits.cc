   /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file iterative_number_of_digits.cc
  * @author Pablo Montes Marichal alu0101648262@ull.edu.es
  * @date Nov 11 2024
  * @brief The program gets the number of digits of the number given in an iterative way
  * @bug There are no known bugs
  */

#include <iostream>

/** 
**
 * Gives the numbers of digits of the number given
 *
 * @param n The number given
 * @return returns the number of digits
 */
int number_of_digits(int n) {
  int contador;
  if (n == 0) {
        return 1;
    }

    while (n > 0) {
        contador++;
        n /= 10;
    }
    
    return contador;
  
 
}

int main() {
  int n;
  std::cin >> n;
  std::cout << number_of_digits(n) << std::endl;
  return 0;
}
