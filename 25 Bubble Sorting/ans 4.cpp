#include <iostream>
using namespace std;

int main() {
int arr[5]={7,2,32,5,20};
int size=5;
for (int i = 0; i < size - 1; ++i){
for (int j = 0; j < size - i - 1; ++j){
if (arr[j] < arr[j + 1]){
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
for (int i = 0; i < size; ++i){
cout<<arr[i]<<" ";
}
return 0;
}