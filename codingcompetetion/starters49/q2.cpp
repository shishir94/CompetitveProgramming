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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    map<int ,int>mp;
    for(int i = 0;i<n;i++){
        int key = arr[i];
        mp[key]++;
    }
    int ans = 0;
    vector<int>v;
    for(auto itr = mp.begin();itr != mp.end();itr++){
        v.push_back(itr->second);
    }
    sort(v.begin(),v.end());
    int x = v.size();
    int f;
    if(v[x-1] % 2 == 0){
         f = v[x-1]/2;
    }else{
        f  = (v[x-1]/2)+1;
    }
    //cout<<f<<endl;
   int b = v[x-2];
   // cout<<b<<endl;
   int h = max(f,b);
    cout<<h<<endl;
}
return 0;
}