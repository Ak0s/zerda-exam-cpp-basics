//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
// Description : Exam - task 3
//============================================================================

#include <iostream>
using namespace std;

void multiplier(float* a, float b);

int main() {
  float total = 123;
  float* p_total = &total;
  float multip_number;

  cout << "The number you want to multiply with: ";
  cin >> multip_number;

  multiplier(p_total, multip_number);
  cout << "After the multiplication 'total' is: " << total;

  return 0;
}

void multiplier(float* a, float b) {
  *a = *a * b;
}
