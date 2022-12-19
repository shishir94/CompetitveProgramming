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
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    int ans = 0;
    unordered_map<int,int>mp;
    for(int i = 0;i<n;i++){
        sum = sum+arr[i];
        if(ans == 0 && arr[i] == 0){
            ans = 1;
        }
        if(sum == 0){
            ans = i+1;
        }
        if (mp.find(sum) != mp.end()){
            ans = max(ans, i - mp[sum]);
        }else{
            mp[sum] = i;
        }
    }
    cout<<ans<<endl;
}
return 0;
}