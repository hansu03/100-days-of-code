// wap for pyramid star pattern 
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int size = 5;
  for (int i = 0; i < size; i++) {
    // print spaces
    for (int j = 0; j < size - i - 1; j++) {
      cout << " ";
    }
    // print stars
    for (int k = 0; k < 2 * i + 1; k++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}

// humne kya kiya 
// we have first
