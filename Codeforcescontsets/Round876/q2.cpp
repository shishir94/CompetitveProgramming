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
    cin >> n;
    vector<vector<int>>g(n+10);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
    }
    for(int i=0;i<n+10;i++){
        sort(g[i].begin(),g[i].end(),greater<int>());
    }
    long long sum=0;
    for(int i=1;i<=n;i++){
        int x = g[i].size();
        int y = min(i,x);
        for(int j=0;j<y;j++){
            sum+=g[i][j];
        }
    }
    cout<<sum<<endl;
}
return 0;
}