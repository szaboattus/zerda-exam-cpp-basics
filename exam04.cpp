#include <iostream>

using namespace std;

/**
 * Create a function that takes an integer and returns how many divisors it has
 */

int divisors(int number) {
  int divs = 0;
  cout << "Osztók:" << endl;
  for (int i = 1; i <= number; ++i){
    if (number % i == 0) {
      cout << i << endl;
      divs++;
      }
  }
  return divs;
}

int main() {
  int number;
  cout << "Adj meg egy számot!" << endl;
  cin >> number;
  cout << divisors(number) << "db osztója van a " << number << " számnak";
  return 0;
}
