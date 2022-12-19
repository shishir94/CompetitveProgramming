#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
input n: number of elements
n elements input
int r: input

eg:
9
arr = 2 2 1 1 2 5 3 5 5
r = 2

arr = 2 2 1 1 5 3 5
sum = 19
*/

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,r;
cin>>n;
int arr[n];
for(int i= 0;i<n;i++){
    cin>>arr[i];
}
cin>>r;
unordered_map<int,int>mp;
for(int i = 0;i<n;i++){
    int key = arr[i];
    mp[key]++;
}
int sum = 0;
for(auto itr = mp.begin(); itr != mp.end();itr++){
    if(mp[itr->first] > r){
        sum = sum + (itr->first)*r;
    }
    if(mp[itr->first] <= r){
        sum = sum + (itr->first)*(itr->second);
    }
}
cout<<sum<<endl;
return 0;
}