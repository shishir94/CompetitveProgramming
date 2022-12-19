#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;cin>>a;
    int arr[a];
    int sum = 0;
    long long  z = 1000000000+7;
    for(int i = 0;i<a;i++){
        cin>>arr[i];
        sum = sum+ arr[i];
    } 
    int x ,b;
    cin>>x;
    for(int i = 1;i<=x;i++){
        cin>>b;
        long long ans =  pow(2,i);
        ans = ans %z;
        ans = ans * (sum % z);
        ans = ans % z;
        cout<<ans<<endl;
    }
    return 0;
}