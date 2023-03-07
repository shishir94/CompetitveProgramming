#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int k;
    int n;
    cin>>k>>n;
    long long arr[k][n];
    vector<long long>v;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            v.push_back(arr[i][j]);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
return 0;
}