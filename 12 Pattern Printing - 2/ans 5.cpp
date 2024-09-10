// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int a = 1;
    for(int l = 1 ; l<=2*n - 1;l++ ){
        if(l>=n){
            cout<<a;
            a--;
        }
        else{
            cout<<a;
            a++;
        }
    }
    cout<<endl;
    int m = n;
    n = n-1;
    for(int i=1 ;i<=n;i++){
        for(int j = 1 ; j<=n;j++){
            if((i+j)<=(n+1)){
            cout<<j;
            }
        }
        for(int l = 1; l<=2*i - 1; l++){
            cout<<" ";
        }
        for(int k=(m-i); k>0; k--){
            cout<<k;
        }
        cout<<endl;
    }

    return 0;
}