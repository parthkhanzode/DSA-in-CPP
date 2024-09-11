#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if the transformed array is sorted
bool isSortedAfterTransformation(const vector<int>& arr, int K) {
    int n = arr.size();
    vector<int> transformed(n);

    // Calculate transformed array as |arr[i] - K|
    for (int i = 0; i < n; ++i) {
        transformed[i] = abs(arr[i] - K);
    }

    // Check if the transformed array is sorted
    for (int i = 1; i < n; ++i) {
        if (transformed[i] < transformed[i - 1]) {
            return false;
        }
    }
    return true;
}

// Function to find K such that transformed array is sorted
int findK(const vector<int>& arr) {
    int n = arr.size();
    int minValue = *min_element(arr.begin(), arr.end());
    int maxValue = *max_element(arr.begin(), arr.end());

    // Check for minValue and maxValue as possible candidates for K
    if (isSortedAfterTransformation(arr, minValue)) {
        return minValue;
    }
    if (isSortedAfterTransformation(arr, maxValue)) {
        return maxValue;
    }

    // If no valid K is found
    return -1;
}

int main() {
    // Define the input array
    vector<int> arr = {4, 7, 9, 5};

    // Find the K such that the transformed array is sorted
    int result = findK(arr);

    // Output the result
    if (result != -1) {
        cout << "K such that the transformed array is sorted: " << result << endl;
    } else {
        cout << "No such K exists." << endl;
    }

    return 0;
}
