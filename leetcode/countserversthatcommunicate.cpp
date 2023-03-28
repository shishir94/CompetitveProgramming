#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>grid;
    for(int i=0;i<n;i++){
        vector<int>v;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        grid.push_back(v);
        v.clear();
    }
    vector<vector<int>>ans(n,vector<int>(m,0));
    queue<vector<int>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                q.push({i,j});
            }
        }
    }
    while(!q.empty()){
        auto temp = q.front();
        q.pop();
        int r = temp[0];
        int e = temp[1];
        if(ans[r][e]!=1){
            for(int i=0;i<m;i++){
                if(grid[r][i]==1&&i!=e){
                    ans[r][e]=1;
                    ans[r][i]=1;
                }
            }
            for(int i=0;i<n;i++){
                if(grid[i][e]==1&&i!=r){
                    ans[r][e]=1;
                    ans[i][e]=1;
                }
            }
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ans[i][j]==1){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
return 0;
}