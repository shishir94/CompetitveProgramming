#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n =s.size();
    int i=0;
    int ans =0;
    int cnt=0;
    map<char,int>mp;
    for(int i=0;i<n;i++){
        int k=i;
        while(k<n){
            if(mp.find(s[k])==mp.end()){
                mp[s[k]]++;
                cnt++;
            }else{
                // cout<<cnt<<endl;
                ans = max(ans,cnt);
                cnt=0;
                mp.clear();
                break;
                // mp[s[k]]++;
            }
            k++;
        }
        ans = max(ans,cnt);
    }
    cout<<max(ans,cnt)<<endl;
}

return 0;
}