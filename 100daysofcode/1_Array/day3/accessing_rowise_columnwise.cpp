#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 4;
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing elements row-wise
    cout << "Accessing elements row-wise:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Accessing elements column-wise
    cout << "Accessing elements column-wise:" << endl;
    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i < ROWS; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
