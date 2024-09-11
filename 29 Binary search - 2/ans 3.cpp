#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
int m = matrix.size();
int n = matrix[0].size();
int lo = 0 , hi = n*m - 1;
while(lo <= hi){
int mid = lo + (hi - lo)/2;
if(matrix[mid/n][mid%n] == target)return true;
else if(matrix[mid/n][mid%n] > target)hi = mid - 1;
else lo = mid + 1;
}
return false;
}

int main()
{
    int target = 3 ;
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    bool flag = searchMatrix(matrix,target) ;
    if(flag == 1) cout<<"true";
    else cout<<"false" ;
}

