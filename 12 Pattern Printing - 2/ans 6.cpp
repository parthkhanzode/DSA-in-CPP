// Print the following pattern
// Input : n = 5
// Output:
// *               *
//   *           *
//     *       *
//       *   *
//         *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i = 1; i<=n ; i++){
        for(int j = 1 ; j<=2*n-1 ; j++){
            int a = i;
            int b = j;
            if(b>n) b = 2*n-j;
            
            if(a==b){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}