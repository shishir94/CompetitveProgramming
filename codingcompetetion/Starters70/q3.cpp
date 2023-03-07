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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<long long,long long>mp;
    for(int i=0;i<n;i++){
        int key = arr[i];
        mp[key]++;
    }
    bool p = true;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        if((itr->second % itr->first)!=0){
            p=false;
            // cout<<itr->second<<endl;
            break;
        }
    }
    if(p==false){
        cout<<"-1"<<endl;
    }else{
        vector<long long>v(n,-1);
        int val =1;
        for(int i=0;i<n;i++){
            if(v[i]!=-1){
                continue;
            }
            int cnt = 0;
            for(int j=i;j<n&&cnt<arr[i];j++){
                if(v[j]!=-1){
                    continue;
                }
                if(arr[j]==arr[i]){
                    v[j]=val;
                    cnt++;
                }
            }
            val++;
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}