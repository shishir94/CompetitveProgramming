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
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            v.push_back(i);
        }
    }
    int ans = INT_MIN;
    int x =INT_MAX;
    bool g = true;
    for(int i=0;i<v.size()-1;i++){
        if((v[i+1]-v[i])%2!=0){
            g=false;
            break;
        }
    }
    // cout<<ans<<" "<<x<<endl;
    if(g==true){
        cout<<"2"<<endl;
    }else{
        cout<<"1"<<endl;
    }
}
return 0;
}