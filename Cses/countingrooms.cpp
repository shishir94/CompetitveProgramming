#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};

class DisjointSet{
    public:
        vector<int>parent,rank;
    
        DisjointSet(int n){
            parent.resize(n+1);
            rank.resize(n+1,0);

            for(int i=0;i<=n;i++) parent[i]=i;
        }

        int find_parent(int node){
            if(node == parent[node]) return node;
            return parent[node]= find_parent(parent[node]);
        }

        void unionByRank(int u,int v){
            int p1 = find_parent(u),p2 = find_parent(v);

            if(p1 == p2) return;
            if(rank[p1]>rank[p2]){
                parent[p2]=p1;
            }
            else if(rank[p1]<rank[p2]){
                parent[p1]=p2;
            }
            else{
                parent[p2]=p1;
                rank[p1]++;
            }
        }

};
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    DisjointSet ds(n*m);
    vector<vector<char>>v(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char x;
            cin>>x;
            v[i][j] = x;
        }
    }
    int count = 0;
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j] == '.'){

                for(int k=0;k<4;k++){
                    int nx = i+dx[k];
                    int ny = j+dy[k];

                    if(nx >=0 && nx<n && ny >=0 && ny<m && v[nx][ny] == '.'){
                        ds.unionByRank(j+m*i,ny+m*nx);
                    }
                }
            }
        }
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j] == '.'){
                mp[ds.find_parent(j+m*i)]++;
            }
        }
    }
    cout<<mp.size()<<endl;
return 0;
}