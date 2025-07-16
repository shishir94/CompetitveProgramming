#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ancestors[200005][30];
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,q;
    cin>>n>>q;

    // vector<int>parent(n);
    for(int i=1;i<=n;i++) cin>>ancestors[i][0];

    // int col = log2(n)+1;

    for(int j=1;j<30;j++){
        for(int i=1;i<=n;i++){
            ancestors[i][j] = ancestors[ancestors[i][j-1]][j-1];
        }
    }
    while(q--){
        int node;
        long long k;
        cin>>node>>k;
        
        for(int i=0;i<30;i++){
            if(k & (1<<i)) node = ancestors[node][i];
        }
        cout<<node<<endl;
    }
return 0;
}