#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool compare(pair<long long,long long>&a,pair<long long,long long>&b){
     return a.first+a.second==b.first+b.second?a.first<b.first:a.first+a.second<b.second+b.first;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){ 
    long long n,k;
    cin>>n>>k;
    long long a[n];
    long long b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<long long,long long>>v;

    for(int i=0;i<n;i++){
        v.push_back(make_pair(a[i],b[i]));
    }
    sort(v.begin(),v.end(),compare);
    // for(auto itr=v.begin();itr!=v.end();itr++){
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }
    // long long cnt=0;
    // for(auto itr = v.begin();itr!=v.end();itr++){
    //         k = k-(itr->first+itr->second);
    //         cnt++;
    //         if(itr->first>k){
    //             break;
    //         }
    //         // cout<<itr->first<<" "<<k<<endl;
    // }
    // cout<<cnt<<endl;
    int i=0;
    long long zero=0;
    long long s=0;
    for(int i=0;i<n;i++){
        if(v[i].first+v[i].second+s<=k){
            s+=v[i].first+v[i].second;
            zero=max(zero,v[i].second);
            i++;
        }
        else{
            break;
        }
    }
    vector<long long>o(n);
    for(int k=n-1;k>=0;k--){
        if(k==n-1){
            o[k]=v[k].first;
        }else{
            o[k]=min(o[k+1],v[k].first);
        }
    }
    int cnt =i;
    if(i<n){
        int dogi=k-s;
        if(o[i]<=dogi){
            cnt++;
        }else if(dogi+zero>=v[i].first+v[i].second){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}