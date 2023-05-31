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
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    map<int,int>mp;
    int cnt =1;
    for(int i=0;i<n-1;i++){
        if(arr1[i]==arr1[i+1]){
            cnt++;
        }else{
            if(mp.size()==0){
                mp[arr1[i]]=cnt;
                cnt=1;
            }else{
                if(mp.find(arr1[i])==mp.end()){
                    mp[arr1[i]]=cnt;
                    cnt=1;
                }else{
                    mp[arr1[i]] = max(mp[arr1[i]],cnt);
                    cnt=1;
                }
            }
            
        }
    }
    mp[arr1[n-1]] = max(mp[arr1[n-1]],cnt);
    int cnt1=1;
    map<int,int>mp1;
    for(int i=0;i<n-1;i++){
        if(arr2[i]==arr2[i+1]){
            cnt1++;
        }else{
            if(mp1.size()==0){
                mp1[arr2[i]]=cnt1;
                cnt1=1;
            }else{
                if(mp1.find(arr2[i])==mp1.end()){
                    mp1[arr2[i]]=cnt1;
                    cnt1=1;
                }else{
                    mp1[arr2[i]] = max(mp1[arr2[i]],cnt1);
                    cnt1=1;
                }
            }
            
        }
    }
    mp1[arr2[n-1]] = max(mp1[arr2[n-1]],cnt1);
    int ans =0;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        mp[itr->first]+=mp1[itr->first];
    }
    for(auto itr = mp1.begin();itr!=mp1.end();itr++){
        if(mp.find(itr->first)==mp.end()){
            mp[itr->first]=mp1[itr->first];
        }
    }
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        ans = max(ans,itr->second);
    }
    cout<<ans<<endl;
}
return 0;
}