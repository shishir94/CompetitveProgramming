#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>&v){
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int A[n];
    int B[n];
    vector<int>v;
    for(int i = 0;i<n;i++){
        cin>>A[i];
        v.push_back(A[i]);
    }
    for(int i = 0;i<n;i++){
        cin>>B[i];
        v.push_back(B[i]);
    }
    sort(v.begin(),v.end());
    display(v);
}
return 0;
}