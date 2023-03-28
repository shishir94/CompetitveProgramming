#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int shortest(vector<vector<int>>g,int x,int y){
    int n= g.size();
    vector<bool>b(n,false);
    queue<pair<int,int>>q;
    b[x]=true;
    q.push(make_pair(x,0));
    while(!q.empty()){
        auto x = q.front();
        q.pop();
        if(x.first==y){
            return x.second;
        }
        for(auto j:g[x.first]){
            if(b[j]==false){
                b[j]=true;
                q.push(make_pair(j,x.second+1));
            }
        }
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    vector<vector<int>>g(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u-1].push_back(v-1);
        g[v-1].push_back(u-1);  
    }
    int f = sqrt(n);
    if((f*f)!=n){
        f=f+1;
    }
    bool r = true;
    int y=-1; 
    priority_queue<int, vector<int>, greater<int> > pq; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // cout<<shortest(g,i,j)<<endl;
            if(shortest(g,i,j)>f){
                pq.push(j);
                r=false;
                break;
            }
        }
        if(r==true){
            y=i;
            break;
        }else{
            r=true;
        }
    }
    // cout<<shortest(g,0,3)<<endl;
    if(r){
        cout<<"1"<<endl;
        cout<<y+1<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    
}
return 0;
}