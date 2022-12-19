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
    string x;
    cin>>x;
    vector<pair<string,int>>v;
    for(int i=0;i<n-1;i++){
        string f = x.substr(i,2);
        v.push_back(make_pair(f,i));
    }
    bool b = false;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(v[i].first==v[j].first&&(abs(v[i].second-v[j].second)>=2)){
                b=true;
                break;
            }else{
                continue;
            }
        }
        if(b){
            break;
        }
    }
    if(b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}