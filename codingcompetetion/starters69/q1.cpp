#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    long long arr1[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        cin>>arr1[i];
    }  
    unordered_set<long long>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    if(s.size()<k){
        cout<<"-1"<<endl;
    }else{
        unordered_map<long long ,long long>mp;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])!=mp.end()){
                if(mp[arr[i]]>arr1[i]){
                    mp[arr[i]]=arr1[i];
                }
            }else{
                mp[arr[i]]=arr1[i];
            }
        }
        vector<long long>v;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            v.push_back(itr->second);
        }
        sort(v.begin(),v.end());
        long long sum = 0;
        for(int i=0;i<k;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
    }

}
return 0;
}