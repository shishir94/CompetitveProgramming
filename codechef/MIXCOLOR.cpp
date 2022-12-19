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
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    unordered_set<int>h;
    for(int i = 0;i<n;i++){
        h.insert(arr[i]);
    }/*
    int d = h.size();
    int e = n - d;
    cout<<n-d<<endl;
    */
    unordered_set<int> :: iterator itr;
    for (itr = h.begin(); itr != h.end(); itr++){
        cout << (*itr)<<" ";
    }
    cout<<endl;
}
return 0;
}