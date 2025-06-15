#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


const int maxN = 50001;
bitset<maxN> ans[maxN];
int main(){
    int n,m;
    cin>>n>>m;

    vector<int>indergee(n);

    vector<vector<int>>g(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        g[v-1].push_back(u-1);
        indergee[u-1]++;
    }


    

    queue<int>q;
    for(int i=0;i<n;i++){
        if(indergee[i] == 0){
            q.push(i);
            ans[i].set(i);
        }
    }

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto child:g[node]){
            ans[child] |= ans[node];
            indergee[child]--;

            if(indergee[child] == 0){
                ans[child].set(child);
                q.push(child);
            }
        }
    }
    for(int i=0;i<n;i++) cout<<ans[i].count()<<" ";
    cout<<endl;
    return 0;
}