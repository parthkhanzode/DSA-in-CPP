// Print the following pattern
// Sample Input : n = 4
// Output :
//       1
//     2   2
//   3       3
// 4           4

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    
    for(int i=1;i<=n; i++){
        for(int j=1;j<=2*n-1; j++){
            int b = j;
            if(b>n) b = 2*n-j;

            if((i+j)==(n+1)){
                cout<<i;
            }
            else if((b+i)==(n+1)){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}