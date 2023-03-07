#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    string f;
    cin>>f;
    string s1,s2;
    if(n>m){
        s1=s;
        s2=f;
    }else{
        s1=f;
        s2=s;
    }
    unordered_map<char,int>mp;
    for(int i=0;i<s1.size();i++){
        mp[s1[i]]++;
    }
    for(int i=0;i<s2.size();i++){
        mp[s2[i]]--;
    }
    bool b1=true;
    bool b2 = false;
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        if(itr->second <0){
            b1=false;
            break;
        }else if(itr->second %2==0){
            continue;
        }
        if(b2==true){
            b1=false;
        }else{
            b2=true;
        }
    }
    if(b1==true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}