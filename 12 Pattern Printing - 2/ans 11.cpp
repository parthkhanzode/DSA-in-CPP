#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    for(int j=1 ;j<=2*n-1; j++){
            cout<<"*";
        }
    cout<<endl;

n =n-1;
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

    int a = 3;
    for(int i=1 ;i<=n ; i++){
        if(i==1){
            continue;
        }
        else{
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
    }
n = n+1;
    for(int j=1 ;j<=2*n-1; j++){
            cout<<"*";
        }

    return 0;
}