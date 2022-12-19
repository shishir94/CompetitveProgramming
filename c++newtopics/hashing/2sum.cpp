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
    int A[n];
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    unordered_map<int,int>mp;
    for(int i = 0;i<n;i++){
        int key = A[i];
        mp[key]++;
    }
    for(int i = 0;i<n;i++){
        if(mp[A[i]]>1){
            cout<<A[i]<<endl;
        }
    }
}
return 0;
}