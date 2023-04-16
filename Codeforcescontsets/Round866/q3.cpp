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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<long long,long long>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    vector<long long>v;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        v.push_back(itr->first);
    }
    long long u=-1;
    sort(v.begin(),v.end());
    for(int i=0;i<=v[v.size()-1];i++){
        if(v[i]!=i){
            u=i;
            break;
        }
    }
    if(u==-1){
        u = v[v.size()-1]+1;
    }
    if(u==0){
        cout<<"YES"<<endl;
    }else{
        if(mp.find(u+1)==mp.end()){
            if(u==v[v.size()-1]+1){
                bool ll = true;
                for(auto itr = mp.begin();itr !=mp.end();itr++){
                    if(itr->second >1){
                        // cout<<itr->second<<endl;
                        ll=false;
                        break;
                    }
                }
                if(ll==false){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                cout<<"YES"<<endl;
            }
        }else{
                int o=0,p=0;
                for(int i=0;i<n;i++){
                    if(arr[i]==u+1){
                        o=i;
                        break;
                    }
                }
                for(int i=n-1;i>=0;i--){
                    if(arr[i]==u+1){
                        p=i;
                        break;
                    }
                }
                for(int i=o;i<=p;i++){
                    mp[arr[i]]--;
                }
                bool rr =true;
                for(auto itr = mp.begin();itr!=mp.end();itr++){
                    if(itr->first < (u+1)){
                        if(itr->second==0){
                            rr=false;
                            break;
                        }
                    }
                }
                if(rr){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
    }
}
return 0;
}