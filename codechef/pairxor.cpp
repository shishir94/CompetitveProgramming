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
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    int B;
    cin>>B;
    unordered_map<int,int>mp;
    int cnt = 0;
    for(auto i:A){
        if(mp.find(i^B) != mp.end()){
            cnt++;
        }else{
            mp[i]++;
        }
    }
    cout<<cnt<<endl;
    for(auto itr = mp.begin();itr!= mp.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}
return 0;
}