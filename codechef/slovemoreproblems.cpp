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
    long long i=0;
    long long mx=0;
    long long cnt=0;
    long long s=0;
    while(i<n){
        long long s = v[i].first+v[i].second;
        if(k>=s){
            cnt++;
            mx=max(mx,v[i].second);
            k-=s;
        }
        else{
            break;
        }
        i++;
    }
    int id =i;
    while(id<n){
        if(k>=v[id].first){
            cnt++;
            break;
        }else{
            long long s = (v[id].first+v[id].second);
            if(k+mx>=s){
                cnt++;
                break;
            }
        }
        id++;
    }
    cout<<cnt<<endl;
}
return 0;
}