// [Leetcode 724]

class Solution {
public:
int pivotIndex(vector<int>& a) {
int n = a.size();
int leftsum = 0 , rightsum = 0;
for(auto x:a)rightsum += x;
for(int i=0;i<n;i++){
rightsum = rightsum - a[i];
if(leftsum == rightsum)return i;
leftsum += a[i];
}
return -1;
}
};