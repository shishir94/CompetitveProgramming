/*
Given an array find the number of pairs having difference exactly equal to k.
*/

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
    int A[n];
    int ans = 0;
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    int B;
    cin>>B;
    sort(A,A+n);
    map<int,int>mp;
    for(int i = 0;i<n;i++){
        int key = A[i];
        mp[key]++;
    }
    bool c = false;
    if( B == 0){
        for(auto itr = mp.begin(); itr != mp.end();itr++){
            if(itr->second >1){
                c = true;
                break;
            }
        }
    }else{
        int i = 1;
        int j = 0;
        int cnt = 0;
        while(i < n){
            if(A[i]-A[j] > B){
                j++;
            }else if(A[i] -A[j] < B){
                i++;
            }else{
                if(i != j){
                    cnt++;
                }
                i++;
                j++;
            }
            if(cnt > 0){
                c = true;
                break;
            }
        }
        // cout<<cnt<<endl; 
    }
    if(c){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
    
}
return 0;
}
