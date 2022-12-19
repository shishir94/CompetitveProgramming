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
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    for(int i = 0;i<n;i++){
        int key = arr[i];
        mp[key]++;
    }
    bool u = false;
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        if(itr->second == 1){
            u = true;
        }else{
           u = false;
            break;
        }
    }
    if(u && n%2==0 ){
        cout<<"YES"<<endl;
    }else if(u && n%2!=0){
        cout<<"NO"<<endl;
    }else if(u== false){
        cout<<"YES"<<endl;
    }

}
return 0;
}