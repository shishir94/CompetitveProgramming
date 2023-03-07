#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(vector<vector<char>>v,int x ,int y , char s){
    for(int i=0;i<9;i++){
        if(v[x][i]==s){
            return false;
        }
        if(v[i][y]==s){
            return false;
        }
    }
    int row = (x/3)*3;
    int col = (y/3)*3;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(v[row + i][col + j] == s) return false;
        }
    }
    return true;
}

bool solve(vector<vector<char>>v,int x ,int y){
    if(x==9){
        return true;
    }
    if(y==9){
        return solve(v,x+1,0);
    }
    if(v[x][y]!='.'){
        return solve(v,x,y+1);
    }
    for(char c='1';c<='9';c++){
        if(check(v,x,y,c)){
            v[x][y]=c;
        }
        if(solve(v,x,y+1)){
            return true;
        }
        v[x][y]='.';
    }
    return false;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    vector<vector<char>>v;
    vector<char>f;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            char g;
            cin>>g;
            f.push_back(g);
        }
        v.push_back(f);
    }
    solve(v,0,0);
return 0;
}