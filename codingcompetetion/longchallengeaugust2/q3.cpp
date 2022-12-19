#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n ,x ,y;
    cin>>n>>x>>y;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    multiset<int>mp;
    for(int i = 0;i<n;i++){
        mp.insert(arr[i]);
    }
    long long i = 0;
    long long v = 0;
    bool t = false;
    while(i < y){
        long long a = *mp.begin();
        a = *mp.begin()^x;
        mp.erase(mp.begin());
        mp.insert(a);
        if(a == *mp.begin()){
            v = i+1;
            t = true;
            break;
        }
        i++;
    }
    if(t){
        if(v % 2== 0 && y % 2 == 0 || v % 2 != 0 && y % 2 != 0){
            for(auto itr = mp.begin();itr != mp.end();itr++){
                cout<<*itr<<" ";
            }
            cout<<endl;
        }else{
            long long m = *mp.begin();
            m = *mp.begin()^x;
            mp.erase(mp.begin());
            mp.insert(m);
            for(auto itr = mp.begin();itr != mp.end();itr++){
                cout<<*itr<<" ";
            }
            cout<<endl;
        }
    }else{
        for(auto itr = mp.begin();itr != mp.end();itr++){
                cout<<*itr<<" ";
            }
            cout<<endl;
    }
}   
return 0;
}