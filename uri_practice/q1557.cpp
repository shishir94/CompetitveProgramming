#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[15] = {1,1,2,2,3,4,4,5,5,6,7,7,8,8,9};
    while(true){
        cin>>n;
        if( n == 0){
        break;
        }
        int a[n][n];
        int x = arr[n-1];
        for( int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < n ; j++){
                a[i][j] = pow ( 2 , i + j);
                if(j == 0){
                    cout<<setw(x);
                    cout<<a[i][j];
                    continue;
                }
                cout<<" "<<setw(x)<<a[i][j];
            }
            cout<<endl;  
        }
        cout<<endl;
    }
    return 0;
}