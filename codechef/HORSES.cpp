#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    int diff;
    for(int i = 0 ; i<a;i++){
        cin>>b;
        int arr[b];
        for(int i = 0;i<b;i++){
            cin>>arr[i];
        }
        int ans = INT_MAX;
        for(int i = 0;i<b-1;i++){
            for(int j = i+1;j<b;j++){
                int diff = abs(arr[i]-arr[j]);
                if(ans > diff){
                    ans = diff;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}