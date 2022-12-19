#include<iostream>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    for(int i = 0;i<a;i++){
        int ans = INT_MAX;
        cin>>b;
        int c;
        int arr[b];
        for(int i = 1;i<=b;i++){
            cin>>arr[i];
            if(arr[i] < ans){
                ans = arr[i];
                c = i;
            }
        }
        cout<<c<<endl;
   }
    return 0;
}