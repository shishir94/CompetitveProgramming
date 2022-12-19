#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n , m;
    cin>>n>>m;
    long long arr[n];
    long long cnt = 0;
    long long cnt1 = 0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<m){
            cnt++;
        }else if(arr[i]>m){
            cnt1++;
        }
    }
    vector<int>sp;
    for(int i = 0;i<n;i++){
        if(arr[i] < m){
            sp.push_back(arr[i]);
        }
    }
    long long arr1[m] = {0};
    for(int i = 0;i<sp.size();i++){
        arr1[sp[i]]++;
    }
    bool t = true;
    for(int i = 1;i<m;i++){
        if(arr1[i]>0){
            t = true;
        }else{
            t = false;
            break;
        }
    }
    if(t==false){
        cout<<"-1"<<endl;
    }else{
        cout<<cnt+cnt1<<endl;
    }
}
return 0;
}