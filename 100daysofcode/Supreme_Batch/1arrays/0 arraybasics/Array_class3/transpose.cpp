#include <iostream>

int main() {
    int originalMatrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int numRows = 3;
    int numCols = 3;

    // Create a new matrix for the transpose
    int transposeMatrix[3][3];

    // Transpose the matrix
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            transposeMatrix[j][i] = originalMatrix[i][j];
        }
    }

    // Print the original matrix
    std::cout << "Original Matrix:" << std::endl;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            std::cout << originalMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Print the transpose matrix
    std::cout << "Transpose Matrix:" << std::endl;
    for (int i = 0; i < numCols; i++) {
        for (int j = 0; j < numRows; j++) {
            std::cout << transposeMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}