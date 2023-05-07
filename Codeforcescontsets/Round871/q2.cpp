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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt =0;
    int ans =0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt++;
        }else{
            ans = max(cnt,ans);
            cnt=0;
        }
    }
    ans = max(ans,cnt);
    cout<<ans<<endl;
}
return 0;
}