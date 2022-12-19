#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    for(int i = 0;i<a;i++){
        cin>>b>>c;
        int arr[b];
        int ans = INT_MIN;
        for(int i = 0;i <b;i++){
            cin>>arr[i];
            if(ans<arr[i]){
                ans = arr[i];
            }
        }
        int sum = 0;
        for(int i = 0;i<b;i++){
            sum = sum + (ans-arr[i]);
        }
        if(sum == c){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}