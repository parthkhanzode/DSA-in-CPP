// Print the following pattern
// Input : n = 4
// Output :

// *     *
// **   **
// *** ***
// *******
// *******
// *** ***
// **   **
// *     *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int a = 1;
    for(int i=1 ;i<=n ; i++){
        for(int j =1 ; j<=i ;j++){
            cout<<"*";
        }
        for(int j = 2*n-a ; j>0 ; j-- ){
            cout<<" ";
        }
        a = a+2;
        for(int j =1 ; j<=i ;j++){
            cout<<"*";
        }
        cout<<endl;    
    }
    
    for(int i =1; i<=2 ;i++){
        for(int j=1 ;j<=2*n+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }    

    for(int i =1 ; i<=n ; i++){
        for(int j = 1; j<=n+1-i ; j++){
            cout<<"*";
        }
        for(int k =1 ; k<=2*i-1;k++){
            cout<<" ";
        }
        for(int j = 1; j<=n+1-i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}