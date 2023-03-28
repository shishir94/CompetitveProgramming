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
    int n;
    cin>>n;
    string wordDict[n];
    for(int i=0;i<n;i++){
        cin>>wordDict[i];
    }
    unordered_set<string>mp;
    for(int i=0;i<n;i++){
        mp.insert(wordDict[i]);
    }
    vector<bool>dp(n+1,false);
    dp[0]=true;
    for(int i=1;i<=n;i++){
        for(int j=i-1;j>=0;j--){
            if(dp[j]){
                string c = s.substr(j,i-j);
                if(mp.find(c)!=mp.end()){
                    dp[i]=true;
                    break;
                }
            }
        }
    }
    cout<<dp[n]<<endl;
}
return 0;
}