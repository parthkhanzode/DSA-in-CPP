#include <iostream>
#include <vector>
using namespace std;

// Function to find the row with the maximum sum
int rowWithMaxSum(const vector<vector<int>>& matrix) {
    int maxSum = INT32_MIN;  // Initialize the maximum sum to a very small value
    int rowIndex = -1;     // Initialize the row index
    
    // Loop through each row
    for (int i = 0; i < matrix.size(); ++i) {
        int currentSum = 0;
        
        // Calculate the sum of the current row
        for (int j = 0; j < matrix[i].size(); ++j) {
            currentSum += matrix[i][j];
        }
        
        // If the current row's sum is greater than the maximum sum found so far, update
        if (currentSum > maxSum) {
            maxSum = currentSum;
            rowIndex = i;  // Update the row index
        }
    }
    
    return rowIndex;
}

int main() {
    // Define a 2D matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Get the row with the maximum sum
    int result = rowWithMaxSum(matrix);

    // Output the row number (indexing starts from 0)
    cout << "The row with the maximum sum is: " << result << endl;

    return 0;
}
