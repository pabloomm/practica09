    /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file time_descomposition.cc
  * @author Pablo Montes Marichal alu0101648262@ull.edu.es
  * @date Nov 09 2023
  * @brief The program descomposes a quantitiy of seconds introdeuced by the user in hous, minutes and seconds
  * @bug There are no known bugs
  */
 #include<iostream>
  int number;
  bool MultiplesOfThree() {
    int sum = 0;  
      while (number > 0) {
        int m;
        m = number % 10;
        sum = sum + m;
        number = number / 10;
    }  
    if (sum % 3 == 0) {
        return true;
    } else {
        return false;
    }
  }
  int main() {
    std::cin >> number;
    std::cout << std::boolalpha << MultiplesOfThree();  
    return 0; 
  }
