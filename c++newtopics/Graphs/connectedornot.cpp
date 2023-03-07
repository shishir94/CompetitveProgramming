#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Checking whether the graph is connected or not.
bool connected(int x,vector<vector<int>>g){
    int n=g.size();
    vector<bool>b(n,false);
    queue<int>q;
    b[x]=true;
    q.push(x);
    while(!q.empty()){
        int y = q.front();
        q.pop();
        for(auto j:g[y]){
            if(b[j]==false){
                b[j]=true;
                q.push(j);
            }
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i]==false){
            return false;
        }
    }
    return true;

}

// Counting the number of connected nodes.
int countconnected(vector<vector<int>>g){
    int n=g.size();
    vector<bool>b(n,false);
    int count = 0;
    for(int i=0;i<n;i++){
        if(b[i]==false){
            b[i]=true;
            stack<int>s;
            s.push(i);
            while(!s.empty()){
                int c = s.top();
                s.pop();
                for(auto j:g[c]){
                    if(b[j]==false){
                        b[j]=true;
                        s.push(j);
                    }
                }
            }
            if(s.empty()){
                count++;
            }

        }
    }
    return count;
}



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<vector<int>>g(n);
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
}
cout<<connected(0,g)<<endl;
cout<<countconnected(g)<<endl;
return 0;
}