#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n) {
    // Initialize two pointers
    int start = 0;
    int end = n - 1;

    // Check from both ends towards the center
    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;  // Not a palindrome
        }
        start++;
        end--;
    }
    return true;  // Is a palindrome
}

int main() {
    int n;
    
    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    
    // Input array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Check if the array is a palindrome
    if (isPalindrome(arr, n)) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}
