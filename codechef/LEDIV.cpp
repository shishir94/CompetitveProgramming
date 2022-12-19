#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(long long a , long long b){
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
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    long long temp = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        temp = gcd(temp ,arr[i]);
    }
    // cout<<temp<<endl;
    if(temp>3){
        int d = 0;
        for(int i = 2;i<=sqrt(temp);i++){
            if(temp%i==0){
                d = i;
                break;
            }
        }
        if(d!=0){
            cout<<d<<endl;
        }else{
            cout<<temp<<endl;
        }
    }else if(temp >1){
        cout<<temp<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}
return 0;
}