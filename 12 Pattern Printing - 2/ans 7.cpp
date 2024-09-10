// Print the following pattern
// Sample Input : n = 4
// Sample output :
//       *
//     *   *
//   *       *
// *           *
//   *       *
//     *   *
//       *

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
                cout<<"*";
            }
            else if((b+i)==(n+1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    n=n-1;
     cout<<" ";
     for(int i = 1; i<=n ; i++){
        for(int j = 1 ; j<=2*n-1 ; j++){
            int a = i;
            int b = j;
            if(b>n) b = 2*n-j;
            
            if(a==b){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        cout<<" ";
    }

    return 0;
}
