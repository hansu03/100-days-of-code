#include <iostream>
#include <climits> // Include the header for INT_MAX and INT_MIN

int main() {
    // Define a 2D array
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    int numRows = 3;
    int numCols = 3;

    int maxi = INT_MIN; // Initialize maxVal with the smallest possible integer
    int mini = INT_MAX; // Initialize minVal with the largest possible integer

    // Loop through the rows and columns of the 2D array
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (arr[i][j] > maxi) {
                maxi = arr[i][j]; // Update maxVal if a larger element is found
            }
            if (arr[i][j] < mini) {
                mini = arr[i][j]; // Update minVal if a smaller element is found
            }
        }
    }

    // Print the maximum and minimum values
    std::cout << "Maximum value: " << maxi << std::endl;
    std::cout << "Minimum value: " << mini << std::endl;

    return 0;
}
