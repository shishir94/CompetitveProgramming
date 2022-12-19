#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string x;
    cin>>x;
    int n = x.size();
    int low = 0;
    int high = n-1;
    int mid;
    string g ="";
    while(low<high){
        bool k = false;
        mid = (low+high)/2;
        string r = "";
        unordered_map<string,int>mp;
        for(int i=0;i<n-(mid)+1;i++){
            string f= x.substr(i,mid);
            if(mp.find(f)!=mp.end()){
                r= f;
                k = true;
                break;
            }else{
                mp[f]=1;
            }
        }
        if(g.size()<r.size()){
            g=r;
        }
        mp.clear();
        if(k){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    mid = (low+high)/2;
    string h = "";
    bool k = false;
    unordered_map<string,int>mp;
    for(int i=0;i<n-(mid)+1;i++){
        string f= x.substr(i,mid);
        if(mp.find(f)!=mp.end()){
            h= f;
            k = true;
            break;
        }else{
            mp[f]=1;
        }
    }
    if(g.size()<h.size()){
        g=h;
    }
    cout<<g<<endl;
}
return 0;
}