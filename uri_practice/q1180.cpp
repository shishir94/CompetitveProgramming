#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    int arr[n];
    int ans = INT_MAX;
    for (int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if( ans > arr[i]){
            ans = arr[i];
            a = i;
        }
    }
        cout<<"Menor valor: "<<ans<<endl;
        cout<<"Posicao: "<<a<<endl;
      
    
    return 0;
}