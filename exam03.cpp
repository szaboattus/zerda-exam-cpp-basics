#include <iostream>

using namespace std;

/**
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */

float multiplaj(float *mypointer, float numb);

int main() {
  float total = 123;
  float *mypointer = &total;
  cout << multiplaj(mypointer,5);
  return 0;
}

float multiplaj(float *mypointer, float numb){
  *mypointer = *mypointer * numb;
  return *mypointer;
}
