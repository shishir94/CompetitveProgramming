#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
int n,m;
cin>>n>>m;
int arr[n];
int sum =0;
vector<int>v;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
for(int i=0;i<n;i++){
    sum+=arr[i];
    v.push_back(sum);
}
for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    int ans = v[n-1-x+y]-v[n-1-x];
    cout<<ans<<endl;
}
return 0;
}