//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
// Description : Exam - task 4
//============================================================================

#include <iostream>
using namespace std;

int divisor_counter(int number);

int main() {
  int number;

  cout << "Give me a number and I will give you all its divisors: ";
  cin >> number;

  cout << "The number of divisors of " << number << " is: " << divisor_counter(number);

  return 0;
}

int divisor_counter(int number) {
  int number_of_divisors;

  cout << endl << "The divisors of " << number << " in ascending order are: ";

  for (int i = 1; i <= number; i++) {
    if (number%i == 0) {
      number_of_divisors++;
      cout << i << " ";
    }
  }
  cout << endl;
  return number_of_divisors;
}
