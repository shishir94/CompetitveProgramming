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
    int cnt =0;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i] == ':'){
            v.push_back(i);
        }
    }
    if(v.size() <2){
        cout<<"0"<<endl;
    }else{
        bool p = true;
        bool r = false;
        for(int i=0;i<v.size()-1;i++){
            for(int j=v[i]+1;j<v[i+1];j++){
                r=true;
                // cout<<j<<endl;
                if(s[j] != ')'){
                    p=false;
                    break;
                }
            }
            if(p== true && r == true){
                cnt++;
            }
            r=false;
            p=true;
        }
        cout<<cnt<<endl;
    }
}
return 0;
}
