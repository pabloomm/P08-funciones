  /**
    * Universidad de La Laguna 
    * Escuela Superior de Ingeniería y Tecnología 
    * Grado en Ingeniería Informática 
    * Informática Básica 2024-2025 
    * 
    * @author Pablo Montes Marichal
    *         alu0101648262@ull.edu.es
    * @date 08 Nov 2024
    * @brief the program reads the length of the three sides of a triangle, and using the Heron's formula prints the area of the triangle.

    * @bug There are no known bugs
    * @see 
    */
  
  #include <iostream>
  #include <cmath>
  
  double Area(const double a, const double b, const double c) {
    double semiperimetro = (a + b + c) / 2.0;
    double resultado;
    resultado = std::sqrt(semiperimetro * ((semiperimetro - a) * (semiperimetro - b) * (semiperimetro - c)));
    return resultado;
  }
  bool IsAValidTriangle(const double  a, const double b, const double c) {
    if ( (a + b > c) && (a + c > b) && (b + c > a))
    return true;
    else
    return false;
  }
  int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    if(IsAValidTriangle(a, b, c))
    std::cout << Area(a, b, c) << std::endl;
    else
    std::cout << "Not a valid Triangle" << std::endl;
    return 0;
  }