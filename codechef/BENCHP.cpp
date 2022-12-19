#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n , w, wr;
    cin>>n>>w>>wr;
    int arr[n];
    long long sum = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    if(wr >= w){
        cout<<"YES"<<endl;
    }else{
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++){
            int key = arr[i];
            mp[key]++;
        }
        //int sum = 0;
        for(auto itr = mp.begin(); itr != mp.end();itr++){
          //  cout<<itr->first<<" "<<itr->second<<endl;
            if((itr->second) %2 != 0){
                sum = sum - itr->first;
            }
        }
       // cout<<sum<<endl;
        if(sum + wr >= w){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}