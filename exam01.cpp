#include <iostream>

using namespace std;

/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

bool biggerorequal (int array[], int length, int number){
  bool bigoreq;
  for (int i = 0; i < length; i++) {
    if (array[i] <= number) {
    bigoreq = 1;
    }
  }
  return bigoreq;
}

int main(){
  int array[] = {3, 2, 4, 6, -1};
  int length = sizeof(array) / sizeof(int);
  int number;
  cout << "Adj meg egy számot!" << endl;
  cin >> number;
    if (biggerorequal( array, length, number) == 1) {
      cout << "Van nagyobb vagy egyenlő szám a '" << number << "' számhoz viszonyítva a tömben" << endl;
    }
    else {
      cout << "Nincs nagyobb vagy egyenlő szám a '" << number <<"' számhoz viszonyítva a tömben" << endl;
    }
  return 0;
}
