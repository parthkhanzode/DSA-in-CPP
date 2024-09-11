#include <iostream>
using namespace std;
// Function to calculate the sum of digits using recursion
int sumOfDigits(int n) {
if (n == 0) {
return 0; // Base case: if n is 0, return 0
}
return (n % 10) + sumOfDigits(n / 10);
}
int main() {
int n;
cout << "Enter a positive integer: ";
cin >> n;
int sum = sumOfDigits(n);
cout << "The sum of the digits of " << n << " is: " << sum << endl;
return 0;
}