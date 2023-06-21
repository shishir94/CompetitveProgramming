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

void fun(vector<vector<int>>& g , vector<long long> & cnt ,int v,int p){
    if(g[v].size()==1 && g[v][0] == p){
        cnt[v]=1;
    }else{
        for(auto u: g[v]){
            if(u != p){
                fun(g,cnt,u,v);
                cnt[v] += cnt[u];
            }
        }
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<vector<int>>g(n);
    vector<long long>cnt(n,0);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    fun(g,cnt,0,-1);
    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;  
        x--;
        y--;
        long long ans = cnt[x]*cnt[y];
        cout<<ans<<endl;
    }
}
return 0;
}

