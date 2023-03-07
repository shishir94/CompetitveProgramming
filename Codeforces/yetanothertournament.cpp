#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int arr[n];
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    int wins = 0;
    int largest =0;
    for(int i=0;i<n;i++){
        if(v[i]<=m){
            largest=v[i];
            wins++;
            m-=v[i];
        }
    }
    if(wins==n){
        cout<<"1"<<endl;
    }else{
        if(arr[wins]<=m+largest){
            cout<<n-wins<<endl;
        }else{
            cout<<n-wins+1<<endl;
        }
    }
}
return 0;
}