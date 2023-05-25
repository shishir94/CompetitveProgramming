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
    string s;
    cin>>s;
    int n=s.size();
    vector<int>v;
    int cnt =0;
    char x ='0';
    for(int i=0;i<n;i++){
        if(s[i] =='?'){
            s[i]=x;
        }else{
            x=s[i];
        }
    }
    cout<<s<<endl;
}
return 0;
}