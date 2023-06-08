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
bool ispalindrome(string s){
    int n = s.size();
    for(int i=0;i<n/2;i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}

string fun(int n){
    string x="";
    while(n!=0){
        x+=to_string(n%2);
        n=n/2;
    }
    return x;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
vector<long long>v;
for(int i=0;i<32768;i++){
    string x = to_string(i);
    if(ispalindrome(x)){
        v.push_back(i);
    }
}
while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    unordered_map<long long,long long>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    long long ans=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<v.size();j++){
            long long temp = arr[i]^v[j];
            ans+=mp[temp];
        }
    }
    cout<<ans/2<<endl;
}
return 0;
}