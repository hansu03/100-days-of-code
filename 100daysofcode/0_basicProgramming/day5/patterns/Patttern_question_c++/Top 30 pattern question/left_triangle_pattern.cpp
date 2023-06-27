// left triangle star pattern
#include <iostream>
using namespace std;

int main() {
    
  // size of the triangle
  int size = 5;
    
  // loop to print the pattern  begins here
  for (int i = 0; i < size; i++) {
    // print column 
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}


// output will return left star pattern
