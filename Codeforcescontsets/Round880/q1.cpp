#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p){
    long long res = 1;
    while(y>0){
        if(y%2==1){
            res = (res*x)%p;
        }
        y = y>>1;
        x = (x*x)%p;
    }
    return res%p;
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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    bool p = true;
    int s = arr[n-1];
    for(int i=0;i<=s;i++){
        if(mp[i] >= mp[i+1]){
            p=true;
        }else{
            p=false;
            break;
        }
    }
    if(p){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}
return 0;
}