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
    int M[n];
    int H[n];
    for(int i=0;i<n;i++){
        cin>>M[i];
    }
    for(int i=0;i<n;i++){
        cin>>H[i];
    }
    sort(M,M+n);
    sort(H,H+n);
    vector<int>v;
    for(int i=0;i<n;i++){
        v.push_back(abs(M[i]-H[i]));
    }
    sort(v.begin(),v.end());
    cout<<v[n-1]<<endl;
}
return 0;
}