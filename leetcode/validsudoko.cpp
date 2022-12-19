#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool valid(vector<vector<char>>v){
    int row[9][9]={0};
    int col[9][9]={0};
    int box[9][9]={0};
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(v[i][j]!='.'){
                int d = (v[i][j]-'0')-1;
                int k = i/3*3+j/3;
                if(row[i][d]||col[j][d]||box[k][d]){
                    return false;
                }
                row[i][d]=col[j][d]=box[k][d]=1;
            }
        }
    }
    return true;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    vector<vector<char>>v;
    
    for(int i=0;i<9;i++){
        vector<char>u;
        for(int j=0;j<9;j++){
            char x;
            cin>>x;
            u.push_back(x);
        }
        v.push_back(u);
        u.clear();  
    }
}
return 0;
}