#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int n,m;
int v[1005][1005];
bool vis[1005][1005];


int dfs(int i , int j){
    vis[i][j]=true;
    int ans = v[i][j];
    if(i != 0 && v[i-1][j] !=0 && vis[i-1][j]==false){
        ans+= dfs(i-1,j); 
    }
    if(j != 0 && v[i][j-1] !=0 && vis[i][j-1]==false){
        ans+= dfs(i,j-1); 
    }
    if(i != n && v[i+1][j] !=0 && vis[i+1][j]==false){
        ans+=dfs(i+1,j); 
    }
    if(j != m && v[i][j+1] !=0 && vis[i][j+1]==false){
        ans+= dfs(i,j+1); 
    }
    return ans;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vis[i][j]=false;
            cin>>v[i][j];
        }
    }
    int ans =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]== false && v[i][j]!=0){
                ans = max(ans,dfs(i,j));
            }
        }
    }
    cout<<ans<<endl;
}
return 0;
}