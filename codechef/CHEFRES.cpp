#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<pair<long long,long long>>v;
    for(int i = 0;i<n;i++){
        int l,r;
        cin>>l>>r;
        v.push_back(make_pair(l,r));
    }
    sort(v.begin(),v.end());
    long long ans = v[0].first;
    long long ans1 = v[v.size()-1].second;
    for(int i = 0;i<m;i++){
        long long p;
        cin>>p;
        if(p > ans1){
            cout<<"-1"<<endl;
        }
        if(p < ans){
            cout<<ans-p<<endl;
        }
        for(int j = 0;j<n;j++){
            if(p >= v[j].first && p < v[j].second){
                cout<<"0"<<endl;
                break;
            }else if(v[j].second <= p && p < v[j+1].first){
                cout<<v[j+1].first-p<<endl;
                break;
            }
        }
    }
}
return 0;
}