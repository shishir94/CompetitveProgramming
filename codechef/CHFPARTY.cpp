#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    for(int i = 0;i < a;i++){
        cin>>b;
        int arr[b];
        int ans = 0;
        for(int i = 0;i<b;i++){
            cin>>arr[i];
        }
        sort(arr , arr+b);
        for(int i = 0 ;i < b;i++){
            if(ans >= arr[i]){
                ans++;
            }
        } 
        cout<<ans<<endl;   
    }
    return 0;
}