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
    string s1,s2;
    cin>>s1>>s2;
    int ans =0;
    if(s1.size() != s2.size()){
        ans += (s2.size()-1)*9;
        ans += s2[0]-'0';
    }else{
        for(int i=0;i<s1.size();i++){
            if(s1[i] != s2[i]){
                ans += abs((s1[i]-'0') - (s2[i]-'0'));
                ans += 9*(s1.size()-i-1);
                break;
            }
        }
    }
    cout<<ans<<endl;
}
return 0;
}