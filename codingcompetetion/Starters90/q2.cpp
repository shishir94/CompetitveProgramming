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
    string s;;
    cin>>s;
    map<char,int>mp;;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    if(n% 2 == 0){
        bool p = true;
        for(auto itr = mp.begin();itr != mp.end();itr++){
            if((itr->second) % 2!=0 ){
                p=false;
                break;
            }
        }
        if(!p){
            cout<<0<<endl;
        }else{
            cout<<"1"<<endl;
        }
    }else{
        bool u = true;
        int cnt =0;
        for(auto itr = mp.begin();itr != mp.end();itr++){
            if((itr->second) % 2!=0 ){
                cnt++;
            }
            if(cnt >1){
                u=false;
                break;
            }
        }
        if(!u){
            cout<<"0"<<endl;
        }else{
            int o = mp.size();
            if(o==1){
                cout<<"2"<<endl;
            }else{
                cout<<1<<endl;
            }
        }
    }
}
return 0;
}