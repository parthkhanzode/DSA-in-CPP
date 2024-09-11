#include <iostream>
using namespace std;
// Function to check if a number is a power of 2 using recursion
bool isPowerOfTwo(int n) {
if (n == 1) {
return true;
}
if (n % 2 != 0 || n == 0) {
return false;
}
return isPowerOfTwo(n / 2);
}
int main() {
int n;
cout << "Enter a positive integer: ";
cin >> n;
if (isPowerOfTwo(n)) {
cout << n << " is a power of 2." << endl;
} else {
cout << n << " is not a power of 2." << endl;
}
return 0;
}