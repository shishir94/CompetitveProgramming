#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    int m;
    cin>>n>>m;
    int grid[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0&&j==0){
                grid[i][j]=grid[0][0];
            }else if(i==0){
                grid[i][j]=grid[i][j]+grid[i][j-1];
            }else if(j==0){
                grid[i][j]=grid[i][j]+grid[i-1][j];
            }else{
                grid[i][j]=grid[i][j]+min(grid[i][j-1],grid[i-1][j]);
            }
        }
    }
    cout<<grid[n-1][m-1]<<endl;
}
return 0;
}