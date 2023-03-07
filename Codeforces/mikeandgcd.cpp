#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(b == 0){
        return a;
    }
    if(a == 0){
        return b ;
    }
    return gcd(b , a % b);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    long long cnt = 0;
    long long temp=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        temp=gcd(temp,arr[i]);
        if(arr[i]%2!=0){
            cnt++;
        }
    }
    if(temp==1){
        if(cnt%2==0){
            cout<<"YES"<<endl;
            cout<<cnt/2<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<cnt/2+2<<endl;
        }
    }else{
        cout<<"YES"<<endl;
        cout<<"0"<<endl;
    }
// }
return 0;
}