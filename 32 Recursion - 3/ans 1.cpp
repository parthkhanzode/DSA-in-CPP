#include <iostream>
#include <climits>
using namespace std;
// Recursive function to find the minimum element in an array
int findMin(int arr[], int n) {
// Base case: If array has only one element
if (n == 1) {
return arr[0];
}
// Recursive case: Find the minimum of the rest of the array
int restMin = findMin(arr + 1, n - 1);
// Return the minimum of the first element and the minimum of the rest
return (arr[0] < restMin) ? arr[0] : restMin;
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
int minElement = findMin(arr, n);
cout << "The minimum element in the array is: " << minElement << endl;

return 0;
}