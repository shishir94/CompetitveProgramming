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
    vector<vector<int>>A;
    for(int i=0;i<n;i++){
        vector<int>e;
        for(int j=0;j<m;j++){
            int w;
            cin>>w;
            e.push_back(w);
        }
        A.push_back(e);
        e.clear();
    }
    int q1;
    cin>>q1;
    vector<vector<int>>B;
    for(int i=0;i<q1;i++){
        vector<int>tt;
        for(int j=0;j<2;j++){
            int rr;
            cin>>rr;
            tt.push_back(rr);
        }
        B.push_back(tt);
        tt.clear();
    }
    vector<vector<int>>ans(n,vector<int>(m,INT_MAX));
    vector<vector<int>>used(n,vector<int>(m,0));
    queue<vector<int>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==1){
                q.push({i,j,0});
                used[i][j]=1;
            }
        }
    }
    int x[4]={0,-1,0,1};
    int y[4]={-1,0,1,0};
    while(!q.empty()){
        auto t = q.front();
        q.pop();
        int d = t[0];
        int r= t[1];
        int f = t[2];
        ans[d][r]= min(ans[d][r],f);
        for(int i=0;i<4;i++){
            int nx = d+x[i];
            int ny = r+y[i];
            if(nx <0||ny<0||nx>=n||ny>=m){
                continue;
            }
            if(used[nx][ny]==1){
                continue;
            }
            if(ans[nx][ny]<f+1){
                continue;
            }else{
                q.push({nx,ny,f+1});
                used[nx][ny]=1;
            }
        }
    }
    int u = B.size();
    vector<int>v;
    for(int i=0;i<u;i++){
        int o = B[i][0]-1;
        int g = B[i][1]-1;
        v.push_back(ans[o][g]);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
return 0;
}