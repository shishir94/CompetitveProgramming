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

int solve(int n ,vector<int>&arr,vector<vector<int>>&dp, int sum,int i,int j){
    if(i >= j){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    int a=0,b=0,c=0;
    if(arr[i]+arr[j] == sum){
        a = 1 + solve(n,arr,dp,sum,i+1,j-1);

    }
    if(i+1 < n && arr[i]+arr[i+1] == sum){
        b = 1+ solve(n,arr,dp,sum,i+2,j);
    }
    if(j >=0 && arr[j]+arr[j-1] == sum){
        c  = 1+ solve(n,arr,dp,sum,i,j-3);
    }
    return dp[i][j] = max(a,max(b,c));
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>V(n);
    for(int i=0;i<n;i++){
        cin>>V[i];
    }
    vector<vector<int>>dp(n,vector<int>(n,-1));
    vector<vector<int>>dp1(n,vector<int>(n,-1));
    vector<vector<int>>dp2(n,vector<int>(n,-1));

    int firsttwo = V[0]+V[1];
    int firstlast = V[0]+V[n-1];
    int lasttwo = V[n-1]+V[n-2];

    int p = solve(n,V,dp,firsttwo,0,n-1);
    int q = solve(n,V,dp1,firstlast,0,n-1);
    int r = solve(n,V,dp2,lasttwo,0,n-1);

    cout<<max(p,max(q,r))<<endl;
}
return 0;
}