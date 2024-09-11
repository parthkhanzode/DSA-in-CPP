#include<bits/stdc++.h>
using namespace std;
int arrangeCoins(int n) {
long low = 0; // we use "long" because we may get an integer overflow
long high = n;
while(low <= high){
long mid = low + (high - low) / 2;
long coinsUsed = mid * (mid + 1)/2;
if(coinsUsed == n){
return (int)mid;
}
if(n < coinsUsed){
high = mid - 1;
}
else{
low = mid + 1;
}
}
return (int)high; // cast as an "int" because it was initialized as a "long"
}
int main(){
int n;
cin>>n;
cout<<arrangeCoins(n) ;

}