#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p){
    long long res = 1;
    while(y>0){
        if(y%2==1){
            res = (res*x)%p;
        }
        y = y>>1;
        x = (x*x)%p;
    }
    return res%p;
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
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        mp[arr1[i]]++;
    }
    int ans =0;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        ans = max(ans,itr->second);
    }
    cout<<ans<<endl;

}
return 0;
}