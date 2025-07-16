#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,m;
    cin>>n>>m;

    vector<long long>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    vector<long long>pre(n);
    pre[0]= v[0];
    for(int i=1;i<n;i++){
        pre[i]= pre[i-1]+v[i];
        
    }

    while(m--){
        int a,b;
        cin>>a>>b;
        a--;
        b--;

        if(a == 0) cout<<pre[b]<<endl;
        else cout<<pre[b]-pre[a-1]<<endl;
    }
return 0;
}