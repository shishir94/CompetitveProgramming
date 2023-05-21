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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
    for(int i=0;i<n;i++){
        q.push({arr[i],i});

    }
    vector<int>v(n,0);
    int cnt =0;
    while(!q.empty()){
        auto t = q.top();
        int x = t.first;
        int y = t.second;
        q.pop();
        if(v[y] == 0){
            cnt+=x;
            v[y]=1;
            if(y < n-1){
                v[y+1]=1;
            }
            if(y>0){
                v[y-1]=1;
            }
        }
    }
    cout<<cnt<<endl;
}
return 0;
}