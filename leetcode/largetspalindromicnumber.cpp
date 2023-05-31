#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string num;
    cin>>num;
    map<char,int>m;
    int n = num.size();
    for(int i=0;i<n;i++){
        m[num[i]]++;
    }
    vector<pair<char,int>>v;
    vector<char>s;
    for(auto itr=m.begin();itr!=m.end();itr++){
        if(itr->second >1){
            v.push_back(make_pair(itr->first,(itr->second)/2));
            m[itr->first] =(itr->second)%2;
        }
    }
    for(auto itr=m.begin();itr!=m.end();itr++){
        if(itr->second ==1)
            s.push_back(itr->first);
    }
    sort(s.rbegin(),s.rend());
    sort(v.rbegin(),v.rend());
    string ans ="";
    string d ="";
    for(int i=0;i<v.size();i++){
        // string  f="";
        for(int j=0;j<v[i].second;j++){
            ans+=v[i].first;
            d+=v[i].first;
        }
        // cout<<ans<<endl;
        // ans +=f;
    }
    reverse(d.begin(),d.end());
    ans += s[0]+d;
    cout<<ans<<endl;
}
return 0;
}