#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void mark_islands(vector<vector<char>> &matrix,int x ,int y,int r,int c){
    if(x<0||x>=r||y<0||y>=c||matrix[x][y]!=1){
        return;
    }
    matrix[x][y]=2;
    mark_islands(matrix,x+1,y,r,c);
    mark_islands(matrix,x,y+1,r,c);
    mark_islands(matrix,x-1,y,r,c);
    mark_islands(matrix,x,y-1,r,c);
}

int numIslands(vector<vector<char>> & grid){
    int row = grid.size();
    if(row==0){
        return 0;
    }
    int cols = grid[0].size();
    int no_of_islands = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            if(grid[i][j]=='1'){
                mark_islands(grid,i,j,row,cols);
                no_of_islands++;
            }
        }
    }
    return no_of_islands;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int m,n;
    cin>>m>>n;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

}
return 0;
}