// C++ program to implement
// the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to search if element X
// is present in reverse sorted array
int binarySearch(int arr[], int N, int X)
{
    // Store the first index of the
    // subarray in which X lies
    int start = 0;

    // Store the last index of the
    // subarray in which X lies
    int end = N;

    while (start <= end) {

        // Store the middle index
        // of the subarray
        int mid = start
                  + (end - start) / 2;

        // Check if value at middle index
        // of the subarray equal to X
        if (X == arr[mid]) {

            // Element is found
            return mid;
        }

        // If X is smaller than the value
        // at middle index of the subarray
        else if (X < arr[mid]) {

            // Search in right
            // half of subarray
            start = mid + 1;
        }
        else {

            // Search in left
            // half of subarray
            end = mid - 1;
        }
    }

    // If X not found
    return -1;
}

// Driver Code
int main()
{
    int arr[] = { 5, 4, 3, 2, 1 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int X = 5;
    cout << binarySearch(arr, N, X);
    return 0;
}
