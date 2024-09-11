#include <iostream>
#include <vector>
using namespace std;

// Function to find the row with the maximum number of 1's
int rowWithMaxOnes(const vector<vector<int>>& matrix) {
    int n = matrix.size();    // Number of rows
    int m = matrix[0].size(); // Number of columns

    int maxRowIndex = -1;     // To store the row index with the maximum number of 1's
    int j = m - 1;            // Start from the top-right corner (column m-1)

    // Traverse each row
    for (int i = 0; i < n; ++i) {
        // Move left while there are 1's in the current row
        while (j >= 0 && matrix[i][j] == 1) {
            j--;              // Move left
            maxRowIndex = i;   // Update the row index with maximum 1's
        }
    }

    return maxRowIndex;
}

int main() {
    // Define the input matrix
    vector<vector<int>> matrix = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };

    // Find the row with the maximum number of 1's
    int result = rowWithMaxOnes(matrix);

    // Output the result
    cout << "Row with the maximum number of 1's is: " << result << endl;

    return 0;
}
