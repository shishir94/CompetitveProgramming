#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long factorial(int n){
    long long ans = 1;
    for(int i = 1;i<=n;i++){
        ans = ans*i;
    }
    return ans;
}
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
    unordered_map<long long,long long>mp;
    for(int i = 0;i<n;i++){
        long long key = arr[i];
        mp[key]++;
    }
    long long sum = 0;
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        if(itr->second > 1){
            if((itr->second) -2 >= 2){
                long long ans = 1;
                for(int i = itr->second-1;i<=itr->second;i++){
                    ans = ans*i;
                }
                ans = ans/2;
                sum = sum + ans;
            }else{
                long long ans = 1;
                for(int i =3;i<=itr->second;i++){
                    ans = ans*i;
                }
                sum = sum+ans;
            }
        }
    }
    cout<<sum<<endl;
}
return 0;
}