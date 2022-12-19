#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,q;
    cin>>n>>q;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    multiset<int>mp;
    for(int i =0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            mp.insert(arr[i]-arr[i+1]);
        }
    }
    while(q--){
        long long a,b;
        cin>>a>>b;
      //  long long ans = 0;
        mp.erase(mp.find(arr[a-1]-arr[a]));
        mp.erase(mp.find(arr[a]-arr[a+1]));
        arr[a-1]=b;
        (mp.insert(arr[a-1]-arr[a]));
        (mp.insert(arr[a]-arr[a+1]));
        
        
      //  cout<<ans<<endl;
    }
}
return 0;
}