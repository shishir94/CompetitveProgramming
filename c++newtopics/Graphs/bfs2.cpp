#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>& g){
    int n = g.size();
    vector<bool>b(n,false);
    queue<int>q;
    b[0]=true;
    q.push(0);
    while(!q.empty()){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        for(auto j:g[x]){
            if(!b[j]){
                b[j]=true;
                q.push(j);
            }
        }
    }
}

int shortest(vector<vector<int>>& g, int x, int y){
    int n = g.size();
    vector<bool>b(n,false);
    queue<pair<int,int>>q;
    b[x]=true;
    q.push(make_pair(x,0));
    while(!q.empty()){
        auto x = q.front();
        q.pop();
        if(x.first == y){
            return 1;
        }
        for(auto j:g[x.first]){
            if(!b[j]){
                b[j]=true;
                q.push(make_pair(j,x.second+1));
            }
        }
    }
    return 0;
}


int main(){
/*
input:
int n
int m // no of edges connected
next m lines
eg 1 3


output : print bfs 

int n
vertices 0,1,2,.. ....n-1
*/
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
int x, y;
cin>>x>>y;
cout<<shortest(g,x,y)<<endl;
// bfs(g);
return 0;
}