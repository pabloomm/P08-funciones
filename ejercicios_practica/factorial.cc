/**
  * Universidad de La Laguna 
  * Escuela Superior de Ingeniería y Tecnología 
  * Grado en Ingeniería Informática 
  * Informática Básica 2024-2025 
  * 
  * @author Pablo Montes Marichal
  *         alu0101648262@ull.edu.es
  * @date 11 Nov 2024
  * @brief gives the factorial of a number
  * @bug There are no known bugs
  */

 #include<iostream>
/** 
**
 * Gives the factorial iteration given
 *
 * @param numero The number of the factorial iteration
 * @return returns the factorial
 */
int factorial(int numero){ 
int resultado = 1;  
if( numero >= 0 && numero <= 12) {  
    for(int i = 1; i <= numero; ++i){
     resultado *= i;
 	    
    }  
    return resultado;
  }
  else {
  return 0;
  }
}
int main() {
  int numero, resultado;
  std::cin>> numero;
   resultado = factorial (numero);
   std::cout << resultado << std::endl;
}
