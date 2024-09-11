#include<iostream>
#include<vector>
using namespace std;

bool search(vector<int>& a, int tgt) {
int low = 0 , hi = a.size() - 1;
while(low <= hi){
int mid = low + (hi - low)/2;
if(a[mid] == tgt)return true;
else if(a[low] == a[mid] and a[mid] == a[hi]){
low++;
hi--;
}
else if(a[low] <= a[mid]){
if(a[low] <= tgt and tgt <= a[mid])hi = mid - 1;
else low = mid + 1;
}
else {
if(a[mid] <= tgt and tgt <= a[hi])low = mid + 1;
else hi = mid - 1;
}
}
return false;
}

int main()
{
    int target = 3 ;
    vector<int> a = {2,5,6,0,0,1,2};
    bool flag = search(a,target) ;
    if(flag == 1) cout<<"true";
    else cout<<"false" ;
}