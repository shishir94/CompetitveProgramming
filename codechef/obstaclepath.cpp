#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool check(vector<long long>&a , vector<long long>& b){
    return abs(a[0]-b[0])*abs(a[0]-b[0])+abs(a[1]-b[1])*abs(a[1]-b[1]) <= abs(a[2]+b[2])*abs(a[2]+b[2]);
}

bool cixx(long long x1,long long y1,long long r1,long long xx){
    return x1+r1>=xx;
}
bool ciyy(long long x1,long long y1,long long r1,long long yy){
    return y1+r1>=yy;
}
bool ciov(long long x1,long long y1,long long r){
    return x1-r<=0;
}
bool cioh(long long x1,long long y1,long long r){
    return y1-r<=0;
}

bool bfs(long long sv,vector<vector<long long>>& adj,vector<vector<long long>>&info,long long n){
    queue<long long> q;
    vector<long long> vis(n,0);
    q.push(sv);
    vis[sv]=1;
    while(!q.empty()){
        long long node = q.front();
        q.pop();
        if(info[node][0]||info[node][1]){
            return 1;
        }
        for(auto nei:adj[node]){
            if(vis[nei]==1)continue;
            q.push(nei);
            vis[nei]=1;
        }
    }
    return 0;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long xx,yy;
    cin>>xx>>yy;
    long long q;
    cin>>q;
    vector<vector<long long>>v;
    for(int i=0;i<q;i++){
        long long x,y,r;
        cin>>x>>y>>r;
        v.push_back({x,y,r});
    }
    // cout<<"out"<<endl;
    vector<vector<long long>>g(q);
    for(int i=0;i<q-1;i++){
        // cout<<"out"<<endl;
        for(int j=i+1;j<q;j++){
            if(check(v[i],v[j])){
                g[i].push_back(j);
                g[j].push_back(i);
            }
        }
    }
    // cout<<"out"<<endl;
    vector<vector<long long>>info(q,vector<long long>(4,0));
    for(int i=0;i<q;i++)
    {
        long long x1 = v[i][0],y1= v[i][1],r1= v[i][2];
        info[i][0] = cixx(x1,y1,r1,xx);
        info[i][1] = ciyy(x1,y1,r1,yy);
        info[i][2] = ciov(x1,y1,r1);
        info[i][3] = cioh(x1,y1,r1);
    }
    // cout<<"out"<<endl;
    bool found=0;
    for(long long i=0;i<q;i++){
        if(info[i][2]||info[i][3]){
            if(bfs(i,g,info,q)){
                found=1;
                break;
            }
        }
    }
    if(found)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
return 0;
}