// solution approach
/*
Jab ek mailbox hoga to hame minimum cost waha se milegi agar hum mailbox ko median par rakhenge.
For mailboxes greater than 1 lest suppose k mailboxes we will divide the array into k subparts and find the minimum cost of
all the subparts.
For finding minimum cost we will pre-compute the cost for all the subarray and store it in a 2d array.

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long cost[101][101];
long long dp[101][101];


long long fun(vector<int>& houses , int k , int start){
    int n = houses.size();
    if( k == 0 && start == n){
        return 0;
    }
    if( k== 0 || start == n){
        return INT_MAX;
    }
    if(dp[k][start]!=-1){
        return dp[k][start];
    }
    long long ans = INT_MAX;
    for(int i=start;i<n;i++){
        ans = min(ans,cost[start][i]+fun(houses,k-1,i+1));
    }
    return dp[k][start]=ans;
}



int minDistance(vector<int> & houses ,int k){
    sort(houses.begin(),houses.end());
    int n= houses.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int x =i;x<=j;x++){
                cost[i][j]+= abs(houses[(i+j)/2]-houses[x]);
            }
        }
    }
    memset(dp,-1,sizeof(dp));
    return fun(houses,k,0);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>houses;
    int k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        houses.push_back(x);
    }
    cin>>k;
    cout<<minDistance(houses,k)<<endl;
}
return 0;
}