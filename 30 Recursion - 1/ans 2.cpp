#include <iostream>
using namespace std;
// Function to calculate the sum of all odd numbers from a to b using recursion
int sumOddNumbers(int a, int b) {
if (a > b) {
return 0;
}
if (a % 2 != 0) {
return a + sumOddNumbers(a + 1, b);
} else {
return sumOddNumbers(a + 1, b);
}
}
int main() {
int a, b;
cout << "Enter the start number (a): ";
cin >> a;
cout << "Enter the end number (b): ";
cin >> b;
int sum = sumOddNumbers(a, b);
cout << "The sum of all odd numbers from " << a << " to " << b << " is: " << sum << endl;
return 0;
}