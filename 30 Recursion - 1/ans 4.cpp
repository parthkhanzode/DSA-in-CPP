#include <iostream>
using namespace std;
// Function to count the number of ways to reach the nth stair
int countWays(int n) {
if (n == 0) {
return 1; // One way to stay at the ground (do nothing)
}

if (n < 0) {
return 0; // No way to go below the ground
}
return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
}
int main() {
int n;
cout << "Enter the number of stairs: ";
cin >> n;
int ways = countWays(n);
cout << "Number of ways to reach the top: " << ways << endl;
return 0;
}