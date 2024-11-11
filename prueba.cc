#include<iostream> 

/**
  Gives the number of digits of the number given
 
  @param n The number given
  @return returns the number of digits
 */
int number_of_digits(int n) {
    n = std::abs(n);
    int contador = 0;

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
    std::cout << "Introduce un número: ";
    std::cin >> n;
    std::cout << "El número de dígitos es: " << number_of_digits(n) << std::endl;
    return 0;
