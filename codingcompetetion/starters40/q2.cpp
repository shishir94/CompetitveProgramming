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
    long long arr1[n];
    long long arr2[n];
    for(int i =0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i = 0;i<n;i++){
        cin>>arr2[i];
    }
    long long arr[n];
    for (int i =0;i<n;i++){
        arr[i] = (arr1[i]^arr2[i]);
    }
    unordered_map<int,int>map;
    for(int i = 0;i<n;i++){
        int key = arr[i];
        map[key]++;
    }
    long long sum = 0;
    for(auto itr = map.begin(); itr != map.end();itr++){
        if((itr->second)%2 == 0){
            long long ans  = (itr->second)/2;
            sum = ans*((itr->second)-1)+sum;
        }
        if((itr->second)%2 != 0){
            long long ans1 = ((itr->second)-1)/2;
            sum = ans1*((itr->second))+sum;
        }
    }
    cout<<sum<<endl;
}
return 0;
}