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
    int arr1[n];
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);

    }
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        v.push_back(arr1[i]);
        

    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    int ans = INT_MAX;
    for(int i=0;i<=n;i++){
        ans = min(ans,v[n+i-1]-v[i]);
    }
    cout<<ans<<endl;
}
return 0;
}