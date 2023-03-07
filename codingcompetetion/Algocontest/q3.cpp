#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dfs(int node ,vector<int> &b , vector<vector<int>>g,vector<int> &d){
    b[node]=1;
    int ans =0;
    for(auto j:g[node]){
        if(b[j]!=1){
            dfs(j,b,g,d);
            ans = max(ans , d[node]);
        }
    }
    for(int i=1;i<=b.size();i++){
        if(b[i]==0){
            return -1;
        }
    }
    return ans;
}




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==i+1){
            v.push_back(arr[i]);
        }
    }
    int m;
    cin>>m;
    vector<int>d(n+1,0);
    vector<vector<int>>g(n);
    for(int i=0;i<m;i++){
        int t,u,v;
        cin>>t>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
        d[u]=max(d[u],t);
        d[v]=max(d[v],t);
    }
    if(v.size()==n){
        cout<<"0"<<endl;
    }else{
        vector<int>b(g.size()+1,0);
        int a=0;
        for(int i=0;i<v.size();i++){
            if(b[i]!=1){
                int h = dfs(i,b,g,d);
                a=max(a,h);
            }
        }
        return a;
    }
}
return 0;
}