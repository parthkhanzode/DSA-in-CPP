// Print the following pattern
// Sample Input : n = 5
// Output :

//      *
//     ***
//    * * *
//   *  *  *
//  *   *   *
// ***********
//  *   *   *
//   *  *  *
//    * * *
//     ***
//      *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    
    cout<<" ";
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
            else if(i>1 && j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }    
        }
        cout<<endl;
        if(i>(n-1)){
            continue;
        }
        else cout<<" ";
    }

for(int i =1; i<=2*n + 1;i++){
        cout<<"*";
}
    cout<<endl;
     cout<<" ";
     for(int i = 1; i<=n ; i++){
        for(int j = 1 ; j<=2*n-1 ; j++){
            int a = i;
            int b = j;
            if(b>n) b = 2*n-j;
            
            if(a==b){
                cout<<"*";
            }
            else if(i<n && j==n){
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