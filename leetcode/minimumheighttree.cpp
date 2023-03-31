#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<vector<int>>edges;
    for(int i=0;i<n;i++){
        vector<int>v;
        for(int j=0;j<2;j++){
            int c;
            cin>>c;
            v.push_back(c);
        }
        edges.push_back(v);
        v.clear();
    }
    
}
return 0;
}