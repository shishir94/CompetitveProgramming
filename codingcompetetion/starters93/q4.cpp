#include<bits/stdc++.h>
using namespace std;
#define int long long



int32_t main(){
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n, m, k;
        cin>>n>>m>>k;
        vector<int> adj[n];
        vector<int> pos(k), r(k);
        for(int i = 0; i < k; i++){
            cin>>pos[i];
            pos[i] -= 1;
        }
        for(int i = 0; i < k; i++){
            cin>>r[i];
        }

        for(int i = 0; i < m; i++){
            int a, b;
            cin>>a>>b;
            a -= 1;
            b -= 1;
            // cout<<"a is "<<a<<" and "<<b<<endl;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vector<int> dist(n, INT_MIN);
        vector<pair<int, int>> v;
        for(int i = 0; i < k; i ++){
            v.push_back({r[i], pos[i]});
        }
        sort(v.begin(), v.end(), greater<>());
        for(auto i : v){
            int d = i.first, p = i.second;
            // cout<<d<<" ad "<<p<<endl;

            if(d > dist[p]){
                // cout<<"entering"<<endl;
                queue<int> q;
                
                dist[p] = d;
                // cout<<"dist of p is "<<dist[p]<<endl;
                q.push(p);
                d -= 1;
                while(q.size() && d > 0){
                    // cout<<"starting new loop"<<endl;
                    int size = q.size();
                    while (size--)
                    {
                        int node = q.front();
                        q.pop();
                        // cout<<"this is node "<<node<<endl;
                        for(auto it : adj[node]){
                            if(dist[it] < d){
                                // cout<<"entering "<<it<<endl;
                                dist[it] = d;
                                q.push(it);
                            }
                        }
                    }
                    d -= 1;
                }
            }
        }
        int f = 1;
        for(auto i : dist){
            if(i == INT_MIN){
                f = 0;
                break;
            }
        }
        if(f){
            cout<<"YES";
        }else{
            cout<<"NO";
        }cout<<endl;
        

    }
        
	return 0;
}     