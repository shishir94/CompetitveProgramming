#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,q;
    cin>>n>>q;
    vector<string>v;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    vector<long long>m;
    for(int i=0;i<n;i++){
        int x =v[i].size();
        long long sum=0;
        for(int j=0;j<x;j++){
            sum=sum+(v[i][j]-'0');
        }
        m.push_back(sum);
    }
    for(int i=0;i<m.size();i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        int l,r;
        int p;
        if(x==1){
            cin>>l>>r;
        }else{
            cin>>p;
            if(l<=p && p<=r){
                cout<<m[p-1]<<endl;
            }else{
                cout<<v[p-1]<<endl;
            }
        }
    }
}
return 0;
}