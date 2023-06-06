#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p)
{
 
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
    int n = s.size();
    map<int,int>mp;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(mp.find(s[i])!=mp.end()){
            mp[s[i]]++;
        }else{
            if(mp.size() < 3){
                mp[s[i]]++;
            }
        }
        if(mp.size() == 3 && mp.find(s[i+1])==mp.end()){
            cnt++;
            mp.clear();
        }
    }
    if(mp.size()!=0){
        cnt++;
    }
    cout<<cnt<<endl;
}
return 0;
}