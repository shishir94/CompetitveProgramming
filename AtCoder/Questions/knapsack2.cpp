#include<bits/stdc++.h>
using namespace std;

vector<vector<long long>>dp;
long long solve(int ind,vector<vector<long long>>& v,int wt){
    if(wt  == 0) return 0;
    if(ind == v.size()) return 0;
    if(dp[ind][wt] != -1) return dp[ind][wt];
    long long ntake = solve(ind+1,v,wt);
    long long take = 0;
    if(wt >= v[ind][0]){
        long long res = solve(ind+1,v,wt-v[ind][0]);
        if(res != -1e9) take = v[ind][1] + res;
    }

    return dp[ind][wt] = max(take,ntake);
}
int main(){
    int n,w;
    cin>>n>>w;

    vector<vector<long long>>v(n,vector<long long>(2));
    for(int i=0;i<n;i++){
        cin>>v[i][0]>>v[i][1];
    }

    dp.resize(n+1,vector<long long>(w+1,-1));
    cout<<solve(0,v,w)<<endl;
    return 0;
}