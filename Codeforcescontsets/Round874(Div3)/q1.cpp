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
    string s;
    cin>>s;
    string x="";
    map<string,int>mp;
    for(int i=0;i<n-1;i++){
        x = x+s[i]+s[i+1];
        mp[x]++;
        x="";
    }
    cout<<mp.size()<<endl;
}
return 0;
}