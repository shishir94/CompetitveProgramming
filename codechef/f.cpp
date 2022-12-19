#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    int sum = 1;
    for(int i=1;i<=n;i++){
        sum = sum*i;
    }
    return sum;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    long long d = (1000000007);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int key = arr[i];
        mp[key]++;
    }
    long long ans =0;
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        ans += (((fun(itr->first)%d)*(itr->second))%d);
    }
    cout<<(ans%d)<<endl;
}
return 0;
}