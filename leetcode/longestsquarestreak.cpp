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
    vector<int>nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    sort(nums.begin(),nums.end());
    map<int,int>mp;
    for(int i=n-1;i>=0;i--){
        mp[nums[i]]++;
    }
    int ans =0;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        int x = itr->first;
        int cnt =1;
        while(mp[sqrt(x)]>0){
            int p = sqrt(x);
            if(p*p==x){
                cnt++;
            }else{
                break;
            }
            x=sqrt(x);
        }
        ans = max(ans,cnt);
    }
    if(ans==1){
        cout<<"-1"<<endl;
    }else{
        cout<<ans<<endl;
    }
}
return 0;
}