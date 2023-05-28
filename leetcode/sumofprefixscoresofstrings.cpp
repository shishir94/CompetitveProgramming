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
    vector<string>v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    vector<int>ans;
    map<string,int>mp;
    for(int i=0;i<v.size();i++){
        string h ="";
        for(int j=0;j<v[i].size();j++){
            h+=v[i][j];
            if(mp.size()==0){
                mp[h]=1;
            }else{
                if(mp.find(h) == mp.end()){
                    mp[h]=1;
                }else{
                    mp[h]+=1;
                }
            }
        }
    }
    for(int i=0;i<v.size();i++){
        string h ="";
        int sum =0;
        for(int j=0;j<v[i].size();j++){
            h+=v[i][j];
            sum+=mp[h];
        }
        ans.push_back(sum);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
return 0;
}