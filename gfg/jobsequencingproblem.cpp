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
    string id[n];
    int dead[n];
    int profit[n];
    vector<pair<int,int>>b;
    for(int i=0;i<n;i++){
        cin>>id[i]>>dead[i]>>profit[i];
        b.push_back(make_pair(profit[i],dead[i]));
    }
    sort(b.begin(),b.end());
    long long ans = 0;
    vector<int>v(n,-1);
    vector<int>h;
    for(int i=n-1;i>=0;i--){
        for(int j =min(n,b[i].second)-1;j>=0;j--){
            if(v[j]==-1){
                ans+=b[i].first;
                v[j]=0;
                break;
            }
        }
    }
    cout<<ans<<endl;
}
return 0;
}