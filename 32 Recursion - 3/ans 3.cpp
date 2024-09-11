#include <iostream>
using namespace std;
// Recursive function to find the index of a given element in the array

int findIndex(int arr[], int start, int n, int target) {
// Base case: If start index is out of bounds, return -1
if (start >= n) {
return -1;
}
// If the target element is found, return the current index
if (arr[start] == target) {
return start;
}
// Recursive case: Search in the remaining part of the array
return findIndex(arr, start + 1, n, target);
}
int main() {
int n, target;
cout << "Enter the number of elements in the array: ";
cin >> n;
int arr[n];
cout << "Enter the elements of the array: ";
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
cout << "Enter the element to find: ";
cin >> target;
int index = findIndex(arr, 0, n, target);
if (index != -1) {
cout << "Element " << target << " found at index: " << index << endl;
} else {
cout << "Element " << target << " is not present in the array." << endl;
}
return 0;
}