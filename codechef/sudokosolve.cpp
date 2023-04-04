#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool solve(vector<vector<char>>&v){
    // check for empty spaces
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(v[i][j]=='.'){
                // try to place number from 1-9
                for(char ch ='1';ch<='9';ch++){
                    if(valid(v,i,j,ch)){
                        // if valid place the char at that position.
                        v[i][j]=ch;
                        // if valid return true as we need only one solution
                        if(solve(v)){
                            return true;
                        }else{
                            v[i][j]='.';
                        }

                    }
                }
                // if we can't place any number at that position.
                return false;
            }
        }
    }
    // if no empty spaces is found it means that board is filled so just returns true.
    return true;
}


bool valid(vector<vector<char>>&v,int row,int col,char ch){
    for(int i=0;i<9;i++){
        // check for row
        if(v[row][i]==ch){
            return false;
        }
        // check for column
        if(v[i][col]==ch){
            return false;
        }
        // check for submatrix
        if(v[3*(row/3)+i/3][3*(col/3)+i%3]==ch){
            return false;
        }
    }
    return true;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<vector<char>>v;
for(int i=0;i<9;i++){
    vector<char>p;
    for(int j=0;j<9;j++){
        char c;
        cin>>c; 
        p.push_back(c);
    }
    v.push_back(p);
    p.clear();
}

return 0;
}