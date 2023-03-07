#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<vector<pair<int,int>>>v;
vector<pair<int,int>>g;
for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    g.push_back(make_pair(a,b));
    v.push_back(g);
}
return 0;
}