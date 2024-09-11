#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the sum of a rectangle
int rectangleSum(vector<vector<int>>& A, int l1, int r1, int l2, int r2) {
    int sum = 0;
    
    // Loop through the sub-matrix from (l1, r1) to (l2, r2)
    for (int i = l1; i <= l2; ++i) {
        for (int j = r1; j <= r2; ++j) {
            sum += A[i][j];
        }
    }
    
    return sum;
}

int main() {
    // Define the matrix A
    vector<vector<int>> A = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Define the coordinates (l1, r1) and (l2, r2)
    int l1 = 1, r1 = 1, l2 = 2, r2 = 2;
    
    // Call the function to get the sum of the rectangle
    int result = rectangleSum(A, l1, r1, l2, r2);

    // Output the result
    cout << "Sum of the rectangle from (" << l1 << "," << r1 << ") to (" << l2 << "," << r2 << ") is: " << result << endl;

    return 0;
}
