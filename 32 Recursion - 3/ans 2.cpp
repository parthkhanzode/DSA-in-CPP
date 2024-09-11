#include <iostream>
using namespace std;
// Recursive function to find the sum of elements in an array
int sumArray(int arr[], int n) {
// Base case: If array has no elements, return 0
if (n <= 0) {
return 0;
}
// Recursive case: Sum the first element and the sum of the rest of the array
return arr[n - 1] + sumArray(arr, n - 1);
}
int main() {
int n;
cout << "Enter the number of elements in the array: ";
cin >> n;
int arr[n];
cout << "Enter the elements of the array: ";
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
int sum = sumArray(arr, n);
cout << "The sum of the elements in the array is: " << sum << endl;
return 0;
}