#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>prime;
    for(int i= 0;i<n;i++){
        while (arr[i] % 2 == 0){
            prime.push_back(2);
            arr[i] = arr[i]/2;
        }
        for (int j = 3; j <= sqrt(arr[i]); j = j + 2){
            while (arr[i] % j == 0){
                prime.push_back(j);
                arr[i] = arr[i]/j;
            }
        }
        if (arr[i] > 2){
            prime.push_back(arr[i]);
        }
    }
    int x = prime.size();
    unordered_map<int,int>mp;
    for(int i = 0;i<x;i++){
        int key = prime[i];
        mp[key]++;
    }
    long long p =1;
    for(auto itr = mp.begin(); itr != mp.end();itr++){
        p = p*(itr->second+1);
    }
    cout<<p<<endl;
}
return 0;
}