#include <iostream>
#include <vector>
using namespace std;

// Function to print matrix in wave form
void printWaveForm(const vector<vector<int>>& matrix) {
    int rows = matrix.size();       // Number of rows
    int cols = matrix[0].size();    // Number of columns

    for (int j = 0; j < cols; ++j) {
        if (j % 2 == 0) {
            // If the column is even, print top to bottom
            for (int i = 0; i < rows; ++i) {
                cout << matrix[i][j] << " ";
            }
        } else {
            // If the column is odd, print bottom to top
            for (int i = rows - 1; i >= 0; --i) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    // Define the matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print the matrix in wave form
    printWaveForm(matrix);

    return 0;
}
