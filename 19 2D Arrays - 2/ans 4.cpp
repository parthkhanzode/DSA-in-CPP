#include<iostream>
using namespace std;
int main(){
int n ;
cout << "Enter the number of rows : ";
cin >> n;
int arr[n][n];
int k = 1, i = 0;
while( k <= n * n ){
int j = i;
// four steps
while( j < n - i ) // 1. horizontal, left to right
arr[i][j++] = k++;
j = i + 1;
while( j < n - i ) // 2. vertical, top to bottom
arr[j++][n-i-1] = k++;
j = n - i - 2;
while( j > i ) // 3. horizontal, right to left
arr[n-i-1][j--] = k++;
j = n - i - 1;
while( j > i ) // 4. vertical, bottom to top
arr[j--][i] = k++;
}
}