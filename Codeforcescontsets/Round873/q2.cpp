#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(b == 0){
        return a;
    }
    if(a == 0){
        return b ;
    }
    return gcd(b , a % b);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt =0;
    map<int,int>mp;
    vector<int>ff;
    for(int i=0;i<n;i++){
        int x = abs(arr[i]-i-1);
        ff.push_back(x);
        
    }
    int temp = 0;
    for(int i=0;i<n;i++){
        temp = gcd(temp,ff[i]);
    }
    // if(cnt == n){
    //     cout<<"0"<<endl;
    // }else{
    //     vector<pair<int,int>>v;
    //     for(auto itr = mp.begin();itr != mp.end();itr++){
    //         v.push_back(make_pair(itr->second,itr->first));
    //     }
    //     sort(v.begin(),v.end());
    //     if(v[v.size()-1].second ==0){
    //         cout<<v[v.size()-2].second<<endl;
    //     }else{
    //         cout<<v[v.size()-1].second<<endl;
    //     }
    // }
    cout<<temp<<endl;
}
return 0;
}