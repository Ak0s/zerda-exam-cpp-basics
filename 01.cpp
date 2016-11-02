//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
// Description : Exam - task 1
//============================================================================

#include <iostream>
using namespace std;

bool bigger_or_equal(int array[], int length, int number);

int main() {
  int array[] = {3, 2, 4, 6, -1};
  int length = sizeof(array)/sizeof(int);
  int number;

  cout << "Which number do you search for in the array?" << endl;
  cin >> number;

  if (bigger_or_equal(array,length,number) == 0) {
    cout << "There isn't any equal or bigger number than the given number in the array!";
  }
  else {
    cout << "There is an equal or bigger number(s) than the given number in the array!";
  }

  return 0;
}

bool bigger_or_equal(int array[], int length, int number) {
  bool bigger_or_equal = false;
  for (int i = 0; i < length; i++) {
    if (array[i] == number || array[i] > number) {
      bigger_or_equal = true;
      break;
    }
  }
  return bigger_or_equal;
}
