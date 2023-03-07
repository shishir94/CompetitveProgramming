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
    long long c = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        c=max(c,arr[i]);
    }
    map<long long,long long>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    bool p = false; 
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        if(itr->second %2!=0){
            p=true;
            break;
        }
    }
    if(p){
        cout<<"Marichka"<<endl;
    }else{
        cout<<"Zenyk"<<endl;
    }

}
return 0;
}