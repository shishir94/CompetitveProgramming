#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool search(vector<vector<char>>& board,string word,int i , int j,int size,int n,int m){
    int l = word.size();
    if(size ==l){
        return true;
    }
    if(i<0||i>=m||j<0||j>=n||board[i][j]!=word[size]||board[i][j]=='&'){
        return false;
    }
    char d = board[i][j];
    board[i][j]='&';
    bool top = search(board,word,i-1,j,size+1,n,m);
    bool right = search(board,word,i,j+1,size+1,n,m);
    bool bottom = search(board,word,i+1,j,size+1,n,m);
    bool left = search(board,word,i,j-1,size+1,n,m);
    board[i][j]=d;
    return top || right||bottom||left;
}


bool exist(vector<vector<char>>& board, string word) {
    int n = board.size();
    int m = board[0].size();
    int size=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]==word[size]){
                if(search(board,word,i,j,size,n,m)){
                    return true;
                }
            }
        }
    }
    return false;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>grid;
    for(int i=0;i<n;i++){
        vector<char>v;
        for(int j=0;j<m;j++){
            char x;
            cin>>x;
            v.push_back(x);
        }
        grid.push_back(v);
        v.clear();
    }
    string word;
    cin>>word;
    cout<<exist(grid,word)<<endl;
}
return 0;
}