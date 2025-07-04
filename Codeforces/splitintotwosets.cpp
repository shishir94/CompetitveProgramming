#include<bits/stdc++.h>
using namespace std;

bool bfs(vector<vector<int>>& g,int n){
    // int n = g.size();
    vector<int>color(n+1,-1);
    vector<bool>vis(n+1,0);
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(color[i] == -1){
            color[i] = 0;
            q.push(i);

            while(!q.empty()){
                int u = q.front();
                q.pop();

                for(auto &v :g[u]){
                    if(color[v] == -1){
                        color[v] = 1-color[u];
                        q.push(v);
                    }
                    else if(color[u] == color[v]){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>g(n+1);

        bool p = true;
        for(int i=0;i<n;i++){
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);

            if(u == v || g[u].size()>2 || g[v].size() > 2) p=false;
        }

        if(p == false){
            cout<<"NO"<<endl;
        }
        else{
            if(bfs(g,n)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}