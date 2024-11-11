/**
  * Universidad de La Laguna 
  * Escuela Superior de Ingeniería y Tecnología 
  * Grado en Ingeniería Informática 
  * Informática Básica 2024-2025 
  * 
  * @author Pablo Montes Marichal
  *         alu0101648262@ull.edu.es
  * @date 07 Nov 2024
  * @brief the program reads a word and prints
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>
#include <cctype>
/**
 * Changes the case of a word
 *
 * @param cadena Original string used to create an inversed string
 * @return returns the inverted string
 */
std::string CambiarLetras(std::string &cadena) {
  for (char &auxiliar : cadena) { //auxiliar es una referencia para que la string cadena se cambie in-time
    if (std::islower(auxiliar)){
      auxiliar = std::toupper(auxiliar);
    }
    else if (std::isupper(auxiliar)) {
      auxiliar = std::tolower(auxiliar);
    }
  }
  return cadena;
}
int main() {
  std::string cadena;
  std::cin >> cadena;
  std::cout << CambiarLetras(cadena) << std::endl;
  return 0;
}