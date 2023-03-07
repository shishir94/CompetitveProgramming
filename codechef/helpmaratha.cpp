#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int x1,y1;
    cin>>x1>>y1;
    int q;
    cin>>q;
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    while(q--){
        int x2,y2;
        cin>>x2>>y2;
        int l=0,r=0,d=0,u=0;
        if(x2>=x1){
            r=(x2-x1);
        }
        if(y2>=y1){
            u=(y2-y1);
        }
        if(x1>x2){
            l=(x1-x2);
        }
        if(y1>y2){
            d=(y1-y2);
        }
        if(l > mp['L'] || r > mp['R'] || d > mp['D'] || u > mp['U'] ){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES "<<l+r+d+u<<"\n";
        }
    }
}
return 0;
}