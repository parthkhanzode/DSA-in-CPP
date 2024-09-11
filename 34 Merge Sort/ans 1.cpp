#include<iostream>
using namespace std;

// Merges two subarrays of arr[]
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        // For descending order, change L[i] <= R[j] to L[i] >= R[j]
        if (L[i] >= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Main function that sorts arr[l..r] using merge()
void mergeSort(int arr[], int l, int r) {
    if (l >= r) return; // Base case
    int m = l + (r - l) / 2; // Calculate mid point of array
    mergeSort(arr, l, m); // Sort first half
    mergeSort(arr, m + 1, r); // Sort second half
    merge(arr, l, m, r); // Merge the sorted halves
}

// Utility function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array is: \n";
    printArray(arr, arr_size);
    
    mergeSort(arr, 0, arr_size - 1);
    
    cout << "Sorted array in descending order is: \n";
    printArray(arr, arr_size);
    return 0;
}