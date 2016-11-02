#include <iostream>

using namespace std;

/**
 * Create a function that prints a multiplication table with a given base number
 * It should take the base number as a parameter, and print the output to the cout
 *
 * The output should look like this for 5 as base:
 *   1 * 5 = 5
 *   2 * 5 = 10
 *   3 * 5 = 15
 *   4 * 5 = 20
 *   5 * 5 = 25
 *   6 * 5 = 30
 *   7 * 5 = 35
 *   8 * 5 = 40
 *   9 * 5 = 45
 *   10 * 5 = 50
 */

void multiplication(int number) {
  cout << "Szorzótábla:" << endl;
  for (int i = 1; i <=10; i++) {
    cout << i << " * " << number << " = " << i * number << endl;
  }
}

int main() {
  int number;
  cout << "Adj meg egy számot!" << endl;
  cin >> number;
  multiplication(number);
  return 0;
}
