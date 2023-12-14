#include<bits/stdc++.h>
using namespace std;

int main() {
    const int rows = 3;
    const int columns = 4;

    // Declaration and initialization of a 2D array
    int arr[rows][columns] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing and printing elements of the 2D array
    cout << "2D Array Elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
