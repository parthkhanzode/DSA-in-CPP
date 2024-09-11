// [Leetcode 2640]

class Solution {
public:
vector<long long> findPrefixScore(vector<int>& a) {
int n = a.size();
vector<long long int>res(n,0);
res[0] = 2*a[0];
int maxi = a[0];
// maxi = max(maxi , a[0]);
for(int i=1;i<n;i++){
maxi = max(maxi , a[i]);
res[i] = a[i] + maxi + res[i-1];
}
return res;
}
};