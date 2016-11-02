//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
// Description : Exam - task 2
//============================================================================

#include <iostream>
using namespace std;

void print_multi_table(int number);

int main() {
  int number;

  cout << "Which number's multiplication table do you wish to print?" << endl;
  cin >> number;

  print_multi_table(number);

  return 0;
}

void print_multi_table(int number) {
  for (int i = 1; i <= 10; i++) {
    cout << i << " * " << number << " = " << i*number << endl;
  }
}
