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
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string arr1[n];
    for(int i=0;i<n;i++){
        arr1[i] = arr[i];
    }
    unordered_map<string,string>mp;
    vector<string>v;
    for(int i=0;i<n;i++){
        sort(arr[i].begin(),arr[i].end());
    }
    for(int i=0;i<n;i++){
        v.push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        mp.insert(pair<string,string>(arr1[i],v[i]));
    }
    set<string>s;
    for(auto itr = mp.begin();itr!=mp.end();itr++)
    {
        s.insert(itr->second);
    }
    vector<vector<string>>b;
    for(auto itr = s.begin();itr!=s.end();itr++){
        vector<string>h;
        for(auto i = mp.begin();i!=mp.end();i++){
            if(*itr == i->second)
            {
                h.push_back(i->first);
            }
        }
        b.push_back(h);
        h.clear();
    }
    for(int i=0;i<b.size();i++){
        for(int j=0;j<b[i].size();j++){
             cout<<b[i][j]<<" ";
        }
    }
    cout<<endl;
}
return 0;
}

