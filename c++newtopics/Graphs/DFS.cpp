/*
In DFS we start with a node and start exploring its connected nodes keeping on suspending the exploration of previous nodes.
*/
// DFS PROCEDURE ::
/*
Start by putting any one of the graph's vertices on top of a stack. 
Take the top item of the stack and add it to the visited list.
Create a list of that vertex's adjacent nodes.Add the ones which aren't in the visited list to the top of the stack.
keep repeating steps until the stack is empty.
*/

// Code ::
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void dfs(vector<vector<int>>& g){
    stack<int>s;
    int n = g.size();
    vector<bool>b(n,false);
    b[2]=true;
    s.push(2);
    while(!s.empty()){
        int x = s.top();
        cout<<x<<" ";
        s.pop();
        for(auto j :g[x]){
            if(!b[j]){
                b[j]=true;
                s.push(j);
            }
        }
    }
}


int main(){
int n,m;
char s;
cin>>n>>m;
cin>>s;
vector<vector<int>> g(n);
for(int i = 0;i<m;i++){
    int a,b;
    cin>>a>>b;
    if(s == 'd'){
        g[a].push_back(b);
    }else{
        g[a].push_back(b);
        g[b].push_back(a);
    }
}
dfs(g);
return 0;
}