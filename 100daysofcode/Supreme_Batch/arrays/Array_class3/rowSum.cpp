#include<bits/stdc++.h>
using namespace std;

void printRowSum(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        cout << "Row " << i << " Sum is " << sum << endl;
    }
}

void printColumnSum(int arr[][3], int rows, int cols) {
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += arr[i][j];
        }
        std::cout << "Column " << j << " Sum is " << colSum << std::endl;
    }
}

int main() {
    int matrix[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3;
    int cols = 3;

    printRowSum(matrix, rows, cols);
    printColumnSum(matrix, rows, cols);

    return 0;
}
